#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EclipseDetector::class$ = NULL;
        jmethodID *EclipseDetector::mids$ = NULL;
        bool EclipseDetector::live$ = false;

        jclass EclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_19ffed36940b07e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_81366f164ddc07cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getMargin_9981f74b2d109da6] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getOccultationEngine_06e3ea62eb505e97] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_eee3de00fe971136] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_33964b00c0809563] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withPenumbra_6a8b740679ff741d] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withUmbra_6a8b740679ff741d] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_create_344da2a0a01f36e4] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::OccultationEngine & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_19ffed36940b07e1, a0.this$)) {}

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_81366f164ddc07cb, a0.this$, a1, a2.this$)) {}

        jdouble EclipseDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        jdouble EclipseDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_9981f74b2d109da6]);
        }

        ::org::orekit::utils::OccultationEngine EclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_06e3ea62eb505e97]));
        }

        jboolean EclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_eee3de00fe971136]);
        }

        EclipseDetector EclipseDetector::withMargin(jdouble a0) const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_33964b00c0809563], a0));
        }

        EclipseDetector EclipseDetector::withPenumbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_6a8b740679ff741d]));
        }

        EclipseDetector EclipseDetector::withUmbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_6a8b740679ff741d]));
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
        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args);
        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args);
        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg);
        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data);
        static PyGetSetDef t_EclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EclipseDetector, margin),
          DECLARE_GET_FIELD(t_EclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_EclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_EclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EclipseDetector__methods_[] = {
          DECLARE_METHOD(t_EclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_EclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EclipseDetector)[] = {
          { Py_tp_methods, t_EclipseDetector__methods_ },
          { Py_tp_init, (void *) t_EclipseDetector_init_ },
          { Py_tp_getset, t_EclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EclipseDetector, t_EclipseDetector, EclipseDetector);
        PyObject *t_EclipseDetector::wrap_Object(const EclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EclipseDetector), &PY_TYPE_DEF(EclipseDetector), module, "EclipseDetector", 0);
        }

        void t_EclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "class_", make_descriptor(EclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "wrapfn_", make_descriptor(t_EclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EclipseDetector::initializeClass, 1)))
            return NULL;
          return t_EclipseDetector::wrap_Object(EclipseDetector(((t_EclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::OccultationEngine a0((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::OccultationEngine::initializeClass, &a0))
              {
                INT_CALL(object = EclipseDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EclipseDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
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

        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg)
        {
          jdouble a0;
          EclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_EclipseDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_EclipseDetector::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_EclipseDetector::wrap_Object(result);
        }
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *FixedPointTleGenerationAlgorithm::class$ = NULL;
            jmethodID *FixedPointTleGenerationAlgorithm::mids$ = NULL;
            bool FixedPointTleGenerationAlgorithm::live$ = false;
            jdouble FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT = (jdouble) 0;
            jint FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT = (jint) 0;
            jdouble FixedPointTleGenerationAlgorithm::SCALE_DEFAULT = (jdouble) 0;

            jclass FixedPointTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_9a2a15644952076c] = env->getMethodID(cls, "<init>", "(DID)V");
                mids$[mid_init$_9c79537af80d4d30] = env->getMethodID(cls, "<init>", "(DIDLorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_166cccd89c387fd5] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_f8078c645a12d356] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EPSILON_DEFAULT = env->getStaticDoubleField(cls, "EPSILON_DEFAULT");
                MAX_ITERATIONS_DEFAULT = env->getStaticIntField(cls, "MAX_ITERATIONS_DEFAULT");
                SCALE_DEFAULT = env->getStaticDoubleField(cls, "SCALE_DEFAULT");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a2a15644952076c, a0, a1, a2)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frame & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c79537af80d4d30, a0, a1, a2, a3.this$, a4.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_166cccd89c387fd5], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_f8078c645a12d356], a0.this$, a1.this$));
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
        namespace tle {
          namespace generation {
            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_FixedPointTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedPointTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_FixedPointTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_FixedPointTleGenerationAlgorithm_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedPointTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedPointTleGenerationAlgorithm, t_FixedPointTleGenerationAlgorithm, FixedPointTleGenerationAlgorithm);

            void t_FixedPointTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedPointTleGenerationAlgorithm), &PY_TYPE_DEF(FixedPointTleGenerationAlgorithm), module, "FixedPointTleGenerationAlgorithm", 0);
            }

            void t_FixedPointTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "class_", make_descriptor(FixedPointTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_FixedPointTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(FixedPointTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "EPSILON_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "MAX_ITERATIONS_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "SCALE_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::SCALE_DEFAULT));
            }

            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_FixedPointTleGenerationAlgorithm::wrap_Object(FixedPointTleGenerationAlgorithm(((t_FixedPointTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = FixedPointTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DID", &a0, &a1, &a2))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::frames::Frame a4((jobject) NULL);
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DIDkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2, a3, a4));
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

            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Header::class$ = NULL;
              jmethodID *SsrIgm04Header::mids$ = NULL;
              bool SsrIgm04Header::live$ = false;

              jclass SsrIgm04Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Header::SsrIgm04Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm04Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Header_init_(t_SsrIgm04Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm04Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Header)[] = {
                { Py_tp_methods, t_SsrIgm04Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Header, t_SsrIgm04Header, SsrIgm04Header);

              void t_SsrIgm04Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Header), &PY_TYPE_DEF(SsrIgm04Header), module, "SsrIgm04Header", 0);
              }

              void t_SsrIgm04Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "class_", make_descriptor(SsrIgm04Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "wrapfn_", make_descriptor(t_SsrIgm04Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Header::wrap_Object(SsrIgm04Header(((t_SsrIgm04Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Header_init_(t_SsrIgm04Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Header object((jobject) NULL);

                INT_CALL(object = SsrIgm04Header());
                self->object = object;

                return 0;
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
#include "org/orekit/gnss/attitude/GPSBlockIIR.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIR::class$ = NULL;
        jmethodID *GPSBlockIIR::mids$ = NULL;
        bool GPSBlockIIR::live$ = false;
        jdouble GPSBlockIIR::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIR::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIR");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ced6c23b11632898] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIR::GPSBlockIIR(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_ced6c23b11632898, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace attitude {
        static PyObject *t_GPSBlockIIR_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIR_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIR_init_(t_GPSBlockIIR *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIR__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIR, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIR, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIR)[] = {
          { Py_tp_methods, t_GPSBlockIIR__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIR_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIR)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIR, t_GPSBlockIIR, GPSBlockIIR);

        void t_GPSBlockIIR::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIR), &PY_TYPE_DEF(GPSBlockIIR), module, "GPSBlockIIR", 0);
        }

        void t_GPSBlockIIR::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "class_", make_descriptor(GPSBlockIIR::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "wrapfn_", make_descriptor(t_GPSBlockIIR::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIR::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIR::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIR_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIR::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIR::wrap_Object(GPSBlockIIR(((t_GPSBlockIIR *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIR_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIR::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIR_init_(t_GPSBlockIIR *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          GPSBlockIIR object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = GPSBlockIIR(a0, a1, a2, a3, a4));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MariniMurrayModel::class$ = NULL;
          jmethodID *MariniMurrayModel::mids$ = NULL;
          bool MariniMurrayModel::live$ = false;

          jclass MariniMurrayModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MariniMurrayModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_98f67f4fc615fee4] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MariniMurrayModel;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MariniMurrayModel::MariniMurrayModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

          ::java::util::List MariniMurrayModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          MariniMurrayModel MariniMurrayModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MariniMurrayModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_98f67f4fc615fee4], a0));
          }

          jdouble MariniMurrayModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_a07808bbc1ebff8d], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement MariniMurrayModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self);
          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args);
          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data);
          static PyGetSetDef t_MariniMurrayModel__fields_[] = {
            DECLARE_GET_FIELD(t_MariniMurrayModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MariniMurrayModel__methods_[] = {
            DECLARE_METHOD(t_MariniMurrayModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MariniMurrayModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MariniMurrayModel)[] = {
            { Py_tp_methods, t_MariniMurrayModel__methods_ },
            { Py_tp_init, (void *) t_MariniMurrayModel_init_ },
            { Py_tp_getset, t_MariniMurrayModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MariniMurrayModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MariniMurrayModel, t_MariniMurrayModel, MariniMurrayModel);

          void t_MariniMurrayModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MariniMurrayModel), &PY_TYPE_DEF(MariniMurrayModel), module, "MariniMurrayModel", 0);
          }

          void t_MariniMurrayModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "class_", make_descriptor(MariniMurrayModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "wrapfn_", make_descriptor(t_MariniMurrayModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MariniMurrayModel::initializeClass, 1)))
              return NULL;
            return t_MariniMurrayModel::wrap_Object(MariniMurrayModel(((t_MariniMurrayModel *) arg)->object.this$));
          }
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MariniMurrayModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MariniMurrayModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MariniMurrayModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MariniMurrayModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MariniMurrayModel::getStandardModel(a0));
              return t_MariniMurrayModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSRangeModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSRangeModifier::live$ = false;

          jclass ShapiroOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSRangeModifier::ShapiroOneWayGNSSRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ::java::util::List ShapiroOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void ShapiroOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSRangeModifier, t_ShapiroOneWayGNSSRangeModifier, ShapiroOneWayGNSSRangeModifier);

          void t_ShapiroOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSRangeModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSRangeModifier), module, "ShapiroOneWayGNSSRangeModifier", 0);
          }

          void t_ShapiroOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "class_", make_descriptor(ShapiroOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSRangeModifier::wrap_Object(ShapiroOneWayGNSSRangeModifier(((t_ShapiroOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary$Entry::class$ = NULL;
      jmethodID *DoubleArrayDictionary$Entry::mids$ = NULL;
      bool DoubleArrayDictionary$Entry::live$ = false;

      jclass DoubleArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_be783177b060994b] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_increment_a71c45509eaf92d1] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_scaledIncrement_55268aa2a64a56d3] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/DoubleArrayDictionary$Entry;)V");
          mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_ff7cb6c242604316] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String DoubleArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_d2c8eb4129821f0e]));
      }

      JArray< jdouble > DoubleArrayDictionary$Entry::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_be783177b060994b]));
      }

      void DoubleArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_a71c45509eaf92d1], a0.this$);
      }

      void DoubleArrayDictionary$Entry::scaledIncrement(jdouble a0, const DoubleArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_55268aa2a64a56d3], a0, a1.this$);
      }

      jint DoubleArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
      }

      void DoubleArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_ff7cb6c242604316]);
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
      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, increment, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DoubleArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary$Entry, t_DoubleArrayDictionary$Entry, DoubleArrayDictionary$Entry);

      void t_DoubleArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary$Entry), &PY_TYPE_DEF(DoubleArrayDictionary$Entry), module, "DoubleArrayDictionary$Entry", 0);
      }

      void t_DoubleArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "class_", make_descriptor(DoubleArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "wrapfn_", make_descriptor(t_DoubleArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary$Entry::wrap_Object(DoubleArrayDictionary$Entry(((t_DoubleArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return result.wrap();
      }

      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(self->object.increment(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "increment", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args)
      {
        jdouble a0;
        DoubleArrayDictionary$Entry a1((jobject) NULL);

        if (!parseArgs(args, "Dk", DoubleArrayDictionary$Entry::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaledIncrement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/AbstractOrbitInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractOrbitInterpolator::mids$ = NULL;
      bool AbstractOrbitInterpolator::live$ = false;

      jclass AbstractOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4a8b614955ad3a54] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_checkOrbitsConsistency_82af91bc8dfb5029] = env->getStaticMethodID(cls, "checkOrbitsConsistency", "(Ljava/util/Collection;)V");
          mids$[mid_getOutputInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_628961fcda1acbe8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractOrbitInterpolator::AbstractOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4a8b614955ad3a54, a0, a1, a2.this$)) {}

      void AbstractOrbitInterpolator::checkOrbitsConsistency(const ::java::util::Collection & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrbitsConsistency_82af91bc8dfb5029], a0.this$);
      }

      ::org::orekit::frames::Frame AbstractOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_cb151471db4570f0]));
      }

      ::org::orekit::orbits::Orbit AbstractOrbitInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_interpolate_628961fcda1acbe8], a0.this$, a1.this$));
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
      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args);
      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self);
      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, checkOrbitsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractOrbitInterpolator, t_AbstractOrbitInterpolator, AbstractOrbitInterpolator);
      PyObject *t_AbstractOrbitInterpolator::wrap_Object(const AbstractOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractOrbitInterpolator), &PY_TYPE_DEF(AbstractOrbitInterpolator), module, "AbstractOrbitInterpolator", 0);
      }

      void t_AbstractOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "class_", make_descriptor(AbstractOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractOrbitInterpolator::wrap_Object(AbstractOrbitInterpolator(((t_AbstractOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractOrbitInterpolator(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(::org::orekit::orbits::AbstractOrbitInterpolator::checkOrbitsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkOrbitsConsistency", arg);
        return NULL;
      }

      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::Orbit result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbstractOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystem::class$ = NULL;
          jmethodID *TideSystem::mids$ = NULL;
          bool TideSystem::live$ = false;
          TideSystem *TideSystem::TIDE_FREE = NULL;
          TideSystem *TideSystem::UNKNOWN = NULL;
          TideSystem *TideSystem::ZERO_TIDE = NULL;

          jclass TideSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_240b63d405e1af52] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_values_585beb934297486d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TIDE_FREE = new TideSystem(env->getStaticObjectField(cls, "TIDE_FREE", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              UNKNOWN = new TideSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              ZERO_TIDE = new TideSystem(env->getStaticObjectField(cls, "ZERO_TIDE", "Lorg/orekit/forces/gravity/potential/TideSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TideSystem TideSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TideSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_240b63d405e1af52], a0.this$));
          }

          JArray< TideSystem > TideSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TideSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_585beb934297486d]));
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
          static PyObject *t_TideSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystem_of_(t_TideSystem *self, PyObject *args);
          static PyObject *t_TideSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TideSystem_values(PyTypeObject *type);
          static PyObject *t_TideSystem_get__parameters_(t_TideSystem *self, void *data);
          static PyGetSetDef t_TideSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystem__methods_[] = {
            DECLARE_METHOD(t_TideSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TideSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TideSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystem)[] = {
            { Py_tp_methods, t_TideSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TideSystem, t_TideSystem, TideSystem);
          PyObject *t_TideSystem::wrap_Object(const TideSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TideSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TideSystem *self = (t_TideSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TideSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TideSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TideSystem *self = (t_TideSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TideSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystem), &PY_TYPE_DEF(TideSystem), module, "TideSystem", 0);
          }

          void t_TideSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "class_", make_descriptor(TideSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "wrapfn_", make_descriptor(t_TideSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TideSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "TIDE_FREE", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::TIDE_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "UNKNOWN", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::UNKNOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystem), "ZERO_TIDE", make_descriptor(t_TideSystem::wrap_Object(*TideSystem::ZERO_TIDE)));
          }

          static PyObject *t_TideSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystem::initializeClass, 1)))
              return NULL;
            return t_TideSystem::wrap_Object(TideSystem(((t_TideSystem *) arg)->object.this$));
          }
          static PyObject *t_TideSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystem_of_(t_TideSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TideSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TideSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::TideSystem::valueOf(a0));
              return t_TideSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TideSystem_values(PyTypeObject *type)
          {
            JArray< TideSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::TideSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TideSystem::wrap_jobject);
          }
          static PyObject *t_TideSystem_get__parameters_(t_TideSystem *self, void *data)
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
#include "org/orekit/attitudes/CelestialBodyPointed.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *CelestialBodyPointed::class$ = NULL;
      jmethodID *CelestialBodyPointed::mids$ = NULL;
      bool CelestialBodyPointed::live$ = false;

      jclass CelestialBodyPointed::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/CelestialBodyPointed");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3dab190411919c5c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CelestialBodyPointed::CelestialBodyPointed(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3dab190411919c5c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::attitudes::FieldAttitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args);

      static PyMethodDef t_CelestialBodyPointed__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyPointed, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, getAttitude, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyPointed)[] = {
        { Py_tp_methods, t_CelestialBodyPointed__methods_ },
        { Py_tp_init, (void *) t_CelestialBodyPointed_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyPointed)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyPointed, t_CelestialBodyPointed, CelestialBodyPointed);

      void t_CelestialBodyPointed::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyPointed), &PY_TYPE_DEF(CelestialBodyPointed), module, "CelestialBodyPointed", 0);
      }

      void t_CelestialBodyPointed::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "class_", make_descriptor(CelestialBodyPointed::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "wrapfn_", make_descriptor(t_CelestialBodyPointed::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyPointed::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyPointed::wrap_Object(CelestialBodyPointed(((t_CelestialBodyPointed *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyPointed::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
        CelestialBodyPointed object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CelestialBodyPointed(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/PythonEarthShape.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *PythonEarthShape::class$ = NULL;
        jmethodID *PythonEarthShape::mids$ = NULL;
        bool PythonEarthShape::live$ = false;

        jclass PythonEarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/PythonEarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBodyFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_cff2eba11ebd2420] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_9f0bcc9c00772903] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getIntersectionPoint_ade5649cae5a4672] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_projectToGround_28dd2a6cc35491d2] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_26b1db430bbeb49e] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_transform_f974aaaf2e73b405] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_0bfc32b1890053a9] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_52f3336802c12846] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_transform_82a0f6c52928ba20] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEarthShape::PythonEarthShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEarthShape::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEarthShape::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEarthShape::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self);
        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args);
        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data);
        static PyGetSetDef t_PythonEarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEarthShape, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEarthShape__methods_[] = {
          DECLARE_METHOD(t_PythonEarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEarthShape, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEarthShape)[] = {
          { Py_tp_methods, t_PythonEarthShape__methods_ },
          { Py_tp_init, (void *) t_PythonEarthShape_init_ },
          { Py_tp_getset, t_PythonEarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEarthShape)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEarthShape, t_PythonEarthShape, PythonEarthShape);

        void t_PythonEarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEarthShape), &PY_TYPE_DEF(PythonEarthShape), module, "PythonEarthShape", 1);
        }

        void t_PythonEarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "class_", make_descriptor(PythonEarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "wrapfn_", make_descriptor(t_PythonEarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEarthShape::initializeClass);
          JNINativeMethod methods[] = {
            { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonEarthShape_getBodyFrame0 },
            { "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;", (void *) t_PythonEarthShape_getEllipsoid1 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint2 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint3 },
            { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonEarthShape_projectToGround4 },
            { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_projectToGround5 },
            { "pythonDecRef", "()V", (void *) t_PythonEarthShape_pythonDecRef6 },
            { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEarthShape_transform7 },
            { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_transform8 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_transform9 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_transform10 },
          };
          env->registerNatives(cls, methods, 11);
        }

        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEarthShape::initializeClass, 1)))
            return NULL;
          return t_PythonEarthShape::wrap_Object(PythonEarthShape(((t_PythonEarthShape *) arg)->object.this$));
        }
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds)
        {
          PythonEarthShape object((jobject) NULL);

          INT_CALL(object = PythonEarthShape());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args)
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

        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getBodyFrame", result);
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

        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEllipsoid", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &value))
          {
            throwTypeError("getEllipsoid", result);
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

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
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

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
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

        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
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

        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
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

        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data)
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_inverseCumulativeProbability_9e72cb20adb363fb] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_logProbability_ce4c02d583456bc9] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_6d920aab27f0a3d2] = env->getMethodID(cls, "probability", "(II)D");
            mids$[mid_solveInverseCumulativeProbability_bf59914e93956019] = env->getMethodID(cls, "solveInverseCumulativeProbability", "(DII)I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractIntegerDistribution::AbstractIntegerDistribution() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jint AbstractIntegerDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_9e72cb20adb363fb], a0);
        }

        jdouble AbstractIntegerDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_ce4c02d583456bc9], a0);
        }

        jdouble AbstractIntegerDistribution::probability(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_6d920aab27f0a3d2], a0, a1);
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
#include "org/hipparchus/analysis/solvers/RegulaFalsiSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RegulaFalsiSolver::class$ = NULL;
        jmethodID *RegulaFalsiSolver::mids$ = NULL;
        bool RegulaFalsiSolver::live$ = false;

        jclass RegulaFalsiSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RegulaFalsiSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegulaFalsiSolver::RegulaFalsiSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}
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
        static PyObject *t_RegulaFalsiSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegulaFalsiSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegulaFalsiSolver_of_(t_RegulaFalsiSolver *self, PyObject *args);
        static int t_RegulaFalsiSolver_init_(t_RegulaFalsiSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegulaFalsiSolver_get__parameters_(t_RegulaFalsiSolver *self, void *data);
        static PyGetSetDef t_RegulaFalsiSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RegulaFalsiSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegulaFalsiSolver__methods_[] = {
          DECLARE_METHOD(t_RegulaFalsiSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegulaFalsiSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegulaFalsiSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegulaFalsiSolver)[] = {
          { Py_tp_methods, t_RegulaFalsiSolver__methods_ },
          { Py_tp_init, (void *) t_RegulaFalsiSolver_init_ },
          { Py_tp_getset, t_RegulaFalsiSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegulaFalsiSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(RegulaFalsiSolver, t_RegulaFalsiSolver, RegulaFalsiSolver);
        PyObject *t_RegulaFalsiSolver::wrap_Object(const RegulaFalsiSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegulaFalsiSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegulaFalsiSolver *self = (t_RegulaFalsiSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RegulaFalsiSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegulaFalsiSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegulaFalsiSolver *self = (t_RegulaFalsiSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RegulaFalsiSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RegulaFalsiSolver), &PY_TYPE_DEF(RegulaFalsiSolver), module, "RegulaFalsiSolver", 0);
        }

        void t_RegulaFalsiSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "class_", make_descriptor(RegulaFalsiSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "wrapfn_", make_descriptor(t_RegulaFalsiSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegulaFalsiSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegulaFalsiSolver::initializeClass, 1)))
            return NULL;
          return t_RegulaFalsiSolver::wrap_Object(RegulaFalsiSolver(((t_RegulaFalsiSolver *) arg)->object.this$));
        }
        static PyObject *t_RegulaFalsiSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegulaFalsiSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RegulaFalsiSolver_of_(t_RegulaFalsiSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RegulaFalsiSolver_init_(t_RegulaFalsiSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RegulaFalsiSolver object((jobject) NULL);

              INT_CALL(object = RegulaFalsiSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RegulaFalsiSolver(a0));
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
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RegulaFalsiSolver(a0, a1));
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
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = RegulaFalsiSolver(a0, a1, a2));
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
        static PyObject *t_RegulaFalsiSolver_get__parameters_(t_RegulaFalsiSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesIntegratorBuilder::live$ = false;

        jclass ThreeEighthesIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegratorBuilder::ThreeEighthesIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ThreeEighthesIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
        static PyObject *t_ThreeEighthesIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThreeEighthesIntegratorBuilder_init_(t_ThreeEighthesIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesIntegratorBuilder_buildIntegrator(t_ThreeEighthesIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ThreeEighthesIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesIntegratorBuilder, t_ThreeEighthesIntegratorBuilder, ThreeEighthesIntegratorBuilder);

        void t_ThreeEighthesIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesIntegratorBuilder), module, "ThreeEighthesIntegratorBuilder", 0);
        }

        void t_ThreeEighthesIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "class_", make_descriptor(ThreeEighthesIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesIntegratorBuilder::wrap_Object(ThreeEighthesIntegratorBuilder(((t_ThreeEighthesIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThreeEighthesIntegratorBuilder_init_(t_ThreeEighthesIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ThreeEighthesIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ThreeEighthesIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesIntegratorBuilder_buildIntegrator(t_ThreeEighthesIntegratorBuilder *self, PyObject *args)
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
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldVector::class$ = NULL;
      jmethodID *SparseFieldVector::mids$ = NULL;
      bool SparseFieldVector::live$ = false;

      jclass SparseFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_eb6f5cf36a8e5529] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_399daf55ca8a95b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_0721ee933ad9f246] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_add_17fc5256c635037d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_0721ee933ad9f246] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_9576e351eaaaeeff] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_17fc5256c635037d] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_1f378a1e2fafd4da] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_a09dcda702fd70fc] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_17fc5256c635037d] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_17fc5256c635037d] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_bae57aba20797b29] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_ae1290ffdac268ed] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_9576e351eaaaeeff] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_9576e351eaaaeeff] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_1f378a1e2fafd4da] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_1f378a1e2fafd4da] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_9576e351eaaaeeff] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_9576e351eaaaeeff] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_822527bacdd81087] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_352168969c692677] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_17fc5256c635037d] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_d6f1e197c99df44f] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_9f3b43c70febfa9a] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_8ea0296f882fd30a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/SparseFieldVector;");
          mids$[mid_subtract_17fc5256c635037d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_eb5e61f0a5585705] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_3fb4a592b41cc4b1] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_da260c9bcd5c518a] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_0dbecc976c2f23a8] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_823ce1f3bedac44a] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_3fb4a592b41cc4b1] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_da260c9bcd5c518a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_0dbecc976c2f23a8] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_823ce1f3bedac44a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_8fd427ab23829bf5] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb6f5cf36a8e5529, a0.this$, a1.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_399daf55ca8a95b8, a0.this$, a1)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_0721ee933ad9f246], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_17fc5256c635037d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_0721ee933ad9f246], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_17fc5256c635037d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_1f378a1e2fafd4da]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_a09dcda702fd70fc], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_17fc5256c635037d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_17fc5256c635037d], a0.this$));
      }

      jboolean SparseFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jint SparseFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::FieldElement SparseFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_bae57aba20797b29], a0));
      }

      ::org::hipparchus::Field SparseFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_ae1290ffdac268ed], a0, a1));
      }

      jint SparseFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_1f378a1e2fafd4da]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_1f378a1e2fafd4da]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_822527bacdd81087], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_352168969c692677], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_17fc5256c635037d], a0.this$));
      }

      void SparseFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_d6f1e197c99df44f], a0.this$);
      }

      void SparseFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_9f3b43c70febfa9a], a0, a1.this$);
      }

      void SparseFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      SparseFieldVector SparseFieldVector::subtract(const SparseFieldVector & a0) const
      {
        return SparseFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_8ea0296f882fd30a], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_17fc5256c635037d], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > SparseFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_eb5e61f0a5585705]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_3fb4a592b41cc4b1], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_da260c9bcd5c518a], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_0dbecc976c2f23a8], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_823ce1f3bedac44a], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_3fb4a592b41cc4b1], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_da260c9bcd5c518a], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_0dbecc976c2f23a8], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_823ce1f3bedac44a], a0.this$, a1, a2));
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
      static PyObject *t_SparseFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldVector_of_(t_SparseFieldVector *self, PyObject *args);
      static int t_SparseFieldVector_init_(t_SparseFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldVector_add(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_append(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_copy(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_dotProduct(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_ebeDivide(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_ebeMultiply(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_equals(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_getDimension(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_getEntry(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_getField(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_getSubVector(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_hashCode(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_mapAdd(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapAddToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapDivide(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapDivideToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapInv(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_mapInvToSelf(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_mapMultiply(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapMultiplyToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapSubtract(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapSubtractToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_outerProduct(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_projection(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_set(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_setEntry(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_setSubVector(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_subtract(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_toArray(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_walkInDefaultOrder(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_walkInOptimizedOrder(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_get__dimension(t_SparseFieldVector *self, void *data);
      static PyObject *t_SparseFieldVector_get__field(t_SparseFieldVector *self, void *data);
      static PyObject *t_SparseFieldVector_get__parameters_(t_SparseFieldVector *self, void *data);
      static PyGetSetDef t_SparseFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldVector, dimension),
        DECLARE_GET_FIELD(t_SparseFieldVector, field),
        DECLARE_GET_FIELD(t_SparseFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldVector__methods_[] = {
        DECLARE_METHOD(t_SparseFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, projection, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, set, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldVector)[] = {
        { Py_tp_methods, t_SparseFieldVector__methods_ },
        { Py_tp_init, (void *) t_SparseFieldVector_init_ },
        { Py_tp_getset, t_SparseFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SparseFieldVector, t_SparseFieldVector, SparseFieldVector);
      PyObject *t_SparseFieldVector::wrap_Object(const SparseFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldVector *self = (t_SparseFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldVector *self = (t_SparseFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldVector), &PY_TYPE_DEF(SparseFieldVector), module, "SparseFieldVector", 0);
      }

      void t_SparseFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "class_", make_descriptor(SparseFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "wrapfn_", make_descriptor(t_SparseFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldVector::initializeClass, 1)))
          return NULL;
        return t_SparseFieldVector::wrap_Object(SparseFieldVector(((t_SparseFieldVector *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldVector_of_(t_SparseFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldVector_init_(t_SparseFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = SparseFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = SparseFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldVector(a0, a1, a2));
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

      static PyObject *t_SparseFieldVector_add(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_append(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_copy(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_dotProduct(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_ebeDivide(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_ebeMultiply(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_equals(t_SparseFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SparseFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SparseFieldVector_getDimension(t_SparseFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SparseFieldVector_getEntry(t_SparseFieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_getField(t_SparseFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_getSubVector(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_hashCode(t_SparseFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SparseFieldVector_mapAdd(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapAddToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapDivide(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapDivideToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapInv(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_mapInvToSelf(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_mapMultiply(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapMultiplyToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapSubtract(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapSubtractToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_outerProduct(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_projection(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_set(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_setEntry(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_setSubVector(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_subtract(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_SparseFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_toArray(t_SparseFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_SparseFieldVector_walkInDefaultOrder(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_walkInOptimizedOrder(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_SparseFieldVector_get__parameters_(t_SparseFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldVector_get__dimension(t_SparseFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldVector_get__field(t_SparseFieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/ProperBigFractionFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperBigFractionFormat::class$ = NULL;
      jmethodID *ProperBigFractionFormat::mids$ = NULL;
      bool ProperBigFractionFormat::live$ = false;

      jclass ProperBigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperBigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_8803c3bb12b07c13] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_d93e7788c0c83732] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_b5e88466531b881c] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperBigFractionFormat::ProperBigFractionFormat() : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_8803c3bb12b07c13, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperBigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d93e7788c0c83732], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperBigFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_525709eb5c5b5ea6]));
      }

      ::org::hipparchus::fraction::BigFraction ProperBigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_b5e88466531b881c], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self);
      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data);
      static PyGetSetDef t_ProperBigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperBigFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperBigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperBigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperBigFractionFormat)[] = {
        { Py_tp_methods, t_ProperBigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperBigFractionFormat_init_ },
        { Py_tp_getset, t_ProperBigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperBigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::BigFractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperBigFractionFormat, t_ProperBigFractionFormat, ProperBigFractionFormat);

      void t_ProperBigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperBigFractionFormat), &PY_TYPE_DEF(ProperBigFractionFormat), module, "ProperBigFractionFormat", 0);
      }

      void t_ProperBigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "class_", make_descriptor(ProperBigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "wrapfn_", make_descriptor(t_ProperBigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperBigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperBigFractionFormat::wrap_Object(ProperBigFractionFormat(((t_ProperBigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperBigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperBigFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperBigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperBigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperBigFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
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
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStateInterpolator::class$ = NULL;
        jmethodID *FieldODEStateInterpolator::mids$ = NULL;
        bool FieldODEStateInterpolator::live$ = false;

        jclass FieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_15f5056f2d3c7d41] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_7a35201efb2d5095] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_15f5056f2d3c7d41] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_15f5056f2d3c7d41]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_7a35201efb2d5095], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_15f5056f2d3c7d41]));
        }

        jboolean FieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_eee3de00fe971136]);
        }

        jboolean FieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        jboolean FieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_eee3de00fe971136]);
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
      namespace sampling {
        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_FieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_FieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStateInterpolator, t_FieldODEStateInterpolator, FieldODEStateInterpolator);
        PyObject *t_FieldODEStateInterpolator::wrap_Object(const FieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStateInterpolator), &PY_TYPE_DEF(FieldODEStateInterpolator), module, "FieldODEStateInterpolator", 0);
        }

        void t_FieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "class_", make_descriptor(FieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "wrapfn_", make_descriptor(t_FieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldODEStateInterpolator::wrap_Object(FieldODEStateInterpolator(((t_FieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg)
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

        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
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
              mids$[mid_init$_b73781b754e339ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseIonosphericDelayModifier::PhaseIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b73781b754e339ce, a0.this$, a1)) {}

          ::java::util::List PhaseIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void PhaseIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void PhaseIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
#include "org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince54FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegratorBuilder::DormandPrince54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_of_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince54FieldIntegratorBuilder_init_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_buildIntegrator(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_get__parameters_(t_DormandPrince54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince54FieldIntegratorBuilder, t_DormandPrince54FieldIntegratorBuilder, DormandPrince54FieldIntegratorBuilder);
        PyObject *t_DormandPrince54FieldIntegratorBuilder::wrap_Object(const DormandPrince54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegratorBuilder *self = (t_DormandPrince54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegratorBuilder *self = (t_DormandPrince54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince54FieldIntegratorBuilder), module, "DormandPrince54FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54FieldIntegratorBuilder::wrap_Object(DormandPrince54FieldIntegratorBuilder(((t_DormandPrince54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_of_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince54FieldIntegratorBuilder_init_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_buildIntegrator(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_get__parameters_(t_DormandPrince54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray::class$ = NULL;
      jmethodID *ResizableDoubleArray::mids$ = NULL;
      bool ResizableDoubleArray::live$ = false;

      jclass ResizableDoubleArray::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_aaed259e1b5f1153] = env->getMethodID(cls, "<init>", "(IDD)V");
          mids$[mid_init$_8e716587161a361e] = env->getMethodID(cls, "<init>", "(IDDLorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;[D)V");
          mids$[mid_addElement_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addElement", "(D)V");
          mids$[mid_addElementRolling_bf28ed64d6e8576b] = env->getMethodID(cls, "addElementRolling", "(D)D");
          mids$[mid_addElements_a71c45509eaf92d1] = env->getMethodID(cls, "addElements", "([D)V");
          mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_compute_bcf8213980423e08] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/util/MathArrays$Function;)D");
          mids$[mid_contract_ff7cb6c242604316] = env->getMethodID(cls, "contract", "()V");
          mids$[mid_copy_1a4a53528a53646d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/util/ResizableDoubleArray;");
          mids$[mid_discardFrontElements_8fd427ab23829bf5] = env->getMethodID(cls, "discardFrontElements", "(I)V");
          mids$[mid_discardMostRecentElements_8fd427ab23829bf5] = env->getMethodID(cls, "discardMostRecentElements", "(I)V");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCapacity_d6ab429752e7c267] = env->getMethodID(cls, "getCapacity", "()I");
          mids$[mid_getContractionCriterion_9981f74b2d109da6] = env->getMethodID(cls, "getContractionCriterion", "()D");
          mids$[mid_getElement_ce4c02d583456bc9] = env->getMethodID(cls, "getElement", "(I)D");
          mids$[mid_getElements_be783177b060994b] = env->getMethodID(cls, "getElements", "()[D");
          mids$[mid_getExpansionFactor_9981f74b2d109da6] = env->getMethodID(cls, "getExpansionFactor", "()D");
          mids$[mid_getExpansionMode_c628b3f54ee99621] = env->getMethodID(cls, "getExpansionMode", "()Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_getNumElements_d6ab429752e7c267] = env->getMethodID(cls, "getNumElements", "()I");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_setElement_4320462275d66e78] = env->getMethodID(cls, "setElement", "(ID)V");
          mids$[mid_setNumElements_8fd427ab23829bf5] = env->getMethodID(cls, "setNumElements", "(I)V");
          mids$[mid_substituteMostRecentElement_bf28ed64d6e8576b] = env->getMethodID(cls, "substituteMostRecentElement", "(D)D");
          mids$[mid_checkContractExpand_13edac039e8cc967] = env->getMethodID(cls, "checkContractExpand", "(DD)V");
          mids$[mid_getArrayRef_be783177b060994b] = env->getMethodID(cls, "getArrayRef", "()[D");
          mids$[mid_getStartIndex_d6ab429752e7c267] = env->getMethodID(cls, "getStartIndex", "()I");
          mids$[mid_expand_ff7cb6c242604316] = env->getMethodID(cls, "expand", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray::ResizableDoubleArray() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ResizableDoubleArray::ResizableDoubleArray(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aaed259e1b5f1153, a0, a1, a2)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2, const ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e716587161a361e, a0, a1, a2, a3.this$, a4.this$)) {}

      void ResizableDoubleArray::addElement(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElement_1ad26e8c8c0cd65b], a0);
      }

      jdouble ResizableDoubleArray::addElementRolling(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_addElementRolling_bf28ed64d6e8576b], a0);
      }

      void ResizableDoubleArray::addElements(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElements_a71c45509eaf92d1], a0.this$);
      }

      void ResizableDoubleArray::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
      }

      jdouble ResizableDoubleArray::compute(const ::org::hipparchus::util::MathArrays$Function & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_compute_bcf8213980423e08], a0.this$);
      }

      void ResizableDoubleArray::contract() const
      {
        env->callVoidMethod(this$, mids$[mid_contract_ff7cb6c242604316]);
      }

      ResizableDoubleArray ResizableDoubleArray::copy() const
      {
        return ResizableDoubleArray(env->callObjectMethod(this$, mids$[mid_copy_1a4a53528a53646d]));
      }

      void ResizableDoubleArray::discardFrontElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardFrontElements_8fd427ab23829bf5], a0);
      }

      void ResizableDoubleArray::discardMostRecentElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardMostRecentElements_8fd427ab23829bf5], a0);
      }

      jboolean ResizableDoubleArray::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jint ResizableDoubleArray::getCapacity() const
      {
        return env->callIntMethod(this$, mids$[mid_getCapacity_d6ab429752e7c267]);
      }

      jdouble ResizableDoubleArray::getContractionCriterion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getContractionCriterion_9981f74b2d109da6]);
      }

      jdouble ResizableDoubleArray::getElement(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElement_ce4c02d583456bc9], a0);
      }

      JArray< jdouble > ResizableDoubleArray::getElements() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_be783177b060994b]));
      }

      jdouble ResizableDoubleArray::getExpansionFactor() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExpansionFactor_9981f74b2d109da6]);
      }

      ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode ResizableDoubleArray::getExpansionMode() const
      {
        return ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode(env->callObjectMethod(this$, mids$[mid_getExpansionMode_c628b3f54ee99621]));
      }

      jint ResizableDoubleArray::getNumElements() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumElements_d6ab429752e7c267]);
      }

      jint ResizableDoubleArray::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      void ResizableDoubleArray::setElement(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setElement_4320462275d66e78], a0, a1);
      }

      void ResizableDoubleArray::setNumElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNumElements_8fd427ab23829bf5], a0);
      }

      jdouble ResizableDoubleArray::substituteMostRecentElement(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_substituteMostRecentElement_bf28ed64d6e8576b], a0);
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
      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data);
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data);
      static PyGetSetDef t_ResizableDoubleArray__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray, capacity),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, contractionCriterion),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, elements),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionFactor),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionMode),
        DECLARE_GETSET_FIELD(t_ResizableDoubleArray, numElements),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, addElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElementRolling, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, clear, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, compute, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, contract, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, copy, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, discardFrontElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, discardMostRecentElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, equals, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getCapacity, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getContractionCriterion, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, getElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionFactor, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionMode, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getNumElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setElement, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setNumElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, substituteMostRecentElement, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray)[] = {
        { Py_tp_methods, t_ResizableDoubleArray__methods_ },
        { Py_tp_init, (void *) t_ResizableDoubleArray_init_ },
        { Py_tp_getset, t_ResizableDoubleArray__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray, t_ResizableDoubleArray, ResizableDoubleArray);

      void t_ResizableDoubleArray::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray), &PY_TYPE_DEF(ResizableDoubleArray), module, "ResizableDoubleArray", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "ExpansionMode", make_descriptor(&PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode)));
      }

      void t_ResizableDoubleArray::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "class_", make_descriptor(ResizableDoubleArray::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "wrapfn_", make_descriptor(t_ResizableDoubleArray::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray::wrap_Object(ResizableDoubleArray(((t_ResizableDoubleArray *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ResizableDoubleArray object((jobject) NULL);

            INT_CALL(object = ResizableDoubleArray());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDD", &a0, &a1, &a2))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< jdouble > a4((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDDK[D", ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::parameters_, &a4))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2, a3, a4));
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

      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.addElement(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.addElementRolling(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addElementRolling", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(self->object.addElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg)
      {
        ::org::hipparchus::util::MathArrays$Function a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::hipparchus::util::MathArrays$Function::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.contract());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self)
      {
        ResizableDoubleArray result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_ResizableDoubleArray::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardFrontElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardFrontElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardMostRecentElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardMostRecentElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCapacity());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg)
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

      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getElements());
        return result.wrap();
      }

      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumElements());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setElement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setElement", args);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setNumElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setNumElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.substituteMostRecentElement(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "substituteMostRecentElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCapacity());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getElements());
        return value.wrap();
      }

      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(value);
      }

      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumElements());
        return PyLong_FromLong((long) value);
      }
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setNumElements(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "numElements", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *LocalizedException::class$ = NULL;
      jmethodID *LocalizedException::mids$ = NULL;
      bool LocalizedException::live$ = false;

      jclass LocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/LocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
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
      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg);
      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self);
      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self);
      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data);
      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data);
      static PyGetSetDef t_LocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedException, parts),
        DECLARE_GET_FIELD(t_LocalizedException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedException__methods_[] = {
        DECLARE_METHOD(t_LocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, getMessage, METH_O),
        DECLARE_METHOD(t_LocalizedException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedException)[] = {
        { Py_tp_methods, t_LocalizedException__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalizedException, t_LocalizedException, LocalizedException);

      void t_LocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedException), &PY_TYPE_DEF(LocalizedException), module, "LocalizedException", 0);
      }

      void t_LocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "class_", make_descriptor(LocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "wrapfn_", make_descriptor(t_LocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedException::initializeClass, 1)))
          return NULL;
        return t_LocalizedException::wrap_Object(LocalizedException(((t_LocalizedException *) arg)->object.this$));
      }
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getMessage(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getMessage", arg);
        return NULL;
      }

      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data)
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
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathRuntimeException::class$ = NULL;
      jmethodID *MathRuntimeException::mids$ = NULL;
      bool MathRuntimeException::live$ = false;

      jclass MathRuntimeException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathRuntimeException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_db158649d786c484] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_createInternalError_f51081121a8ebb04] = env->getStaticMethodID(cls, "createInternalError", "()Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_createInternalError_875275e2137f37ad] = env->getStaticMethodID(cls, "createInternalError", "(Ljava/lang/Throwable;)Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathRuntimeException::MathRuntimeException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      MathRuntimeException::MathRuntimeException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_db158649d786c484, a0.this$, a1.this$, a2.this$)) {}

      MathRuntimeException MathRuntimeException::createInternalError()
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_f51081121a8ebb04]));
      }

      MathRuntimeException MathRuntimeException::createInternalError(const ::java::lang::Throwable & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_875275e2137f37ad], a0.this$));
      }

      ::java::lang::String MathRuntimeException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String MathRuntimeException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String MathRuntimeException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > MathRuntimeException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable MathRuntimeException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data);
      static PyGetSetDef t_MathRuntimeException__fields_[] = {
        DECLARE_GET_FIELD(t_MathRuntimeException, localizedMessage),
        DECLARE_GET_FIELD(t_MathRuntimeException, message),
        DECLARE_GET_FIELD(t_MathRuntimeException, parts),
        DECLARE_GET_FIELD(t_MathRuntimeException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathRuntimeException__methods_[] = {
        DECLARE_METHOD(t_MathRuntimeException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, createInternalError, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_MathRuntimeException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathRuntimeException)[] = {
        { Py_tp_methods, t_MathRuntimeException__methods_ },
        { Py_tp_init, (void *) t_MathRuntimeException_init_ },
        { Py_tp_getset, t_MathRuntimeException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathRuntimeException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(MathRuntimeException, t_MathRuntimeException, MathRuntimeException);

      void t_MathRuntimeException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathRuntimeException), &PY_TYPE_DEF(MathRuntimeException), module, "MathRuntimeException", 0);
      }

      void t_MathRuntimeException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "class_", make_descriptor(MathRuntimeException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "wrapfn_", make_descriptor(t_MathRuntimeException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathRuntimeException::initializeClass, 1)))
          return NULL;
        return t_MathRuntimeException::wrap_Object(MathRuntimeException(((t_MathRuntimeException *) arg)->object.this$));
      }
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathRuntimeException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathRuntimeException(a0, a1));
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
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathRuntimeException(a0, a1, a2));
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

      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MathRuntimeException result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError());
            return t_MathRuntimeException::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            MathRuntimeException result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError(a0));
              return t_MathRuntimeException::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createInternalError", args);
        return NULL;
      }

      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args)
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

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data)
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
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *BrouwerLyddanePropagator::class$ = NULL;
        jmethodID *BrouwerLyddanePropagator::mids$ = NULL;
        bool BrouwerLyddanePropagator::live$ = false;
        jdouble BrouwerLyddanePropagator::M2 = (jdouble) 0;
        ::java::lang::String *BrouwerLyddanePropagator::M2_NAME = NULL;

        jclass BrouwerLyddanePropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/BrouwerLyddanePropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab35ed4f604dd5eb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_82b2cad935fb5633] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_c3a138f7da8cfd67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_a952b92f2853fea4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_cce416370effa2f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_12d751c34f54322f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_b4c2b96bc9f59246] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_096e4f5a3065b979] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_c5477237f92cb418] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_32e9d1e950a78bc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_9facbb2d63b09a07] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_5a6b3e62be7f2c62] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_10fd21ce831f8e04] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_863bab6ee9798ac8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_43d95393ce32e4e0] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_58ac355e64ec8332] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_506b74a398fbe28a] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_getCk0_be783177b060994b] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getM2_9981f74b2d109da6] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getReferenceRadius_9981f74b2d109da6] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_6de060c4d602af5f] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_3f94e7a0a2844a08] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_5463628f1a7002e0] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_createHarvester_d0aee1b2c15f4d53] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_resetIntermediateState_5ecf00e07ef54854] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            M2 = env->getStaticDoubleField(cls, "M2");
            M2_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "M2_NAME", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ab35ed4f604dd5eb, a0.this$, a1.this$, a2)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_82b2cad935fb5633, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c3a138f7da8cfd67, a0.this$, a1, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a952b92f2853fea4, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_cce416370effa2f7, a0.this$, a1.this$, a2, a3.this$, a4)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_12d751c34f54322f, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b4c2b96bc9f59246, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_096e4f5a3065b979, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c5477237f92cb418, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_32e9d1e950a78bc0, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9facbb2d63b09a07, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5a6b3e62be7f2c62, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_10fd21ce831f8e04, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_863bab6ee9798ac8, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_43d95393ce32e4e0], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_58ac355e64ec8332], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_506b74a398fbe28a], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > BrouwerLyddanePropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_be783177b060994b]));
        }

        jdouble BrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_9981f74b2d109da6]);
        }

        jdouble BrouwerLyddanePropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::java::util::List BrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        jdouble BrouwerLyddanePropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_9981f74b2d109da6]);
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_6de060c4d602af5f], a0.this$));
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_3f94e7a0a2844a08], a0.this$, a1.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_5463628f1a7002e0], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_BrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BrouwerLyddanePropagator_init_(t_BrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagator_getCk0(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getM2(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getMu(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getParametersDrivers(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getReferenceRadius(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_propagateOrbit(t_BrouwerLyddanePropagator *self, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagator_resetInitialState(t_BrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagator_get__ck0(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__m2(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__mu(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__parametersDrivers(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__referenceRadius(t_BrouwerLyddanePropagator *self, void *data);
        static PyGetSetDef t_BrouwerLyddanePropagator__fields_[] = {
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, ck0),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, m2),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, mu),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, referenceRadius),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrouwerLyddanePropagator__methods_[] = {
          DECLARE_METHOD(t_BrouwerLyddanePropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getCk0, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getM2, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getReferenceRadius, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, propagateOrbit, METH_O),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrouwerLyddanePropagator)[] = {
          { Py_tp_methods, t_BrouwerLyddanePropagator__methods_ },
          { Py_tp_init, (void *) t_BrouwerLyddanePropagator_init_ },
          { Py_tp_getset, t_BrouwerLyddanePropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrouwerLyddanePropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(BrouwerLyddanePropagator, t_BrouwerLyddanePropagator, BrouwerLyddanePropagator);

        void t_BrouwerLyddanePropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(BrouwerLyddanePropagator), &PY_TYPE_DEF(BrouwerLyddanePropagator), module, "BrouwerLyddanePropagator", 0);
        }

        void t_BrouwerLyddanePropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "class_", make_descriptor(BrouwerLyddanePropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "wrapfn_", make_descriptor(t_BrouwerLyddanePropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BrouwerLyddanePropagator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "M2", make_descriptor(BrouwerLyddanePropagator::M2));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "M2_NAME", make_descriptor(j2p(*BrouwerLyddanePropagator::M2_NAME)));
        }

        static PyObject *t_BrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrouwerLyddanePropagator::initializeClass, 1)))
            return NULL;
          return t_BrouwerLyddanePropagator::wrap_Object(BrouwerLyddanePropagator(((t_BrouwerLyddanePropagator *) arg)->object.this$));
        }
        static PyObject *t_BrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrouwerLyddanePropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BrouwerLyddanePropagator_init_(t_BrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              jdouble a2;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              jdouble a4;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              jdouble a5;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_, &a6))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              jint a12;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDKDDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10, &a11, &a12))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_BrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jint a5;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkDDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDDI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_BrouwerLyddanePropagator_getCk0(t_BrouwerLyddanePropagator *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCk0());
          return result.wrap();
        }

        static PyObject *t_BrouwerLyddanePropagator_getM2(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getM2());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_getMu(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_getParametersDrivers(t_BrouwerLyddanePropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_BrouwerLyddanePropagator_getReferenceRadius(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_propagateOrbit(t_BrouwerLyddanePropagator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0));
            return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", arg);
          return NULL;
        }

        static PyObject *t_BrouwerLyddanePropagator_resetInitialState(t_BrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "kKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__ck0(t_BrouwerLyddanePropagator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCk0());
          return value.wrap();
        }

        static PyObject *t_BrouwerLyddanePropagator_get__m2(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getM2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__mu(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__parametersDrivers(t_BrouwerLyddanePropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__referenceRadius(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocity::class$ = NULL;
              jmethodID *AngularVelocity::mids$ = NULL;
              bool AngularVelocity::live$ = false;

              jclass AngularVelocity::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAngVelX_9981f74b2d109da6] = env->getMethodID(cls, "getAngVelX", "()D");
                  mids$[mid_getAngVelY_9981f74b2d109da6] = env->getMethodID(cls, "getAngVelY", "()D");
                  mids$[mid_getAngVelZ_9981f74b2d109da6] = env->getMethodID(cls, "getAngVelZ", "()D");
                  mids$[mid_getEndpoints_d67fadc29cf1ce4a] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getFrame_0fc1562b68204151] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setAngVelX_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAngVelX", "(D)V");
                  mids$[mid_setAngVelY_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAngVelY", "(D)V");
                  mids$[mid_setAngVelZ_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAngVelZ", "(D)V");
                  mids$[mid_setFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AngularVelocity::AngularVelocity() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jdouble AngularVelocity::getAngVelX() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelX_9981f74b2d109da6]);
              }

              jdouble AngularVelocity::getAngVelY() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelY_9981f74b2d109da6]);
              }

              jdouble AngularVelocity::getAngVelZ() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelZ_9981f74b2d109da6]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AngularVelocity::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_d67fadc29cf1ce4a]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AngularVelocity::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_0fc1562b68204151]));
              }

              void AngularVelocity::setAngVelX(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelX_1ad26e8c8c0cd65b], a0);
              }

              void AngularVelocity::setAngVelY(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelY_1ad26e8c8c0cd65b], a0);
              }

              void AngularVelocity::setAngVelZ(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelZ_1ad26e8c8c0cd65b], a0);
              }

              void AngularVelocity::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_2c8b859a72c0094e], a0.this$);
              }

              void AngularVelocity::validate(jdouble a0) const
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
          namespace adm {
            namespace apm {
              static PyObject *t_AngularVelocity_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocity_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AngularVelocity_init_(t_AngularVelocity *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AngularVelocity_getAngVelX(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getAngVelY(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getAngVelZ(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getEndpoints(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getFrame(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_setAngVelX(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setAngVelY(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setAngVelZ(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setFrame(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_validate(t_AngularVelocity *self, PyObject *args);
              static PyObject *t_AngularVelocity_get__angVelX(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelX(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__angVelY(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelY(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__angVelZ(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelZ(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__endpoints(t_AngularVelocity *self, void *data);
              static PyObject *t_AngularVelocity_get__frame(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__frame(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyGetSetDef t_AngularVelocity__fields_[] = {
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelX),
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelY),
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelZ),
                DECLARE_GET_FIELD(t_AngularVelocity, endpoints),
                DECLARE_GETSET_FIELD(t_AngularVelocity, frame),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocity__methods_[] = {
                DECLARE_METHOD(t_AngularVelocity, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocity, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelX, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelY, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelZ, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, setAngVelX, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setAngVelY, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setAngVelZ, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setFrame, METH_O),
                DECLARE_METHOD(t_AngularVelocity, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocity)[] = {
                { Py_tp_methods, t_AngularVelocity__methods_ },
                { Py_tp_init, (void *) t_AngularVelocity_init_ },
                { Py_tp_getset, t_AngularVelocity__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocity)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AngularVelocity, t_AngularVelocity, AngularVelocity);

              void t_AngularVelocity::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocity), &PY_TYPE_DEF(AngularVelocity), module, "AngularVelocity", 0);
              }

              void t_AngularVelocity::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "class_", make_descriptor(AngularVelocity::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "wrapfn_", make_descriptor(t_AngularVelocity::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AngularVelocity_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocity::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocity::wrap_Object(AngularVelocity(((t_AngularVelocity *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocity_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocity::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AngularVelocity_init_(t_AngularVelocity *self, PyObject *args, PyObject *kwds)
              {
                AngularVelocity object((jobject) NULL);

                INT_CALL(object = AngularVelocity());
                self->object = object;

                return 0;
              }

              static PyObject *t_AngularVelocity_getAngVelX(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelX());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getAngVelY(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelY());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getAngVelZ(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelZ());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getEndpoints(t_AngularVelocity *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AngularVelocity_getFrame(t_AngularVelocity *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AngularVelocity_setAngVelX(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelX(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelX", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setAngVelY(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelY(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelY", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setAngVelZ(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelZ(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelZ", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setFrame(t_AngularVelocity *self, PyObject *arg)
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

              static PyObject *t_AngularVelocity_validate(t_AngularVelocity *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AngularVelocity), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AngularVelocity_get__angVelX(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelX());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelX(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelX(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelX", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__angVelY(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelY());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelY(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelY(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelY", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__angVelZ(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelZ());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelZ(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelZ(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelZ", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__endpoints(t_AngularVelocity *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AngularVelocity_get__frame(t_AngularVelocity *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AngularVelocity_set__frame(t_AngularVelocity *self, PyObject *arg, void *data)
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
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimplePointChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimplePointChecker::class$ = NULL;
      jmethodID *SimplePointChecker::mids$ = NULL;
      bool SimplePointChecker::live$ = false;

      jclass SimplePointChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimplePointChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_5c25e68860d2a05f] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/util/Pair;Lorg/hipparchus/util/Pair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

      jboolean SimplePointChecker::converged(jint a0, const ::org::hipparchus::util::Pair & a1, const ::org::hipparchus::util::Pair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_5c25e68860d2a05f], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args);
      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args);
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data);
      static PyGetSetDef t_SimplePointChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimplePointChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimplePointChecker__methods_[] = {
        DECLARE_METHOD(t_SimplePointChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimplePointChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimplePointChecker)[] = {
        { Py_tp_methods, t_SimplePointChecker__methods_ },
        { Py_tp_init, (void *) t_SimplePointChecker_init_ },
        { Py_tp_getset, t_SimplePointChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimplePointChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimplePointChecker, t_SimplePointChecker, SimplePointChecker);
      PyObject *t_SimplePointChecker::wrap_Object(const SimplePointChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimplePointChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimplePointChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimplePointChecker), &PY_TYPE_DEF(SimplePointChecker), module, "SimplePointChecker", 0);
      }

      void t_SimplePointChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "class_", make_descriptor(SimplePointChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "wrapfn_", make_descriptor(t_SimplePointChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimplePointChecker::initializeClass, 1)))
          return NULL;
        return t_SimplePointChecker::wrap_Object(SimplePointChecker(((t_SimplePointChecker *) arg)->object.this$));
      }
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimplePointChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimplePointChecker(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimplePointChecker(a0, a1, a2));
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

      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::util::Pair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::util::Pair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::util::Pair::initializeClass, ::org::hipparchus::util::Pair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_Pair::parameters_, &a2, &p2, ::org::hipparchus::util::t_Pair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimplePointChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonFieldTimeStamped.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeStamped::class$ = NULL;
      jmethodID *PythonFieldTimeStamped::mids$ = NULL;
      bool PythonFieldTimeStamped::live$ = false;

      jclass PythonFieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStamped::PythonFieldTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldTimeStamped::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args);
      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self);
      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data);
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStamped)[] = {
        { Py_tp_methods, t_PythonFieldTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStamped_init_ },
        { Py_tp_getset, t_PythonFieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStamped, t_PythonFieldTimeStamped, PythonFieldTimeStamped);
      PyObject *t_PythonFieldTimeStamped::wrap_Object(const PythonFieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStamped), &PY_TYPE_DEF(PythonFieldTimeStamped), module, "PythonFieldTimeStamped", 1);
      }

      void t_PythonFieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "class_", make_descriptor(PythonFieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "wrapfn_", make_descriptor(t_PythonFieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStamped::wrap_Object(PythonFieldTimeStamped(((t_PythonFieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
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

      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data)
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
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventSlopeFilter.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_27f5b9f874ab26c9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_455ff24598d85771] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_99863455dd1dde70] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_create_7ae46bf9328f5ad7] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, const ::org::hipparchus::ode::events::FilterType & a2) : ::org::hipparchus::ode::events::AbstractFieldODEDetector(env->newObject(initializeClass, &mids$, mid_init$_27f5b9f874ab26c9, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_455ff24598d85771], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_99863455dd1dde70]));
        }

        void FieldEventSlopeFilter::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractFieldODEDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldODEEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::events::FilterType a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a2, &p2, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseFieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldMatrix::class$ = NULL;
      jmethodID *SparseFieldMatrix::mids$ = NULL;
      bool SparseFieldMatrix::live$ = false;

      jclass SparseFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_87e4c06eff884f7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_addToEntry_8de38856a6ebea36] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_02883dbbe5db44ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_71a6a4df501a3e03] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_a81b5a6b0760a7e3] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiplyEntry_8de38856a6ebea36] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_b180f987191970ad] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setEntry_8de38856a6ebea36] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_transposeMultiply_b180f987191970ad] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::linear::FieldMatrix & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_87e4c06eff884f7d, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

      void SparseFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_02883dbbe5db44ac]));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_71a6a4df501a3e03], a0, a1));
      }

      jint SparseFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::FieldElement SparseFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a81b5a6b0760a7e3], a0, a1));
      }

      jint SparseFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      void SparseFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_b180f987191970ad], a0.this$));
      }

      void SparseFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_b180f987191970ad], a0.this$));
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
      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args);
      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data);
      static PyGetSetDef t_SparseFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldMatrix)[] = {
        { Py_tp_methods, t_SparseFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_SparseFieldMatrix_init_ },
        { Py_tp_getset, t_SparseFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(SparseFieldMatrix, t_SparseFieldMatrix, SparseFieldMatrix);
      PyObject *t_SparseFieldMatrix::wrap_Object(const SparseFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldMatrix), &PY_TYPE_DEF(SparseFieldMatrix), module, "SparseFieldMatrix", 0);
      }

      void t_SparseFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "class_", make_descriptor(SparseFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "wrapfn_", make_descriptor(t_SparseFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseFieldMatrix::wrap_Object(SparseFieldMatrix(((t_SparseFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldMatrix(a0, a1, a2));
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

      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/PythonAdmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *PythonAdmParser::class$ = NULL;
            jmethodID *PythonAdmParser::mids$ = NULL;
            bool PythonAdmParser::live$ = false;

            jclass PythonAdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/PythonAdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_0508018a256edbd9] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_6b8c194dac7b9184] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonAdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonAdmParser::pythonExtension(jlong a0) const
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
        namespace ndm {
          namespace adm {
            static PyObject *t_PythonAdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAdmParser_of_(t_PythonAdmParser *self, PyObject *args);
            static PyObject *t_PythonAdmParser_finalize(t_PythonAdmParser *self);
            static PyObject *t_PythonAdmParser_pythonExtension(t_PythonAdmParser *self, PyObject *args);
            static jobject JNICALL t_PythonAdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAdmParser_get__self(t_PythonAdmParser *self, void *data);
            static PyObject *t_PythonAdmParser_get__parameters_(t_PythonAdmParser *self, void *data);
            static PyGetSetDef t_PythonAdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAdmParser, self),
              DECLARE_GET_FIELD(t_PythonAdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonAdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAdmParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAdmParser)[] = {
              { Py_tp_methods, t_PythonAdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
              NULL
            };

            DEFINE_TYPE(PythonAdmParser, t_PythonAdmParser, PythonAdmParser);
            PyObject *t_PythonAdmParser::wrap_Object(const PythonAdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAdmParser *self = (t_PythonAdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAdmParser *self = (t_PythonAdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAdmParser), &PY_TYPE_DEF(PythonAdmParser), module, "PythonAdmParser", 1);
            }

            void t_PythonAdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "class_", make_descriptor(PythonAdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "wrapfn_", make_descriptor(t_PythonAdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;", (void *) t_PythonAdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonAdmParser::wrap_Object(PythonAdmParser(((t_PythonAdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAdmParser_of_(t_PythonAdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAdmParser_finalize(t_PythonAdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAdmParser_pythonExtension(t_PythonAdmParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jboolean JNICALL t_PythonAdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jboolean JNICALL t_PythonAdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jboolean JNICALL t_PythonAdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jobject JNICALL t_PythonAdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, &value))
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

            static jboolean JNICALL t_PythonAdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jboolean JNICALL t_PythonAdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jboolean JNICALL t_PythonAdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jboolean JNICALL t_PythonAdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jboolean JNICALL t_PythonAdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static jboolean JNICALL t_PythonAdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static void JNICALL t_PythonAdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static PyObject *t_PythonAdmParser_get__self(t_PythonAdmParser *self, void *data)
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
            static PyObject *t_PythonAdmParser_get__parameters_(t_PythonAdmParser *self, void *data)
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
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LagrangianPoints::class$ = NULL;
      jmethodID *LagrangianPoints::mids$ = NULL;
      bool LagrangianPoints::live$ = false;
      LagrangianPoints *LagrangianPoints::L1 = NULL;
      LagrangianPoints *LagrangianPoints::L2 = NULL;
      LagrangianPoints *LagrangianPoints::L3 = NULL;
      LagrangianPoints *LagrangianPoints::L4 = NULL;
      LagrangianPoints *LagrangianPoints::L5 = NULL;

      jclass LagrangianPoints::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LagrangianPoints");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_77a60919d28bb4ac] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_values_21b59f91d6a354d2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/LagrangianPoints;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          L1 = new LagrangianPoints(env->getStaticObjectField(cls, "L1", "Lorg/orekit/utils/LagrangianPoints;"));
          L2 = new LagrangianPoints(env->getStaticObjectField(cls, "L2", "Lorg/orekit/utils/LagrangianPoints;"));
          L3 = new LagrangianPoints(env->getStaticObjectField(cls, "L3", "Lorg/orekit/utils/LagrangianPoints;"));
          L4 = new LagrangianPoints(env->getStaticObjectField(cls, "L4", "Lorg/orekit/utils/LagrangianPoints;"));
          L5 = new LagrangianPoints(env->getStaticObjectField(cls, "L5", "Lorg/orekit/utils/LagrangianPoints;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LagrangianPoints LagrangianPoints::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LagrangianPoints(env->callStaticObjectMethod(cls, mids$[mid_valueOf_77a60919d28bb4ac], a0.this$));
      }

      JArray< LagrangianPoints > LagrangianPoints::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LagrangianPoints >(env->callStaticObjectMethod(cls, mids$[mid_values_21b59f91d6a354d2]));
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
      static PyObject *t_LagrangianPoints_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LagrangianPoints_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LagrangianPoints_of_(t_LagrangianPoints *self, PyObject *args);
      static PyObject *t_LagrangianPoints_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LagrangianPoints_values(PyTypeObject *type);
      static PyObject *t_LagrangianPoints_get__parameters_(t_LagrangianPoints *self, void *data);
      static PyGetSetDef t_LagrangianPoints__fields_[] = {
        DECLARE_GET_FIELD(t_LagrangianPoints, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LagrangianPoints__methods_[] = {
        DECLARE_METHOD(t_LagrangianPoints, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, of_, METH_VARARGS),
        DECLARE_METHOD(t_LagrangianPoints, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LagrangianPoints)[] = {
        { Py_tp_methods, t_LagrangianPoints__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LagrangianPoints__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LagrangianPoints)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LagrangianPoints, t_LagrangianPoints, LagrangianPoints);
      PyObject *t_LagrangianPoints::wrap_Object(const LagrangianPoints& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LagrangianPoints::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LagrangianPoints *self = (t_LagrangianPoints *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LagrangianPoints::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LagrangianPoints::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LagrangianPoints *self = (t_LagrangianPoints *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LagrangianPoints::install(PyObject *module)
      {
        installType(&PY_TYPE(LagrangianPoints), &PY_TYPE_DEF(LagrangianPoints), module, "LagrangianPoints", 0);
      }

      void t_LagrangianPoints::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "class_", make_descriptor(LagrangianPoints::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "wrapfn_", make_descriptor(t_LagrangianPoints::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "boxfn_", make_descriptor(boxObject));
        env->getClass(LagrangianPoints::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L1", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L2", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L3", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L3)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L4", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L4)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L5", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L5)));
      }

      static PyObject *t_LagrangianPoints_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LagrangianPoints::initializeClass, 1)))
          return NULL;
        return t_LagrangianPoints::wrap_Object(LagrangianPoints(((t_LagrangianPoints *) arg)->object.this$));
      }
      static PyObject *t_LagrangianPoints_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LagrangianPoints::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LagrangianPoints_of_(t_LagrangianPoints *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LagrangianPoints_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LagrangianPoints result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::LagrangianPoints::valueOf(a0));
          return t_LagrangianPoints::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LagrangianPoints_values(PyTypeObject *type)
      {
        JArray< LagrangianPoints > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::LagrangianPoints::values());
        return JArray<jobject>(result.this$).wrap(t_LagrangianPoints::wrap_jobject);
      }
      static PyObject *t_LagrangianPoints_get__parameters_(t_LagrangianPoints *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
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
                mids$[mid_process_8c63957d2ce4133c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)Z");
                mids$[mid_valueOf_0c8d45da01c3cb04] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");
                mids$[mid_values_84792e24c09f5bb2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");

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
              return env->callBooleanMethod(this$, mids$[mid_process_8c63957d2ce4133c], a0.this$, a1.this$, a2.this$);
            }

            ODParametersKey ODParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ODParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0c8d45da01c3cb04], a0.this$));
            }

            JArray< ODParametersKey > ODParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ODParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_84792e24c09f5bb2]));
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
