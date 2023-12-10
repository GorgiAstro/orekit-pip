#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonMultipleShooting::class$ = NULL;
      jmethodID *PythonMultipleShooting::mids$ = NULL;
      bool PythonMultipleShooting::live$ = false;

      jclass PythonMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compute_2afa36052df4765d] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMultipleShooting::PythonMultipleShooting() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonMultipleShooting::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self);
      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMultipleShooting)[] = {
        { Py_tp_methods, t_PythonMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonMultipleShooting_init_ },
        { Py_tp_getset, t_PythonMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMultipleShooting, t_PythonMultipleShooting, PythonMultipleShooting);

      void t_PythonMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMultipleShooting), &PY_TYPE_DEF(PythonMultipleShooting), module, "PythonMultipleShooting", 1);
      }

      void t_PythonMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "class_", make_descriptor(PythonMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "wrapfn_", make_descriptor(t_PythonMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "compute", "()Ljava/util/List;", (void *) t_PythonMultipleShooting_compute0 },
          { "pythonDecRef", "()V", (void *) t_PythonMultipleShooting_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonMultipleShooting::wrap_Object(PythonMultipleShooting(((t_PythonMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        PythonMultipleShooting object((jobject) NULL);

        INT_CALL(object = PythonMultipleShooting());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args)
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

      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "compute", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
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

      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data)
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
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundAtNightDetector::class$ = NULL;
        jmethodID *GroundAtNightDetector::mids$ = NULL;
        bool GroundAtNightDetector::live$ = false;
        jdouble GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;

        jclass GroundAtNightDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundAtNightDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ebc791d379a84ca4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/models/AtmosphericRefractionModel;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_3044864f6b67c6be] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundAtNightDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ASTRONOMICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "ASTRONOMICAL_DAWN_DUSK_ELEVATION");
            CIVIL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "CIVIL_DAWN_DUSK_ELEVATION");
            NAUTICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "NAUTICAL_DAWN_DUSK_ELEVATION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundAtNightDetector::GroundAtNightDetector(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::models::AtmosphericRefractionModel & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ebc791d379a84ca4, a0.this$, a1.this$, a2, a3.this$)) {}

        jdouble GroundAtNightDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
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
        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args);
        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args);
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data);
        static PyGetSetDef t_GroundAtNightDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundAtNightDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundAtNightDetector__methods_[] = {
          DECLARE_METHOD(t_GroundAtNightDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundAtNightDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundAtNightDetector)[] = {
          { Py_tp_methods, t_GroundAtNightDetector__methods_ },
          { Py_tp_init, (void *) t_GroundAtNightDetector_init_ },
          { Py_tp_getset, t_GroundAtNightDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundAtNightDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundAtNightDetector, t_GroundAtNightDetector, GroundAtNightDetector);
        PyObject *t_GroundAtNightDetector::wrap_Object(const GroundAtNightDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundAtNightDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundAtNightDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundAtNightDetector), &PY_TYPE_DEF(GroundAtNightDetector), module, "GroundAtNightDetector", 0);
        }

        void t_GroundAtNightDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "class_", make_descriptor(GroundAtNightDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "wrapfn_", make_descriptor(t_GroundAtNightDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundAtNightDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "ASTRONOMICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "CIVIL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "NAUTICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION));
        }

        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundAtNightDetector::initializeClass, 1)))
            return NULL;
          return t_GroundAtNightDetector::wrap_Object(GroundAtNightDetector(((t_GroundAtNightDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundAtNightDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::models::AtmosphericRefractionModel a3((jobject) NULL);
          GroundAtNightDetector object((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GroundAtNightDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundAtNightDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundAtNightDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *UpperBounds::class$ = NULL;
            jmethodID *UpperBounds::mids$ = NULL;
            bool UpperBounds::live$ = false;

            jclass UpperBounds::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDnl_20146e8e62e5a3f0] = env->getStaticMethodID(cls, "getDnl", "(DDII)D");
                mids$[mid_getDnl_a88eb2063f3a6dcc] = env->getStaticMethodID(cls, "getDnl", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRnml_37547adcdf7e926a] = env->getStaticMethodID(cls, "getRnml", "(DIIIII)D");
                mids$[mid_getRnml_5215571185db5759] = env->getStaticMethodID(cls, "getRnml", "(Lorg/hipparchus/CalculusFieldElement;IIIII)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble UpperBounds::getDnl(jdouble a0, jdouble a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getDnl_20146e8e62e5a3f0], a0, a1, a2, a3);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getDnl(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getDnl_a88eb2063f3a6dcc], a0.this$, a1.this$, a2, a3));
            }

            jdouble UpperBounds::getRnml(jdouble a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getRnml_37547adcdf7e926a], a0, a1, a2, a3, a4, a5);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getRnml(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getRnml_5215571185db5759], a0.this$, a1, a2, a3, a4, a5));
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
            static PyObject *t_UpperBounds_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UpperBounds_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UpperBounds_getDnl(PyTypeObject *type, PyObject *args);
            static PyObject *t_UpperBounds_getRnml(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_UpperBounds__methods_[] = {
              DECLARE_METHOD(t_UpperBounds, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, getDnl, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, getRnml, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UpperBounds)[] = {
              { Py_tp_methods, t_UpperBounds__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UpperBounds)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UpperBounds, t_UpperBounds, UpperBounds);

            void t_UpperBounds::install(PyObject *module)
            {
              installType(&PY_TYPE(UpperBounds), &PY_TYPE_DEF(UpperBounds), module, "UpperBounds", 0);
            }

            void t_UpperBounds::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "class_", make_descriptor(UpperBounds::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "wrapfn_", make_descriptor(t_UpperBounds::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UpperBounds_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UpperBounds::initializeClass, 1)))
                return NULL;
              return t_UpperBounds::wrap_Object(UpperBounds(((t_UpperBounds *) arg)->object.this$));
            }
            static PyObject *t_UpperBounds_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UpperBounds::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_UpperBounds_getDnl(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jdouble a0;
                  jdouble a1;
                  jint a2;
                  jint a3;
                  jdouble result;

                  if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getDnl(a0, a1, a2, a3));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  jint a2;
                  jint a3;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "KKII", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getDnl(a0, a1, a2, a3));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getDnl", args);
              return NULL;
            }

            static PyObject *t_UpperBounds_getRnml(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jint a5;
                  jdouble result;

                  if (!parseArgs(args, "DIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getRnml(a0, a1, a2, a3, a4, a5));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "KIIIII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getRnml(a0, a1, a2, a3, a4, a5));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getRnml", args);
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
#include "org/orekit/propagation/conversion/HighamHall54IntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *HighamHall54IntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54IntegratorBuilder::mids$ = NULL;
        bool HighamHall54IntegratorBuilder::live$ = false;

        jclass HighamHall54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54IntegratorBuilder::HighamHall54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator HighamHall54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_HighamHall54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54IntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HighamHall54IntegratorBuilder, t_HighamHall54IntegratorBuilder, HighamHall54IntegratorBuilder);

        void t_HighamHall54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54IntegratorBuilder), &PY_TYPE_DEF(HighamHall54IntegratorBuilder), module, "HighamHall54IntegratorBuilder", 0);
        }

        void t_HighamHall54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "class_", make_descriptor(HighamHall54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54IntegratorBuilder::wrap_Object(HighamHall54IntegratorBuilder(((t_HighamHall54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54IntegratorBuilder_init_(t_HighamHall54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54IntegratorBuilder_buildIntegrator(t_HighamHall54IntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFields::class$ = NULL;
          jmethodID *GravityFields::mids$ = NULL;
          bool GravityFields::live$ = false;

          jclass GravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConstantNormalizedProvider_8be9acc0db722a5e] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_0fdcb0a280e1e598] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_10d7c0f6de166543] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_c2f412128b078525] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_8be9acc0db722a5e], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_0fdcb0a280e1e598], a0, a1));
          }

          ::java::util::List GravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_10d7c0f6de166543], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_c2f412128b078525], a0, a1));
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
          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args);

          static PyMethodDef t_GravityFields__methods_[] = {
            DECLARE_METHOD(t_GravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getUnnormalizedProvider, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFields)[] = {
            { Py_tp_methods, t_GravityFields__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFields, t_GravityFields, GravityFields);

          void t_GravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFields), &PY_TYPE_DEF(GravityFields), module, "GravityFields", 0);
          }

          void t_GravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "class_", make_descriptor(GravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "wrapfn_", make_descriptor(t_GravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFields::initializeClass, 1)))
              return NULL;
            return t_GravityFields::wrap_Object(GravityFields(((t_GravityFields *) arg)->object.this$));
          }
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError((PyObject *) self, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedProvider", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonNRLMSISE00InputParameters::class$ = NULL;
          jmethodID *PythonNRLMSISE00InputParameters::mids$ = NULL;
          bool PythonNRLMSISE00InputParameters::live$ = false;

          jclass PythonNRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAp_2b9aa40de0a696a4] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNRLMSISE00InputParameters::PythonNRLMSISE00InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonNRLMSISE00InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonNRLMSISE00InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonNRLMSISE00InputParameters::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self);
          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_PythonNRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNRLMSISE00InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_PythonNRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonNRLMSISE00InputParameters_init_ },
            { Py_tp_getset, t_PythonNRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNRLMSISE00InputParameters, t_PythonNRLMSISE00InputParameters, PythonNRLMSISE00InputParameters);

          void t_PythonNRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNRLMSISE00InputParameters), &PY_TYPE_DEF(PythonNRLMSISE00InputParameters), module, "PythonNRLMSISE00InputParameters", 1);
          }

          void t_PythonNRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "class_", make_descriptor(PythonNRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_PythonNRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNRLMSISE00InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonNRLMSISE00InputParameters_getAp0 },
              { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getAverageFlux1 },
              { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getDailyFlux2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMinDate4 },
              { "pythonDecRef", "()V", (void *) t_PythonNRLMSISE00InputParameters_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonNRLMSISE00InputParameters::wrap_Object(PythonNRLMSISE00InputParameters(((t_PythonNRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonNRLMSISE00InputParameters object((jobject) NULL);

            INT_CALL(object = PythonNRLMSISE00InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args)
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getAp", result);
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

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAverageFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDailyFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/ContinuousScheduler.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *ContinuousScheduler::class$ = NULL;
          jmethodID *ContinuousScheduler::mids$ = NULL;
          bool ContinuousScheduler::live$ = false;

          jclass ContinuousScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/ContinuousScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_df0efa5394471381] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_measurementIsFeasible_db6d81809797ddaa] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinuousScheduler::ContinuousScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_df0efa5394471381, a0.this$, a1.this$)) {}

          jboolean ContinuousScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_db6d81809797ddaa], a0.this$);
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
          static PyObject *t_ContinuousScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinuousScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinuousScheduler_of_(t_ContinuousScheduler *self, PyObject *args);
          static int t_ContinuousScheduler_init_(t_ContinuousScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ContinuousScheduler_measurementIsFeasible(t_ContinuousScheduler *self, PyObject *arg);
          static PyObject *t_ContinuousScheduler_get__parameters_(t_ContinuousScheduler *self, void *data);
          static PyGetSetDef t_ContinuousScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_ContinuousScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContinuousScheduler__methods_[] = {
            DECLARE_METHOD(t_ContinuousScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinuousScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinuousScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_ContinuousScheduler, measurementIsFeasible, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContinuousScheduler)[] = {
            { Py_tp_methods, t_ContinuousScheduler__methods_ },
            { Py_tp_init, (void *) t_ContinuousScheduler_init_ },
            { Py_tp_getset, t_ContinuousScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContinuousScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(ContinuousScheduler, t_ContinuousScheduler, ContinuousScheduler);
          PyObject *t_ContinuousScheduler::wrap_Object(const ContinuousScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ContinuousScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ContinuousScheduler *self = (t_ContinuousScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ContinuousScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ContinuousScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ContinuousScheduler *self = (t_ContinuousScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ContinuousScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(ContinuousScheduler), &PY_TYPE_DEF(ContinuousScheduler), module, "ContinuousScheduler", 0);
          }

          void t_ContinuousScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "class_", make_descriptor(ContinuousScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "wrapfn_", make_descriptor(t_ContinuousScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContinuousScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContinuousScheduler::initializeClass, 1)))
              return NULL;
            return t_ContinuousScheduler::wrap_Object(ContinuousScheduler(((t_ContinuousScheduler *) arg)->object.this$));
          }
          static PyObject *t_ContinuousScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContinuousScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContinuousScheduler_of_(t_ContinuousScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ContinuousScheduler_init_(t_ContinuousScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            ContinuousScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = ContinuousScheduler(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ContinuousScheduler_measurementIsFeasible(t_ContinuousScheduler *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }
          static PyObject *t_ContinuousScheduler_get__parameters_(t_ContinuousScheduler *self, void *data)
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
#include "org/orekit/propagation/events/handlers/ContinueOnEvent.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *ContinueOnEvent::class$ = NULL;
          jmethodID *ContinueOnEvent::mids$ = NULL;
          bool ContinueOnEvent::live$ = false;

          jclass ContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/ContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_abc543fa9701720f] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinueOnEvent::ContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::ode::events::Action ContinueOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_abc543fa9701720f], a0.this$, a1.this$, a2));
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
          static PyObject *t_ContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ContinueOnEvent_init_(t_ContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ContinueOnEvent_eventOccurred(t_ContinueOnEvent *self, PyObject *args);

          static PyMethodDef t_ContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_ContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContinueOnEvent)[] = {
            { Py_tp_methods, t_ContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_ContinueOnEvent_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContinueOnEvent, t_ContinueOnEvent, ContinueOnEvent);

          void t_ContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(ContinueOnEvent), &PY_TYPE_DEF(ContinueOnEvent), module, "ContinueOnEvent", 0);
          }

          void t_ContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "class_", make_descriptor(ContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "wrapfn_", make_descriptor(t_ContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_ContinueOnEvent::wrap_Object(ContinueOnEvent(((t_ContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_ContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ContinueOnEvent_init_(t_ContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            ContinueOnEvent object((jobject) NULL);

            INT_CALL(object = ContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_ContinueOnEvent_eventOccurred(t_ContinueOnEvent *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractAmbiguityModifier::class$ = NULL;
          jmethodID *AbstractAmbiguityModifier::mids$ = NULL;
          bool AbstractAmbiguityModifier::live$ = false;

          jclass AbstractAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getDrivers_2afa36052df4765d] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
              mids$[mid_doModify_e4935e9a55e01fd8] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_doModifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "doModifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractAmbiguityModifier::AbstractAmbiguityModifier(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}
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
          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractAmbiguityModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractAmbiguityModifier)[] = {
            { Py_tp_methods, t_AbstractAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractAmbiguityModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractAmbiguityModifier, t_AbstractAmbiguityModifier, AbstractAmbiguityModifier);

          void t_AbstractAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractAmbiguityModifier), &PY_TYPE_DEF(AbstractAmbiguityModifier), module, "AbstractAmbiguityModifier", 0);
          }

          void t_AbstractAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "class_", make_descriptor(AbstractAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "wrapfn_", make_descriptor(t_AbstractAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractAmbiguityModifier::wrap_Object(AbstractAmbiguityModifier(((t_AbstractAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            AbstractAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = AbstractAmbiguityModifier(a0, a1));
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
#include "org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSPhaseBuilder::class$ = NULL;
          jmethodID *OneWayGNSSPhaseBuilder::mids$ = NULL;
          bool OneWayGNSSPhaseBuilder::live$ = false;

          jclass OneWayGNSSPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_d1341e9b1d47487a] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase OneWayGNSSPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase(env->callObjectMethod(this$, mids$[mid_build_d1341e9b1d47487a], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseBuilder, t_OneWayGNSSPhaseBuilder, OneWayGNSSPhaseBuilder);
          PyObject *t_OneWayGNSSPhaseBuilder::wrap_Object(const OneWayGNSSPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseBuilder), &PY_TYPE_DEF(OneWayGNSSPhaseBuilder), module, "OneWayGNSSPhaseBuilder", 0);
          }

          void t_OneWayGNSSPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "class_", make_descriptor(OneWayGNSSPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseBuilder::wrap_Object(OneWayGNSSPhaseBuilder(((t_OneWayGNSSPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data)
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
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrix::class$ = NULL;
      jmethodID *RealMatrix::mids$ = NULL;
      bool RealMatrix::live$ = false;

      jclass RealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_e9b72403ad502221] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_1506189166690b5e] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_blendArithmeticallyWith_b999dd1683240cd1] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copy_688b496048ff947b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_345c5b715074805a] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_afcb8e0873730b97] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_4410ec92987b66e9] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumn_abe82da4f5c7c981] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnMatrix_7b5d3ee1211255a1] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_b686e6fcbf82678b] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_0358d8ea02f2cdb1] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_dbbe5f05149dbf73] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_dff5885c2c873297] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_dff5885c2c873297] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_dff5885c2c873297] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_abe82da4f5c7c981] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowMatrix_7b5d3ee1211255a1] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_b686e6fcbf82678b] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_d608c12827b9e76d] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_d08295af63465f00] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_dff5885c2c873297] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_map_41aaa3ddf1abeed0] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_mapToSelf_41aaa3ddf1abeed0] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_e9b72403ad502221] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_1506189166690b5e] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_e9b72403ad502221] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_ac3d742ccc742f22] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_613347e28dd909cd] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_7b5d3ee1211255a1] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_ac3d742ccc742f22] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_613347e28dd909cd] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_e9b72403ad502221] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_f21dcd9464c6e3c5] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_f21dcd9464c6e3c5] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_7169a8c8a60b8b2c] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_7f7e7105aa2a1ac1] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_18388821294f273e] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_1506189166690b5e] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_7169a8c8a60b8b2c] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_7f7e7105aa2a1ac1] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_18388821294f273e] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_f92f0755fea39af9] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_e9b72403ad502221] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transpose_688b496048ff947b] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_e9b72403ad502221] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrix RealMatrix::add(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_add_e9b72403ad502221], a0.this$));
      }

      void RealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_1506189166690b5e], a0, a1, a2);
      }

      RealMatrix RealMatrix::blendArithmeticallyWith(const RealMatrix & a0, jdouble a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_b999dd1683240cd1], a0.this$, a1));
      }

      RealMatrix RealMatrix::copy() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_688b496048ff947b]));
      }

      void RealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_345c5b715074805a], a0.this$, a1.this$, a2.this$);
      }

      void RealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_afcb8e0873730b97], a0, a1, a2, a3, a4.this$);
      }

      RealMatrix RealMatrix::createMatrix(jint a0, jint a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4410ec92987b66e9], a0, a1));
      }

      JArray< jdouble > RealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_abe82da4f5c7c981], a0));
      }

      RealMatrix RealMatrix::getColumnMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_7b5d3ee1211255a1], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_b686e6fcbf82678b], a0));
      }

      JArray< JArray< jdouble > > RealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_0358d8ea02f2cdb1]));
      }

      jdouble RealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_dbbe5f05149dbf73], a0, a1);
      }

      jdouble RealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_dff5885c2c873297]);
      }

      jdouble RealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_dff5885c2c873297]);
      }

      jdouble RealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_dff5885c2c873297]);
      }

      JArray< jdouble > RealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_abe82da4f5c7c981], a0));
      }

      RealMatrix RealMatrix::getRowMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_7b5d3ee1211255a1], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_b686e6fcbf82678b], a0));
      }

      RealMatrix RealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_d608c12827b9e76d], a0.this$, a1.this$));
      }

      RealMatrix RealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_d08295af63465f00], a0, a1, a2, a3));
      }

      jdouble RealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_dff5885c2c873297]);
      }

      RealMatrix RealMatrix::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_map_41aaa3ddf1abeed0], a0.this$));
      }

      RealMatrix RealMatrix::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_mapToSelf_41aaa3ddf1abeed0], a0.this$));
      }

      RealMatrix RealMatrix::multiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e9b72403ad502221], a0.this$));
      }

      void RealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_1506189166690b5e], a0, a1, a2);
      }

      RealMatrix RealMatrix::multiplyTransposed(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e9b72403ad502221], a0.this$));
      }

      JArray< jdouble > RealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_ac3d742ccc742f22], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_613347e28dd909cd], a0.this$));
      }

      RealMatrix RealMatrix::power(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_power_7b5d3ee1211255a1], a0));
      }

      JArray< jdouble > RealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_ac3d742ccc742f22], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_613347e28dd909cd], a0.this$));
      }

      RealMatrix RealMatrix::preMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_e9b72403ad502221], a0.this$));
      }

      RealMatrix RealMatrix::scalarAdd(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_f21dcd9464c6e3c5], a0));
      }

      RealMatrix RealMatrix::scalarMultiply(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_f21dcd9464c6e3c5], a0));
      }

      void RealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_7169a8c8a60b8b2c], a0, a1.this$);
      }

      void RealMatrix::setColumnMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_7f7e7105aa2a1ac1], a0, a1.this$);
      }

      void RealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_18388821294f273e], a0, a1.this$);
      }

      void RealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_1506189166690b5e], a0, a1, a2);
      }

      void RealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_7169a8c8a60b8b2c], a0, a1.this$);
      }

      void RealMatrix::setRowMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_7f7e7105aa2a1ac1], a0, a1.this$);
      }

      void RealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_18388821294f273e], a0, a1.this$);
      }

      void RealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_f92f0755fea39af9], a0.this$, a1, a2);
      }

      RealMatrix RealMatrix::subtract(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e9b72403ad502221], a0.this$));
      }

      RealMatrix RealMatrix::transpose() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_688b496048ff947b]));
      }

      RealMatrix RealMatrix::transposeMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e9b72403ad502221], a0.this$));
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_copy(t_RealMatrix *self);
      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getData(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self);
      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self);
      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data);
      static PyGetSetDef t_RealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrix, data),
        DECLARE_GET_FIELD(t_RealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_RealMatrix, norm1),
        DECLARE_GET_FIELD(t_RealMatrix, normInfty),
        DECLARE_GET_FIELD(t_RealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrix__methods_[] = {
        DECLARE_METHOD(t_RealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, add, METH_O),
        DECLARE_METHOD(t_RealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNormInfty, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, map, METH_O),
        DECLARE_METHOD(t_RealMatrix, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_RealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, power, METH_O),
        DECLARE_METHOD(t_RealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_RealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_RealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrix)[] = {
        { Py_tp_methods, t_RealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(RealMatrix, t_RealMatrix, RealMatrix);

      void t_RealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrix), &PY_TYPE_DEF(RealMatrix), module, "RealMatrix", 0);
      }

      void t_RealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "class_", make_descriptor(RealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "wrapfn_", make_descriptor(t_RealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrix::initializeClass, 1)))
          return NULL;
        return t_RealMatrix::wrap_Object(RealMatrix(((t_RealMatrix *) arg)->object.this$));
      }
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args)
      {
        RealMatrix a0((jobject) NULL);
        jdouble a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_copy(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[I[I[[D", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< jdouble > > a4((jobject) NULL);

            if (!parseArgs(args, "IIII[[D", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getData(t_RealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInfty());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            RealMatrix a0((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrace());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AklToussaintHeuristic::class$ = NULL;
            jmethodID *AklToussaintHeuristic::mids$ = NULL;
            bool AklToussaintHeuristic::live$ = false;

            jclass AklToussaintHeuristic::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic");

                mids$ = new jmethodID[max_mid];
                mids$[mid_reducePoints_e6702ab1f73fd997] = env->getStaticMethodID(cls, "reducePoints", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Collection AklToussaintHeuristic::reducePoints(const ::java::util::Collection & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_reducePoints_e6702ab1f73fd997], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AklToussaintHeuristic_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AklToussaintHeuristic_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AklToussaintHeuristic_reducePoints(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_AklToussaintHeuristic__methods_[] = {
              DECLARE_METHOD(t_AklToussaintHeuristic, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AklToussaintHeuristic, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AklToussaintHeuristic, reducePoints, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AklToussaintHeuristic)[] = {
              { Py_tp_methods, t_AklToussaintHeuristic__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AklToussaintHeuristic)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AklToussaintHeuristic, t_AklToussaintHeuristic, AklToussaintHeuristic);

            void t_AklToussaintHeuristic::install(PyObject *module)
            {
              installType(&PY_TYPE(AklToussaintHeuristic), &PY_TYPE_DEF(AklToussaintHeuristic), module, "AklToussaintHeuristic", 0);
            }

            void t_AklToussaintHeuristic::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "class_", make_descriptor(AklToussaintHeuristic::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "wrapfn_", make_descriptor(t_AklToussaintHeuristic::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AklToussaintHeuristic_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AklToussaintHeuristic::initializeClass, 1)))
                return NULL;
              return t_AklToussaintHeuristic::wrap_Object(AklToussaintHeuristic(((t_AklToussaintHeuristic *) arg)->object.this$));
            }
            static PyObject *t_AklToussaintHeuristic_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AklToussaintHeuristic::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AklToussaintHeuristic_reducePoints(PyTypeObject *type, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Collection result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::hull::AklToussaintHeuristic::reducePoints(a0));
                return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
              }

              PyErr_SetArgsError(type, "reducePoints", arg);
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
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivativeStructure::class$ = NULL;
        jmethodID *FieldDerivativeStructure::mids$ = NULL;
        bool FieldDerivativeStructure::live$ = false;

        jclass FieldDerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_aa5c3ca19ecbe240] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acos_aa5c3ca19ecbe240] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acosh_aa5c3ca19ecbe240] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_92faf58b9a0bd4a3] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_629ba89773b89477] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_dc82eda6d2eed253] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asin_aa5c3ca19ecbe240] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asinh_aa5c3ca19ecbe240] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan_aa5c3ca19ecbe240] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_92faf58b9a0bd4a3] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_ab641a208c40f840] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atanh_aa5c3ca19ecbe240] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cbrt_aa5c3ca19ecbe240] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ceil_aa5c3ca19ecbe240] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_418b3af1711b43e6] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_44d0136f1427ef1d] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_92faf58b9a0bd4a3] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_629ba89773b89477] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_dc82eda6d2eed253] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cos_aa5c3ca19ecbe240] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cosh_aa5c3ca19ecbe240] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_differentiate_64b030afd4e7438b] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_92faf58b9a0bd4a3] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_629ba89773b89477] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_dc82eda6d2eed253] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_exp_aa5c3ca19ecbe240] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_expm1_aa5c3ca19ecbe240] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_floor_aa5c3ca19ecbe240] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getAllDerivatives_226a0b2040b1d2e1] = env->getMethodID(cls, "getAllDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_03b6c45268c88340] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/FDSFactory;");
            mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_46366c1e17d1d442] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_aa5c3ca19ecbe240] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_eba8e72a22c984ac] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_hypot_92faf58b9a0bd4a3] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hypot_ab641a208c40f840] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_integrate_64b030afd4e7438b] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_bf7ca04c1859a29d] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_3ad69d613db4204e] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_de806f1154fa7679] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_e3bfff7dc62eb9e4] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_db1717bb830be001] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_4544214d3dd4ea9a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_75156d0fbba42216] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_4a2b9849339eedb8] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_e2459d81ca072238] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_09af4654d2ee4ef1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_075d04a35efdd771] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_f221bb4ab1a2b975] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log_aa5c3ca19ecbe240] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log10_aa5c3ca19ecbe240] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log1p_aa5c3ca19ecbe240] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_92faf58b9a0bd4a3] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_629ba89773b89477] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_5209187934217f90] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_dc82eda6d2eed253] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_negate_aa5c3ca19ecbe240] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_newInstance_629ba89773b89477] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_92faf58b9a0bd4a3] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_629ba89773b89477] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_5209187934217f90] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_637cacc50ab693cf] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rebase_5c8aa3a2a6e5f11e] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_reciprocal_aa5c3ca19ecbe240] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_92faf58b9a0bd4a3] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_629ba89773b89477] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_dc82eda6d2eed253] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rint_aa5c3ca19ecbe240] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rootN_5209187934217f90] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_scalb_5209187934217f90] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sign_aa5c3ca19ecbe240] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sin_aa5c3ca19ecbe240] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_aa5c3ca19ecbe240] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_aa5c3ca19ecbe240] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_92faf58b9a0bd4a3] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_629ba89773b89477] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_dc82eda6d2eed253] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tan_aa5c3ca19ecbe240] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tanh_aa5c3ca19ecbe240] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_taylor_48885a3a6ec88a01] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_f2dc4f0d2f87d390] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_aa5c3ca19ecbe240] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_aa5c3ca19ecbe240] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ulp_aa5c3ca19ecbe240] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDerivativeStructure FieldDerivativeStructure::abs() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_629ba89773b89477], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_dc82eda6d2eed253], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_ab641a208c40f840], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cbrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ceil() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_418b3af1711b43e6], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_44d0136f1427ef1d], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_629ba89773b89477], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_dc82eda6d2eed253], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_64b030afd4e7438b], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_629ba89773b89477], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_dc82eda6d2eed253], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::exp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::expm1() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::floor() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_aa5c3ca19ecbe240]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldDerivativeStructure::getAllDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_226a0b2040b1d2e1]));
        }

        jint FieldDerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory FieldDerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_03b6c45268c88340]));
        }

        ::org::hipparchus::Field FieldDerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
        }

        jint FieldDerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        jint FieldDerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_46366c1e17d1d442], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::getPi() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_aa5c3ca19ecbe240]));
        }

        jdouble FieldDerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_eba8e72a22c984ac]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_ab641a208c40f840], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::integrate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_64b030afd4e7438b], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_bf7ca04c1859a29d], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_3ad69d613db4204e], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< FieldDerivativeStructure > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_de806f1154fa7679], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_e3bfff7dc62eb9e4], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_db1717bb830be001], a0, a1.this$, a2, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_4544214d3dd4ea9a], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_75156d0fbba42216], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_4a2b9849339eedb8], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_e2459d81ca072238], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5, const FieldDerivativeStructure & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_09af4654d2ee4ef1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5, jdouble a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_075d04a35efdd771], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_f221bb4ab1a2b975], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log10() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log1p() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_629ba89773b89477], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_5209187934217f90], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_dc82eda6d2eed253], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::negate() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::newInstance(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_629ba89773b89477], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_629ba89773b89477], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_5209187934217f90], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_637cacc50ab693cf], a0, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rebase(const JArray< FieldDerivativeStructure > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_5c8aa3a2a6e5f11e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::reciprocal() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_629ba89773b89477], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_dc82eda6d2eed253], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rint() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rootN(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_5209187934217f90], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::scalb(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_5209187934217f90], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sign() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_aa5c3ca19ecbe240]));
        }

        ::org::hipparchus::util::FieldSinCos FieldDerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_aa5c3ca19ecbe240]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldDerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sqrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_92faf58b9a0bd4a3], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_629ba89773b89477], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_dc82eda6d2eed253], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_aa5c3ca19ecbe240]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_48885a3a6ec88a01], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_f2dc4f0d2f87d390], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toDegrees() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toRadians() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_aa5c3ca19ecbe240]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ulp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_aa5c3ca19ecbe240]));
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
        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data);
        static PyGetSetDef t_FieldDerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, factory),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, field),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, order),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, pi),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, real),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, value),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_FieldDerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivativeStructure)[] = {
          { Py_tp_methods, t_FieldDerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDerivativeStructure, t_FieldDerivativeStructure, FieldDerivativeStructure);
        PyObject *t_FieldDerivativeStructure::wrap_Object(const FieldDerivativeStructure& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDerivativeStructure::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivativeStructure), &PY_TYPE_DEF(FieldDerivativeStructure), module, "FieldDerivativeStructure", 0);
        }

        void t_FieldDerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "class_", make_descriptor(FieldDerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "wrapfn_", make_descriptor(t_FieldDerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_FieldDerivativeStructure::wrap_Object(FieldDerivativeStructure(((t_FieldDerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::atan2(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::hypot(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldDerivativeStructure > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, t_FieldDerivativeStructure::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::pow(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< FieldDerivativeStructure > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data)
        {
          FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/StringWriter.h"
#include "java/io/StringWriter.h"
#include "java/io/IOException.h"
#include "java/lang/CharSequence.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringWriter::class$ = NULL;
    jmethodID *StringWriter::mids$ = NULL;
    bool StringWriter::live$ = false;

    jclass StringWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_append_c9dee83fc65ff581] = env->getMethodID(cls, "append", "(C)Ljava/io/StringWriter;");
        mids$[mid_append_309c2d2b5283fcb8] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;");
        mids$[mid_append_b5b42dd578ef8c49] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_getBuffer_8ebc622be17217f1] = env->getMethodID(cls, "getBuffer", "()Ljava/lang/StringBuffer;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_write_d0bc48d5b00dc40c] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_44aecef33af91018] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_04eb5531e9227c93] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringWriter::StringWriter() : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    StringWriter::StringWriter(jint a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    StringWriter StringWriter::append(jchar a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_c9dee83fc65ff581], a0));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_309c2d2b5283fcb8], a0.this$));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_b5b42dd578ef8c49], a0.this$, a1, a2));
    }

    void StringWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void StringWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    ::java::lang::StringBuffer StringWriter::getBuffer() const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_getBuffer_8ebc622be17217f1]));
    }

    ::java::lang::String StringWriter::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    void StringWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d0bc48d5b00dc40c], a0.this$);
    }

    void StringWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void StringWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44aecef33af91018], a0.this$, a1, a2);
    }

    void StringWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_04eb5531e9227c93], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self);
    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data);
    static PyGetSetDef t_StringWriter__fields_[] = {
      DECLARE_GET_FIELD(t_StringWriter, buffer),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_StringWriter__methods_[] = {
      DECLARE_METHOD(t_StringWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, getBuffer, METH_NOARGS),
      DECLARE_METHOD(t_StringWriter, toString, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringWriter)[] = {
      { Py_tp_methods, t_StringWriter__methods_ },
      { Py_tp_init, (void *) t_StringWriter_init_ },
      { Py_tp_getset, t_StringWriter__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(StringWriter, t_StringWriter, StringWriter);

    void t_StringWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(StringWriter), &PY_TYPE_DEF(StringWriter), module, "StringWriter", 0);
    }

    void t_StringWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "class_", make_descriptor(StringWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "wrapfn_", make_descriptor(t_StringWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringWriter::initializeClass, 1)))
        return NULL;
      return t_StringWriter::wrap_Object(StringWriter(((t_StringWriter *) arg)->object.this$));
    }
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringWriter object((jobject) NULL);

          INT_CALL(object = StringWriter());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          StringWriter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringWriter(a0));
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

    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self)
    {
      ::java::lang::StringBuffer result((jobject) NULL);
      OBJ_CALL(result = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(result);
    }

    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
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
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data)
    {
      ::java::lang::StringBuffer value((jobject) NULL);
      OBJ_CALL(value = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$SatelliteEphemeris::class$ = NULL;
        jmethodID *EphemerisFile$SatelliteEphemeris::mids$ = NULL;
        bool EphemerisFile$SatelliteEphemeris::live$ = false;

        jclass EphemerisFile$SatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$SatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_08b52de56e2dfa9a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_ac89b644d37ed0fc] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String EphemerisFile$SatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
        }

        jdouble EphemerisFile$SatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_08b52de56e2dfa9a]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ac89b644d37ed0fc], a0.this$));
        }

        ::java::util::List EphemerisFile$SatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStop() const
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
        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyGetSetDef t_EphemerisFile$SatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$SatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$SatelliteEphemeris)[] = {
          { Py_tp_methods, t_EphemerisFile$SatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$SatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$SatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$SatelliteEphemeris, t_EphemerisFile$SatelliteEphemeris, EphemerisFile$SatelliteEphemeris);
        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_Object(const EphemerisFile$SatelliteEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EphemerisFile$SatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$SatelliteEphemeris), &PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris), module, "EphemerisFile$SatelliteEphemeris", 0);
        }

        void t_EphemerisFile$SatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "class_", make_descriptor(EphemerisFile$SatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "wrapfn_", make_descriptor(t_EphemerisFile$SatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$SatelliteEphemeris::wrap_Object(EphemerisFile$SatelliteEphemeris(((t_EphemerisFile$SatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
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

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOAIonosphericDelayModifier::class$ = NULL;
          jmethodID *TDOAIonosphericDelayModifier::mids$ = NULL;
          bool TDOAIonosphericDelayModifier::live$ = false;

          jclass TDOAIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier");

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

          TDOAIonosphericDelayModifier::TDOAIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88af61602f29e4c4, a0.this$, a1)) {}

          ::java::util::List TDOAIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void TDOAIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void TDOAIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self);
          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOAIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOAIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOAIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOAIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOAIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOAIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOAIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOAIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOAIonosphericDelayModifier, t_TDOAIonosphericDelayModifier, TDOAIonosphericDelayModifier);

          void t_TDOAIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOAIonosphericDelayModifier), &PY_TYPE_DEF(TDOAIonosphericDelayModifier), module, "TDOAIonosphericDelayModifier", 0);
          }

          void t_TDOAIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "class_", make_descriptor(TDOAIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TDOAIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOAIonosphericDelayModifier::wrap_Object(TDOAIonosphericDelayModifier(((t_TDOAIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TDOAIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TDOAIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/frames/L1TransformProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L1TransformProvider::class$ = NULL;
      jmethodID *L1TransformProvider::mids$ = NULL;
      bool L1TransformProvider::live$ = false;

      jclass L1TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_628ee7a3e714b75c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
          mids$[mid_getStaticTransform_edee248bbd22a723] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_eae0db96fe973887] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1TransformProvider::L1TransformProvider(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_628ee7a3e714b75c, a0.this$, a1.this$)) {}

      ::org::orekit::frames::StaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_edee248bbd22a723], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_eae0db96fe973887], a0.this$));
      }

      ::org::orekit::frames::Transform L1TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform L1TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
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
      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args);
      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args);

      static PyMethodDef t_L1TransformProvider__methods_[] = {
        DECLARE_METHOD(t_L1TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_L1TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1TransformProvider)[] = {
        { Py_tp_methods, t_L1TransformProvider__methods_ },
        { Py_tp_init, (void *) t_L1TransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1TransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(L1TransformProvider, t_L1TransformProvider, L1TransformProvider);

      void t_L1TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(L1TransformProvider), &PY_TYPE_DEF(L1TransformProvider), module, "L1TransformProvider", 0);
      }

      void t_L1TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "class_", make_descriptor(L1TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "wrapfn_", make_descriptor(t_L1TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1TransformProvider::initializeClass, 1)))
          return NULL;
        return t_L1TransformProvider::wrap_Object(L1TransformProvider(((t_L1TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1TransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1TransformProvider(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *SecondaryODE::class$ = NULL;
      jmethodID *SecondaryODE::mids$ = NULL;
      bool SecondaryODE::live$ = false;

      jclass SecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/SecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_068f688047544b24] = env->getMethodID(cls, "computeDerivatives", "(D[D[D[D)[D");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_7e0c266289f6d4f1] = env->getMethodID(cls, "init", "(D[D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondaryODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_068f688047544b24], a0, a1.this$, a2.this$, a3.this$));
      }

      jint SecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      void SecondaryODE::init(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_7e0c266289f6d4f1], a0, a1.this$, a2.this$, a3);
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
      static PyObject *t_SecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondaryODE_computeDerivatives(t_SecondaryODE *self, PyObject *args);
      static PyObject *t_SecondaryODE_getDimension(t_SecondaryODE *self);
      static PyObject *t_SecondaryODE_init(t_SecondaryODE *self, PyObject *args);
      static PyObject *t_SecondaryODE_get__dimension(t_SecondaryODE *self, void *data);
      static PyGetSetDef t_SecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_SecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecondaryODE__methods_[] = {
        DECLARE_METHOD(t_SecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_SecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_SecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecondaryODE)[] = {
        { Py_tp_methods, t_SecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecondaryODE, t_SecondaryODE, SecondaryODE);

      void t_SecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(SecondaryODE), &PY_TYPE_DEF(SecondaryODE), module, "SecondaryODE", 0);
      }

      void t_SecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "class_", make_descriptor(SecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "wrapfn_", make_descriptor(t_SecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecondaryODE::initializeClass, 1)))
          return NULL;
        return t_SecondaryODE::wrap_Object(SecondaryODE(((t_SecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_SecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SecondaryODE_computeDerivatives(t_SecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< jdouble > a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D[D", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_SecondaryODE_getDimension(t_SecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecondaryODE_init(t_SecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[D[DD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_SecondaryODE_get__dimension(t_SecondaryODE *self, void *data)
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
#include "org/hipparchus/distribution/continuous/EnumeratedRealDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_2afa36052df4765d] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_dcbc7ce2902fa136] = env->getMethodID(cls, "probability", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

        jdouble EnumeratedRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble EnumeratedRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble EnumeratedRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble EnumeratedRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        ::java::util::List EnumeratedRealDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_2afa36052df4765d]));
        }

        jdouble EnumeratedRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble EnumeratedRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble EnumeratedRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean EnumeratedRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble EnumeratedRealDistribution::probability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_dcbc7ce2902fa136], a0);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GPSScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GPSScale::class$ = NULL;
      jmethodID *GPSScale::mids$ = NULL;
      bool GPSScale::live$ = false;

      jclass GPSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GPSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GPSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble GPSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GPSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble GPSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String GPSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_getName(t_GPSScale *self);
      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data);
      static PyGetSetDef t_GPSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GPSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GPSScale__methods_[] = {
        DECLARE_METHOD(t_GPSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GPSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GPSScale)[] = {
        { Py_tp_methods, t_GPSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GPSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GPSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GPSScale, t_GPSScale, GPSScale);

      void t_GPSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GPSScale), &PY_TYPE_DEF(GPSScale), module, "GPSScale", 0);
      }

      void t_GPSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "class_", make_descriptor(GPSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "wrapfn_", make_descriptor(t_GPSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GPSScale::initializeClass, 1)))
          return NULL;
        return t_GPSScale::wrap_Object(GPSScale(((t_GPSScale *) arg)->object.this$));
      }
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GPSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GPSScale_getName(t_GPSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args)
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

      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args)
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

      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GPSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data)
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
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *TimeDerivativesEquations::class$ = NULL;
        jmethodID *TimeDerivativesEquations::mids$ = NULL;
        bool TimeDerivativesEquations::live$ = false;

        jclass TimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/TimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_17db3a65980d3441] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_17db3a65980d3441] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_029ff0cbf68ea054] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TimeDerivativesEquations::addKeplerContribution(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_17db3a65980d3441], a0);
        }

        void TimeDerivativesEquations::addMassDerivative(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_17db3a65980d3441], a0);
        }

        void TimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_029ff0cbf68ea054], a0.this$);
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
        static PyObject *t_TimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addKeplerContribution(t_TimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addMassDerivative(t_TimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addNonKeplerianAcceleration(t_TimeDerivativesEquations *self, PyObject *arg);

        static PyMethodDef t_TimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_TimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_TimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_TimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDerivativesEquations)[] = {
          { Py_tp_methods, t_TimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDerivativesEquations, t_TimeDerivativesEquations, TimeDerivativesEquations);

        void t_TimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDerivativesEquations), &PY_TYPE_DEF(TimeDerivativesEquations), module, "TimeDerivativesEquations", 0);
        }

        void t_TimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "class_", make_descriptor(TimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "wrapfn_", make_descriptor(t_TimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_TimeDerivativesEquations::wrap_Object(TimeDerivativesEquations(((t_TimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_TimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDerivativesEquations_addKeplerContribution(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_TimeDerivativesEquations_addMassDerivative(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_TimeDerivativesEquations_addNonKeplerianAcceleration(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PegasusSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *PegasusSolver::class$ = NULL;
        jmethodID *PegasusSolver::mids$ = NULL;
        bool PegasusSolver::live$ = false;

        jclass PegasusSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/PegasusSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PegasusSolver::PegasusSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        PegasusSolver::PegasusSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}
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
        static PyObject *t_PegasusSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PegasusSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PegasusSolver_of_(t_PegasusSolver *self, PyObject *args);
        static int t_PegasusSolver_init_(t_PegasusSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PegasusSolver_get__parameters_(t_PegasusSolver *self, void *data);
        static PyGetSetDef t_PegasusSolver__fields_[] = {
          DECLARE_GET_FIELD(t_PegasusSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PegasusSolver__methods_[] = {
          DECLARE_METHOD(t_PegasusSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PegasusSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PegasusSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PegasusSolver)[] = {
          { Py_tp_methods, t_PegasusSolver__methods_ },
          { Py_tp_init, (void *) t_PegasusSolver_init_ },
          { Py_tp_getset, t_PegasusSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PegasusSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(PegasusSolver, t_PegasusSolver, PegasusSolver);
        PyObject *t_PegasusSolver::wrap_Object(const PegasusSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PegasusSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PegasusSolver *self = (t_PegasusSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PegasusSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PegasusSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PegasusSolver *self = (t_PegasusSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PegasusSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(PegasusSolver), &PY_TYPE_DEF(PegasusSolver), module, "PegasusSolver", 0);
        }

        void t_PegasusSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "class_", make_descriptor(PegasusSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "wrapfn_", make_descriptor(t_PegasusSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PegasusSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PegasusSolver::initializeClass, 1)))
            return NULL;
          return t_PegasusSolver::wrap_Object(PegasusSolver(((t_PegasusSolver *) arg)->object.this$));
        }
        static PyObject *t_PegasusSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PegasusSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PegasusSolver_of_(t_PegasusSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PegasusSolver_init_(t_PegasusSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PegasusSolver object((jobject) NULL);

              INT_CALL(object = PegasusSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PegasusSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PegasusSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = PegasusSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_PegasusSolver_get__parameters_(t_PegasusSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/lang/Integer.h"
#include "java/util/function/IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator$OfInt::class$ = NULL;
    jmethodID *Spliterator$OfInt::mids$ = NULL;
    bool Spliterator$OfInt::live$ = false;

    jclass Spliterator$OfInt::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator$OfInt");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_e5264dc0143be3e4] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/IntConsumer;)V");
        mids$[mid_tryAdvance_9cf2d89711eaa134] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/IntConsumer;)Z");
        mids$[mid_trySplit_26b29020afd05de1] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfInt;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfInt::forEachRemaining(const ::java::util::function::IntConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_e5264dc0143be3e4], a0.this$);
    }

    jboolean Spliterator$OfInt::tryAdvance(const ::java::util::function::IntConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_9cf2d89711eaa134], a0.this$);
    }

    Spliterator$OfInt Spliterator$OfInt::trySplit() const
    {
      return Spliterator$OfInt(env->callObjectMethod(this$, mids$[mid_trySplit_26b29020afd05de1]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator$OfInt_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfInt_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfInt_of_(t_Spliterator$OfInt *self, PyObject *args);
    static PyObject *t_Spliterator$OfInt_forEachRemaining(t_Spliterator$OfInt *self, PyObject *args);
    static PyObject *t_Spliterator$OfInt_tryAdvance(t_Spliterator$OfInt *self, PyObject *args);
    static PyObject *t_Spliterator$OfInt_trySplit(t_Spliterator$OfInt *self, PyObject *args);
    static PyObject *t_Spliterator$OfInt_get__parameters_(t_Spliterator$OfInt *self, void *data);
    static PyGetSetDef t_Spliterator$OfInt__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator$OfInt, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator$OfInt__methods_[] = {
      DECLARE_METHOD(t_Spliterator$OfInt, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfInt, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfInt, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfInt, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfInt, tryAdvance, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfInt, trySplit, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator$OfInt)[] = {
      { Py_tp_methods, t_Spliterator$OfInt__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator$OfInt__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator$OfInt)[] = {
      &PY_TYPE_DEF(::java::util::Spliterator$OfPrimitive),
      NULL
    };

    DEFINE_TYPE(Spliterator$OfInt, t_Spliterator$OfInt, Spliterator$OfInt);
    PyObject *t_Spliterator$OfInt::wrap_Object(const Spliterator$OfInt& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfInt::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfInt *self = (t_Spliterator$OfInt *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Spliterator$OfInt::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfInt::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfInt *self = (t_Spliterator$OfInt *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Spliterator$OfInt::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator$OfInt), &PY_TYPE_DEF(Spliterator$OfInt), module, "Spliterator$OfInt", 0);
    }

    void t_Spliterator$OfInt::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfInt), "class_", make_descriptor(Spliterator$OfInt::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfInt), "wrapfn_", make_descriptor(t_Spliterator$OfInt::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfInt), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Spliterator$OfInt_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator$OfInt::initializeClass, 1)))
        return NULL;
      return t_Spliterator$OfInt::wrap_Object(Spliterator$OfInt(((t_Spliterator$OfInt *) arg)->object.this$));
    }
    static PyObject *t_Spliterator$OfInt_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator$OfInt::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator$OfInt_of_(t_Spliterator$OfInt *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator$OfInt_forEachRemaining(t_Spliterator$OfInt *self, PyObject *args)
    {
      ::java::util::function::IntConsumer a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::function::IntConsumer::initializeClass, &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Spliterator$OfInt), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_Spliterator$OfInt_tryAdvance(t_Spliterator$OfInt *self, PyObject *args)
    {
      ::java::util::function::IntConsumer a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "k", ::java::util::function::IntConsumer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.tryAdvance(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfInt), (PyObject *) self, "tryAdvance", args, 2);
    }

    static PyObject *t_Spliterator$OfInt_trySplit(t_Spliterator$OfInt *self, PyObject *args)
    {
      Spliterator$OfInt result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.trySplit());
        return t_Spliterator$OfInt::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfInt), (PyObject *) self, "trySplit", args, 2);
    }
    static PyObject *t_Spliterator$OfInt_get__parameters_(t_Spliterator$OfInt *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/NamedPackage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NamedPackage::class$ = NULL;
    jmethodID *NamedPackage::mids$ = NULL;
    bool NamedPackage::live$ = false;

    jclass NamedPackage::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NamedPackage");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NamedPackage_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NamedPackage_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_NamedPackage__methods_[] = {
      DECLARE_METHOD(t_NamedPackage, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NamedPackage, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NamedPackage)[] = {
      { Py_tp_methods, t_NamedPackage__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NamedPackage)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(NamedPackage, t_NamedPackage, NamedPackage);

    void t_NamedPackage::install(PyObject *module)
    {
      installType(&PY_TYPE(NamedPackage), &PY_TYPE_DEF(NamedPackage), module, "NamedPackage", 0);
    }

    void t_NamedPackage::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "class_", make_descriptor(NamedPackage::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "wrapfn_", make_descriptor(t_NamedPackage::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NamedPackage_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NamedPackage::initializeClass, 1)))
        return NULL;
      return t_NamedPackage::wrap_Object(NamedPackage(((t_NamedPackage *) arg)->object.this$));
    }
    static PyObject *t_NamedPackage_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NamedPackage::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputFilter.h"
#include "java/io/ObjectInputFilter$FilterInfo.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputFilter::class$ = NULL;
    jmethodID *ObjectInputFilter::mids$ = NULL;
    bool ObjectInputFilter::live$ = false;

    jclass ObjectInputFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_checkInput_eb079c906b147a76] = env->getMethodID(cls, "checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::io::ObjectInputFilter$Status ObjectInputFilter::checkInput(const ::java::io::ObjectInputFilter$FilterInfo & a0) const
    {
      return ::java::io::ObjectInputFilter$Status(env->callObjectMethod(this$, mids$[mid_checkInput_eb079c906b147a76], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter_checkInput(t_ObjectInputFilter *self, PyObject *arg);

    static PyMethodDef t_ObjectInputFilter__methods_[] = {
      DECLARE_METHOD(t_ObjectInputFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter, checkInput, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputFilter)[] = {
      { Py_tp_methods, t_ObjectInputFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectInputFilter, t_ObjectInputFilter, ObjectInputFilter);

    void t_ObjectInputFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputFilter), &PY_TYPE_DEF(ObjectInputFilter), module, "ObjectInputFilter", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "Status", make_descriptor(&PY_TYPE_DEF(ObjectInputFilter$Status)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "FilterInfo", make_descriptor(&PY_TYPE_DEF(ObjectInputFilter$FilterInfo)));
    }

    void t_ObjectInputFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "class_", make_descriptor(ObjectInputFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "wrapfn_", make_descriptor(t_ObjectInputFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputFilter::initializeClass, 1)))
        return NULL;
      return t_ObjectInputFilter::wrap_Object(ObjectInputFilter(((t_ObjectInputFilter *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInputFilter_checkInput(t_ObjectInputFilter *self, PyObject *arg)
    {
      ::java::io::ObjectInputFilter$FilterInfo a0((jobject) NULL);
      ::java::io::ObjectInputFilter$Status result((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::ObjectInputFilter$FilterInfo::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.checkInput(a0));
        return ::java::io::t_ObjectInputFilter$Status::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "checkInput", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ResourceBundle.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle::class$ = NULL;
    jmethodID *ResourceBundle::mids$ = NULL;
    bool ResourceBundle::live$ = false;

    jclass ResourceBundle::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clearCache_0fa09c18fee449d5] = env->getStaticMethodID(cls, "clearCache", "()V");
        mids$[mid_clearCache_5b2cbf1cefa98954] = env->getStaticMethodID(cls, "clearCache", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_containsKey_7edad2c2f64f4d68] = env->getMethodID(cls, "containsKey", "(Ljava/lang/String;)Z");
        mids$[mid_getBaseBundleName_11b109bd155ca898] = env->getMethodID(cls, "getBaseBundleName", "()Ljava/lang/String;");
        mids$[mid_getBundle_e3321a87167f3b01] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_d805a6a98954e809] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_85e9b7f4ce4632dd] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_da57cf588f56405d] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_5b90e45e7082cba8] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_44f2f3b93de92349] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_134ae29f6d067afc] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_51a3deac5be470eb] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getKeys_0dc02dfa0be4cd25] = env->getMethodID(cls, "getKeys", "()Ljava/util/Enumeration;");
        mids$[mid_getLocale_d31b3a14c10c739b] = env->getMethodID(cls, "getLocale", "()Ljava/util/Locale;");
        mids$[mid_getObject_f639320a33718c6c] = env->getMethodID(cls, "getObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_getString_92807efd57acb082] = env->getMethodID(cls, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getStringArray_f96e27ad15cba282] = env->getMethodID(cls, "getStringArray", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_keySet_015730311a5bacdc] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_handleKeySet_015730311a5bacdc] = env->getMethodID(cls, "handleKeySet", "()Ljava/util/Set;");
        mids$[mid_handleGetObject_f639320a33718c6c] = env->getMethodID(cls, "handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_setParent_734f3117d00f9ab6] = env->getMethodID(cls, "setParent", "(Ljava/util/ResourceBundle;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ResourceBundle::ResourceBundle() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    void ResourceBundle::clearCache()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_0fa09c18fee449d5]);
    }

    void ResourceBundle::clearCache(const ::java::lang::ClassLoader & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_5b2cbf1cefa98954], a0.this$);
    }

    jboolean ResourceBundle::containsKey(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_7edad2c2f64f4d68], a0.this$);
    }

    ::java::lang::String ResourceBundle::getBaseBundleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBaseBundleName_11b109bd155ca898]));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_e3321a87167f3b01], a0.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::lang::Module & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_d805a6a98954e809], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_85e9b7f4ce4632dd], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::ResourceBundle$Control & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_da57cf588f56405d], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_5b90e45e7082cba8], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::Module & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_44f2f3b93de92349], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::util::ResourceBundle$Control & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_134ae29f6d067afc], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2, const ::java::util::ResourceBundle$Control & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_51a3deac5be470eb], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::java::util::Enumeration ResourceBundle::getKeys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getKeys_0dc02dfa0be4cd25]));
    }

    ::java::util::Locale ResourceBundle::getLocale() const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getLocale_d31b3a14c10c739b]));
    }

    ::java::lang::Object ResourceBundle::getObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getObject_f639320a33718c6c], a0.this$));
    }

    ::java::lang::String ResourceBundle::getString(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getString_92807efd57acb082], a0.this$));
    }

    JArray< ::java::lang::String > ResourceBundle::getStringArray(const ::java::lang::String & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getStringArray_f96e27ad15cba282], a0.this$));
    }

    ::java::util::Set ResourceBundle::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_015730311a5bacdc]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ResourceBundle_init_(t_ResourceBundle *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ResourceBundle_clearCache(PyTypeObject *type, PyObject *args);
    static PyObject *t_ResourceBundle_containsKey(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getBaseBundleName(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getBundle(PyTypeObject *type, PyObject *args);
    static PyObject *t_ResourceBundle_getKeys(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getLocale(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getObject(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getString(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getStringArray(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_keySet(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_get__baseBundleName(t_ResourceBundle *self, void *data);
    static PyObject *t_ResourceBundle_get__keys(t_ResourceBundle *self, void *data);
    static PyObject *t_ResourceBundle_get__locale(t_ResourceBundle *self, void *data);
    static PyGetSetDef t_ResourceBundle__fields_[] = {
      DECLARE_GET_FIELD(t_ResourceBundle, baseBundleName),
      DECLARE_GET_FIELD(t_ResourceBundle, keys),
      DECLARE_GET_FIELD(t_ResourceBundle, locale),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ResourceBundle__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, clearCache, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, containsKey, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getBaseBundleName, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getBundle, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, getKeys, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getLocale, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getObject, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getString, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getStringArray, METH_O),
      DECLARE_METHOD(t_ResourceBundle, keySet, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle)[] = {
      { Py_tp_methods, t_ResourceBundle__methods_ },
      { Py_tp_init, (void *) t_ResourceBundle_init_ },
      { Py_tp_getset, t_ResourceBundle__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle, t_ResourceBundle, ResourceBundle);

    void t_ResourceBundle::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle), &PY_TYPE_DEF(ResourceBundle), module, "ResourceBundle", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "Control", make_descriptor(&PY_TYPE_DEF(ResourceBundle$Control)));
    }

    void t_ResourceBundle::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "class_", make_descriptor(ResourceBundle::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "wrapfn_", make_descriptor(t_ResourceBundle::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ResourceBundle_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle::wrap_Object(ResourceBundle(((t_ResourceBundle *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ResourceBundle_init_(t_ResourceBundle *self, PyObject *args, PyObject *kwds)
    {
      ResourceBundle object((jobject) NULL);

      INT_CALL(object = ResourceBundle());
      self->object = object;

      return 0;
    }

    static PyObject *t_ResourceBundle_clearCache(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(::java::util::ResourceBundle::clearCache());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::lang::ClassLoader a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::ClassLoader::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::ResourceBundle::clearCache(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "clearCache", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle_containsKey(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getBaseBundleName(t_ResourceBundle *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getBaseBundleName());
      return j2p(result);
    }

    static PyObject *t_ResourceBundle_getBundle(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Module a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle$Control a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::ClassLoader a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::Module a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::util::ResourceBundle$Control a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::ClassLoader a2((jobject) NULL);
          ::java::util::ResourceBundle$Control a3((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skkk", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2, a3));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getKeys(t_ResourceBundle *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.getKeys());
      return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_ResourceBundle_getLocale(t_ResourceBundle *self)
    {
      ::java::util::Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocale());
      return ::java::util::t_Locale::wrap_Object(result);
    }

    static PyObject *t_ResourceBundle_getObject(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getObject(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getObject", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getString(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getString", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getStringArray(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::String > result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getStringArray(a0));
        return JArray<jstring>(result.this$).wrap();
      }

      PyErr_SetArgsError((PyObject *) self, "getStringArray", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_keySet(t_ResourceBundle *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_ResourceBundle_get__baseBundleName(t_ResourceBundle *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getBaseBundleName());
      return j2p(value);
    }

    static PyObject *t_ResourceBundle_get__keys(t_ResourceBundle *self, void *data)
    {
      ::java::util::Enumeration value((jobject) NULL);
      OBJ_CALL(value = self->object.getKeys());
      return ::java::util::t_Enumeration::wrap_Object(value);
    }

    static PyObject *t_ResourceBundle_get__locale(t_ResourceBundle *self, void *data)
    {
      ::java::util::Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocale());
      return ::java::util::t_Locale::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NavigableSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/NavigableSet.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NavigableSet::class$ = NULL;
    jmethodID *NavigableSet::mids$ = NULL;
    bool NavigableSet::live$ = false;

    jclass NavigableSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NavigableSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_ceiling_9facd1449e0950d3] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingIterator_4d23511a9f0db098] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_024b2fed0d07125f] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_floor_9facd1449e0950d3] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_c07cc04010820225] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_3998b1c856c6bc87] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_9facd1449e0950d3] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lower_9facd1449e0950d3] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_4d26fd885228c716] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_4d26fd885228c716] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_subSet_91c93627253b416a] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_8a24c3c47a25901f] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_c07cc04010820225] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_3998b1c856c6bc87] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NavigableSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_9facd1449e0950d3], a0.this$));
    }

    ::java::util::Iterator NavigableSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_4d23511a9f0db098]));
    }

    NavigableSet NavigableSet::descendingSet() const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_024b2fed0d07125f]));
    }

    ::java::lang::Object NavigableSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_9facd1449e0950d3], a0.this$));
    }

    ::java::util::SortedSet NavigableSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_c07cc04010820225], a0.this$));
    }

    NavigableSet NavigableSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_3998b1c856c6bc87], a0.this$, a1));
    }

    ::java::lang::Object NavigableSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_9facd1449e0950d3], a0.this$));
    }

    ::java::util::Iterator NavigableSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    ::java::lang::Object NavigableSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_9facd1449e0950d3], a0.this$));
    }

    ::java::lang::Object NavigableSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_4d26fd885228c716]));
    }

    ::java::lang::Object NavigableSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_4d26fd885228c716]));
    }

    ::java::util::SortedSet NavigableSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_91c93627253b416a], a0.this$, a1.this$));
    }

    NavigableSet NavigableSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_8a24c3c47a25901f], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet NavigableSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_c07cc04010820225], a0.this$));
    }

    NavigableSet NavigableSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_3998b1c856c6bc87], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NavigableSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableSet_of_(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_ceiling(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_descendingIterator(t_NavigableSet *self);
    static PyObject *t_NavigableSet_descendingSet(t_NavigableSet *self);
    static PyObject *t_NavigableSet_floor(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_headSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_higher(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_iterator(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_lower(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_pollFirst(t_NavigableSet *self);
    static PyObject *t_NavigableSet_pollLast(t_NavigableSet *self);
    static PyObject *t_NavigableSet_subSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_tailSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_get__parameters_(t_NavigableSet *self, void *data);
    static PyGetSetDef t_NavigableSet__fields_[] = {
      DECLARE_GET_FIELD(t_NavigableSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NavigableSet__methods_[] = {
      DECLARE_METHOD(t_NavigableSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, ceiling, METH_O),
      DECLARE_METHOD(t_NavigableSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, floor, METH_O),
      DECLARE_METHOD(t_NavigableSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, higher, METH_O),
      DECLARE_METHOD(t_NavigableSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, lower, METH_O),
      DECLARE_METHOD(t_NavigableSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NavigableSet)[] = {
      { Py_tp_methods, t_NavigableSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NavigableSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_NavigableSet *)) get_generic_iterator< t_NavigableSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NavigableSet)[] = {
      &PY_TYPE_DEF(::java::util::SortedSet),
      NULL
    };

    DEFINE_TYPE(NavigableSet, t_NavigableSet, NavigableSet);
    PyObject *t_NavigableSet::wrap_Object(const NavigableSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_NavigableSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableSet *self = (t_NavigableSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_NavigableSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_NavigableSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableSet *self = (t_NavigableSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_NavigableSet::install(PyObject *module)
    {
      installType(&PY_TYPE(NavigableSet), &PY_TYPE_DEF(NavigableSet), module, "NavigableSet", 0);
    }

    void t_NavigableSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "class_", make_descriptor(NavigableSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "wrapfn_", make_descriptor(t_NavigableSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NavigableSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NavigableSet::initializeClass, 1)))
        return NULL;
      return t_NavigableSet::wrap_Object(NavigableSet(((t_NavigableSet *) arg)->object.this$));
    }
    static PyObject *t_NavigableSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NavigableSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NavigableSet_of_(t_NavigableSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_NavigableSet_ceiling(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_descendingIterator(t_NavigableSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableSet_descendingSet(t_NavigableSet *self)
    {
      NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableSet_floor(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_headSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "headSet", args, 2);
    }

    static PyObject *t_NavigableSet_higher(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_iterator(t_NavigableSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_NavigableSet_lower(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_pollFirst(t_NavigableSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_NavigableSet_pollLast(t_NavigableSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_NavigableSet_subSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "subSet", args, 2);
    }

    static PyObject *t_NavigableSet_tailSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "tailSet", args, 2);
    }
    static PyObject *t_NavigableSet_get__parameters_(t_NavigableSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/util/Map.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *AttributedCharacterIterator::class$ = NULL;
    jmethodID *AttributedCharacterIterator::mids$ = NULL;
    bool AttributedCharacterIterator::live$ = false;

    jclass AttributedCharacterIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/AttributedCharacterIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAllAttributeKeys_015730311a5bacdc] = env->getMethodID(cls, "getAllAttributeKeys", "()Ljava/util/Set;");
        mids$[mid_getAttribute_477b942affd39899] = env->getMethodID(cls, "getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;");
        mids$[mid_getAttributes_6f5a75ccd8c04465] = env->getMethodID(cls, "getAttributes", "()Ljava/util/Map;");
        mids$[mid_getRunLimit_570ce0828f81a2c1] = env->getMethodID(cls, "getRunLimit", "()I");
        mids$[mid_getRunLimit_e4773efbe9c5c196] = env->getMethodID(cls, "getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunLimit_f0b449a8ed06d97b] = env->getMethodID(cls, "getRunLimit", "(Ljava/util/Set;)I");
        mids$[mid_getRunStart_570ce0828f81a2c1] = env->getMethodID(cls, "getRunStart", "()I");
        mids$[mid_getRunStart_e4773efbe9c5c196] = env->getMethodID(cls, "getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunStart_f0b449a8ed06d97b] = env->getMethodID(cls, "getRunStart", "(Ljava/util/Set;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set AttributedCharacterIterator::getAllAttributeKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getAllAttributeKeys_015730311a5bacdc]));
    }

    ::java::lang::Object AttributedCharacterIterator::getAttribute(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_477b942affd39899], a0.this$));
    }

    ::java::util::Map AttributedCharacterIterator::getAttributes() const
    {
      return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAttributes_6f5a75ccd8c04465]));
    }

    jint AttributedCharacterIterator::getRunLimit() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_570ce0828f81a2c1]);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_e4773efbe9c5c196], a0.this$);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_f0b449a8ed06d97b], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_570ce0828f81a2c1]);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_e4773efbe9c5c196], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_f0b449a8ed06d97b], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data);
    static PyGetSetDef t_AttributedCharacterIterator__fields_[] = {
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, allAttributeKeys),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, attributes),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runLimit),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runStart),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AttributedCharacterIterator__methods_[] = {
      DECLARE_METHOD(t_AttributedCharacterIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAllAttributeKeys, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttribute, METH_O),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttributes, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunLimit, METH_VARARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunStart, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AttributedCharacterIterator)[] = {
      { Py_tp_methods, t_AttributedCharacterIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AttributedCharacterIterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AttributedCharacterIterator)[] = {
      &PY_TYPE_DEF(::java::text::CharacterIterator),
      NULL
    };

    DEFINE_TYPE(AttributedCharacterIterator, t_AttributedCharacterIterator, AttributedCharacterIterator);

    void t_AttributedCharacterIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(AttributedCharacterIterator), &PY_TYPE_DEF(AttributedCharacterIterator), module, "AttributedCharacterIterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "Attribute", make_descriptor(&PY_TYPE_DEF(AttributedCharacterIterator$Attribute)));
    }

    void t_AttributedCharacterIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "class_", make_descriptor(AttributedCharacterIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "wrapfn_", make_descriptor(t_AttributedCharacterIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AttributedCharacterIterator::initializeClass, 1)))
        return NULL;
      return t_AttributedCharacterIterator::wrap_Object(AttributedCharacterIterator(((t_AttributedCharacterIterator *) arg)->object.this$));
    }
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AttributedCharacterIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute));
    }

    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg)
    {
      ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.getAttribute(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getAttribute", arg);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute), ::java::lang::PY_TYPE(Object));
    }

    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunLimit());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunLimit", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunStart());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunStart", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunLimit());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunStart());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System$Logger.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/lang/System$Logger$Level.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System$Logger::class$ = NULL;
    jmethodID *System$Logger::mids$ = NULL;
    bool System$Logger::live$ = false;

    jclass System$Logger::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System$Logger");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_isLoggable_f3bee7568d22bab7] = env->getMethodID(cls, "isLoggable", "(Ljava/lang/System$Logger$Level;)Z");
        mids$[mid_log_4fc1faf6d98530df] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V");
        mids$[mid_log_8075ac60c2498ce5] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V");
        mids$[mid_log_376f9678ec757672] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V");
        mids$[mid_log_a2145bb1e1cf08e9] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_5b32bc2fcbc7ab37] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_log_826a17a9525dd3b3] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V");
        mids$[mid_log_8d1c006254da0d24] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_a9d5e47bc3bdd2da] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String System$Logger::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    jboolean System$Logger::isLoggable(const ::java::lang::System$Logger$Level & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLoggable_f3bee7568d22bab7], a0.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_4fc1faf6d98530df], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_8075ac60c2498ce5], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_376f9678ec757672], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_a2145bb1e1cf08e9], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_5b32bc2fcbc7ab37], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_826a17a9525dd3b3], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const JArray< ::java::lang::Object > & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_8d1c006254da0d24], a0.this$, a1.this$, a2.this$, a3.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const ::java::lang::Throwable & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_a9d5e47bc3bdd2da], a0.this$, a1.this$, a2.this$, a3.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System$Logger_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger_getName(t_System$Logger *self);
    static PyObject *t_System$Logger_isLoggable(t_System$Logger *self, PyObject *arg);
    static PyObject *t_System$Logger_log(t_System$Logger *self, PyObject *args);
    static PyObject *t_System$Logger_get__name(t_System$Logger *self, void *data);
    static PyGetSetDef t_System$Logger__fields_[] = {
      DECLARE_GET_FIELD(t_System$Logger, name),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System$Logger__methods_[] = {
      DECLARE_METHOD(t_System$Logger, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger, getName, METH_NOARGS),
      DECLARE_METHOD(t_System$Logger, isLoggable, METH_O),
      DECLARE_METHOD(t_System$Logger, log, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System$Logger)[] = {
      { Py_tp_methods, t_System$Logger__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System$Logger__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System$Logger)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System$Logger, t_System$Logger, System$Logger);

    void t_System$Logger::install(PyObject *module)
    {
      installType(&PY_TYPE(System$Logger), &PY_TYPE_DEF(System$Logger), module, "System$Logger", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "Level", make_descriptor(&PY_TYPE_DEF(System$Logger$Level)));
    }

    void t_System$Logger::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "class_", make_descriptor(System$Logger::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "wrapfn_", make_descriptor(t_System$Logger::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_System$Logger_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System$Logger::initializeClass, 1)))
        return NULL;
      return t_System$Logger::wrap_Object(System$Logger(((t_System$Logger *) arg)->object.this$));
    }
    static PyObject *t_System$Logger_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System$Logger::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System$Logger_getName(t_System$Logger *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_System$Logger_isLoggable(t_System$Logger *self, PyObject *arg)
    {
      ::java::lang::System$Logger$Level a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_))
      {
        OBJ_CALL(result = self->object.isLoggable(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isLoggable", arg);
      return NULL;
    }

    static PyObject *t_System$Logger_log(t_System$Logger *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "Ks", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "Ko", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::function::Supplier a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::lang::System$Logger$Level::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);

          if (!parseArgs(args, "Ks[o", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::Throwable a2((jobject) NULL);

          if (!parseArgs(args, "Ksk", ::java::lang::System$Logger$Level::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::function::Supplier a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Throwable a2((jobject) NULL);

          if (!parseArgs(args, "KKk", ::java::lang::System$Logger$Level::initializeClass, ::java::util::function::Supplier::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &p1, ::java::util::function::t_Supplier::parameters_, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          JArray< ::java::lang::Object > a3((jobject) NULL);

          if (!parseArgs(args, "Kks[o", ::java::lang::System$Logger$Level::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.log(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::Throwable a3((jobject) NULL);

          if (!parseArgs(args, "Kksk", ::java::lang::System$Logger$Level::initializeClass, ::java::util::ResourceBundle::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.log(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "log", args);
      return NULL;
    }

    static PyObject *t_System$Logger_get__name(t_System$Logger *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }
  }
}
