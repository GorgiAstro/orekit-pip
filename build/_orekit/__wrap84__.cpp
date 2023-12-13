#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NavigationSystem::class$ = NULL;
          jmethodID *NavigationSystem::mids$ = NULL;
          bool NavigationSystem::live$ = false;
          NavigationSystem *NavigationSystem::BDS = NULL;
          NavigationSystem *NavigationSystem::EMPTY = NULL;
          NavigationSystem *NavigationSystem::GAL = NULL;
          NavigationSystem *NavigationSystem::GLO = NULL;
          NavigationSystem *NavigationSystem::GPS = NULL;
          NavigationSystem *NavigationSystem::QZS = NULL;
          NavigationSystem *NavigationSystem::SBAS = NULL;

          jclass NavigationSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NavigationSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationSystem_7a3f0073fb66d126] = env->getStaticMethodID(cls, "getNavigationSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_7a3f0073fb66d126] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_values_a549a38043476475] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new NavigationSystem(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              EMPTY = new NavigationSystem(env->getStaticObjectField(cls, "EMPTY", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GAL = new NavigationSystem(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GLO = new NavigationSystem(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GPS = new NavigationSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              QZS = new NavigationSystem(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              SBAS = new NavigationSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NavigationSystem NavigationSystem::getNavigationSystem(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_getNavigationSystem_7a3f0073fb66d126], a0.this$));
          }

          ::java::lang::String NavigationSystem::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
          }

          NavigationSystem NavigationSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7a3f0073fb66d126], a0.this$));
          }

          JArray< NavigationSystem > NavigationSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< NavigationSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_a549a38043476475]));
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
          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_NavigationSystem_values(PyTypeObject *type);
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data);
          static PyGetSetDef t_NavigationSystem__fields_[] = {
            DECLARE_GET_FIELD(t_NavigationSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NavigationSystem__methods_[] = {
            DECLARE_METHOD(t_NavigationSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, getNavigationSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, toString, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NavigationSystem)[] = {
            { Py_tp_methods, t_NavigationSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NavigationSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NavigationSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(NavigationSystem, t_NavigationSystem, NavigationSystem);
          PyObject *t_NavigationSystem::wrap_Object(const NavigationSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NavigationSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NavigationSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(NavigationSystem), &PY_TYPE_DEF(NavigationSystem), module, "NavigationSystem", 0);
          }

          void t_NavigationSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "class_", make_descriptor(NavigationSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "wrapfn_", make_descriptor(t_NavigationSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(NavigationSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "BDS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "EMPTY", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::EMPTY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GAL", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GLO", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GLO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GPS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "QZS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::QZS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "SBAS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::SBAS)));
          }

          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NavigationSystem::initializeClass, 1)))
              return NULL;
            return t_NavigationSystem::wrap_Object(NavigationSystem(((t_NavigationSystem *) arg)->object.this$));
          }
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NavigationSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::getNavigationSystem(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNavigationSystem", arg);
            return NULL;
          }

          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(NavigationSystem), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::valueOf(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_NavigationSystem_values(PyTypeObject *type)
          {
            JArray< NavigationSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::values());
            return JArray<jobject>(result.this$).wrap(t_NavigationSystem::wrap_jobject);
          }
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data)
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
#include "org/hipparchus/analysis/function/HarmonicOscillator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator::class$ = NULL;
        jmethodID *HarmonicOscillator::mids$ = NULL;
        bool HarmonicOscillator::live$ = false;

        jclass HarmonicOscillator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator::HarmonicOscillator(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble HarmonicOscillator::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative HarmonicOscillator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator)[] = {
          { Py_tp_methods, t_HarmonicOscillator__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator, t_HarmonicOscillator, HarmonicOscillator);

        void t_HarmonicOscillator::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator), &PY_TYPE_DEF(HarmonicOscillator), module, "HarmonicOscillator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "Parametric", make_descriptor(&PY_TYPE_DEF(HarmonicOscillator$Parametric)));
        }

        void t_HarmonicOscillator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "class_", make_descriptor(HarmonicOscillator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "wrapfn_", make_descriptor(t_HarmonicOscillator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator::wrap_Object(HarmonicOscillator(((t_HarmonicOscillator *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HarmonicOscillator object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HarmonicOscillator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args)
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
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitude::class$ = NULL;
      jmethodID *FieldAttitude::mids$ = NULL;
      bool FieldAttitude::live$ = false;

      jclass FieldAttitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1bc951f35febb40d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)V");
          mids$[mid_init$_bfc56c8bb2c571c3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_66a409719d3da56b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_8c1049989487e742] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_6f0f05cb4f827357] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/Field;)V");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getOrientation_508aa3ee9876a7be] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_1e54a5caa5199c2e] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_ff5ac73a7b43eddd] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSpin_ff5ac73a7b43eddd] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_0d906c51b1e0b7ab] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_shiftedBy_9b2f89e5c043156c] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_toAttitude_9d85ee1243dd5d25] = env->getMethodID(cls, "toAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_07f6f41a69716d83] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitude::FieldAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1bc951f35febb40d, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bfc56c8bb2c571c3, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::FieldAngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_66a409719d3da56b, a0.this$, a1.this$, a2.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8c1049989487e742, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f0f05cb4f827357, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldAttitude::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      ::org::orekit::utils::TimeStampedFieldAngularCoordinates FieldAttitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_508aa3ee9876a7be]));
      }

      ::org::orekit::frames::Frame FieldAttitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_2c51111cc6894ba1]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAttitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_1e54a5caa5199c2e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSpin_ff5ac73a7b43eddd]));
      }

      FieldAttitude FieldAttitude::shiftedBy(jdouble a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_0d906c51b1e0b7ab], a0));
      }

      FieldAttitude FieldAttitude::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_9b2f89e5c043156c], a0.this$));
      }

      ::org::orekit::attitudes::Attitude FieldAttitude::toAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_toAttitude_9d85ee1243dd5d25]));
      }

      FieldAttitude FieldAttitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_07f6f41a69716d83], a0.this$));
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
      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args);
      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args);
      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg);
      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data);
      static PyGetSetDef t_FieldAttitude__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitude, date),
        DECLARE_GET_FIELD(t_FieldAttitude, orientation),
        DECLARE_GET_FIELD(t_FieldAttitude, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitude, rotation),
        DECLARE_GET_FIELD(t_FieldAttitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAttitude, spin),
        DECLARE_GET_FIELD(t_FieldAttitude, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitude__methods_[] = {
        DECLARE_METHOD(t_FieldAttitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, toAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitude)[] = {
        { Py_tp_methods, t_FieldAttitude__methods_ },
        { Py_tp_init, (void *) t_FieldAttitude_init_ },
        { Py_tp_getset, t_FieldAttitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAttitude, t_FieldAttitude, FieldAttitude);
      PyObject *t_FieldAttitude::wrap_Object(const FieldAttitude& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitude::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitude::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitude), &PY_TYPE_DEF(FieldAttitude), module, "FieldAttitude", 0);
      }

      void t_FieldAttitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "class_", make_descriptor(FieldAttitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "wrapfn_", make_descriptor(t_FieldAttitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitude::initializeClass, 1)))
          return NULL;
        return t_FieldAttitude::wrap_Object(FieldAttitude(((t_FieldAttitude *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::FieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            ::org::hipparchus::Field a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkkkkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.toAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FieldAttitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitStepHandler::class$ = NULL;
        jmethodID *PythonOrekitStepHandler::mids$ = NULL;
        bool PythonOrekitStepHandler::live$ = false;

        jclass PythonOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_13c351c10f00bcd7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepHandler::PythonOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonOrekitStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitStepHandler_init_(t_PythonOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitStepHandler_finalize(t_PythonOrekitStepHandler *self);
        static PyObject *t_PythonOrekitStepHandler_pythonExtension(t_PythonOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitStepHandler_get__self(t_PythonOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitStepHandler, t_PythonOrekitStepHandler, PythonOrekitStepHandler);

        void t_PythonOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitStepHandler), &PY_TYPE_DEF(PythonOrekitStepHandler), module, "PythonOrekitStepHandler", 1);
        }

        void t_PythonOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "class_", make_descriptor(PythonOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V", (void *) t_PythonOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitStepHandler::wrap_Object(PythonOrekitStepHandler(((t_PythonOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitStepHandler_init_(t_PythonOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitStepHandler_finalize(t_PythonOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitStepHandler_pythonExtension(t_PythonOrekitStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_OrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::OrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitStepHandler_get__self(t_PythonOrekitStepHandler *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovariance::class$ = NULL;
              jmethodID *AttitudeCovariance::mids$ = NULL;
              bool AttitudeCovariance::live$ = false;

              jclass AttitudeCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2e14852685fa5522] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_2d4bea390f44a6ac] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/DiagonalMatrix;");
                  mids$[mid_getType_49fb04b3e4992396] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovariance::AttitudeCovariance(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e14852685fa5522, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::time::AbsoluteDate AttitudeCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
              }

              ::org::hipparchus::linear::DiagonalMatrix AttitudeCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_2d4bea390f44a6ac]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getType_49fb04b3e4992396]));
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
              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data);
              static PyGetSetDef t_AttitudeCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovariance, date),
                DECLARE_GET_FIELD(t_AttitudeCovariance, matrix),
                DECLARE_GET_FIELD(t_AttitudeCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovariance__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovariance)[] = {
                { Py_tp_methods, t_AttitudeCovariance__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovariance_init_ },
                { Py_tp_getset, t_AttitudeCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovariance, t_AttitudeCovariance, AttitudeCovariance);

              void t_AttitudeCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovariance), &PY_TYPE_DEF(AttitudeCovariance), module, "AttitudeCovariance", 0);
              }

              void t_AttitudeCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "class_", make_descriptor(AttitudeCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "wrapfn_", make_descriptor(t_AttitudeCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovariance::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovariance::wrap_Object(AttitudeCovariance(((t_AttitudeCovariance *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                JArray< ::java::lang::String > a2((jobject) NULL);
                jint a3;
                AttitudeCovariance object((jobject) NULL);

                if (!parseArgs(args, "Kk[sI", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = AttitudeCovariance(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self)
              {
                ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data)
              {
                ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
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
#include "org/hipparchus/stat/inference/InferenceTestUtils.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Collection.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *InferenceTestUtils::class$ = NULL;
        jmethodID *InferenceTestUtils::mids$ = NULL;
        bool InferenceTestUtils::live$ = false;

        jclass InferenceTestUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/InferenceTestUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_approximateP_3ea86aad626e7047] = env->getStaticMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_chiSquare_54e0c9e47c29aca2] = env->getStaticMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_5da72ec1f5d4a740] = env->getStaticMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_f69626ae7ca2489a] = env->getStaticMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_54e0c9e47c29aca2] = env->getStaticMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_5da72ec1f5d4a740] = env->getStaticMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_446489047f3f1b4f] = env->getStaticMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_337fdba983c67932] = env->getStaticMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_f69626ae7ca2489a] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_05bd0745ca7cc56a] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_exactP_66797b2e6bbebeee] = env->getStaticMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_g_5da72ec1f5d4a740] = env->getStaticMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_f69626ae7ca2489a] = env->getStaticMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_5da72ec1f5d4a740] = env->getStaticMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_337fdba983c67932] = env->getStaticMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_f69626ae7ca2489a] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_05bd0745ca7cc56a] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_5da72ec1f5d4a740] = env->getStaticMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_homoscedasticT_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_3aa35fce42f529d9] = env->getStaticMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_3aa35fce42f529d9] = env->getStaticMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_899e11e2ec28e6cd] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_kolmogorovSmirnovStatistic_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_27f681af35b4baa1] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_27f681af35b4baa1] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_0c373dc781edcf2f] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_cc1786ac1add8fe8] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_208417a15884b969] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_oneWayAnovaFValue_b19699bf13064258] = env->getStaticMethodID(cls, "oneWayAnovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaPValue_b19699bf13064258] = env->getStaticMethodID(cls, "oneWayAnovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaTest_9417b0f508298776] = env->getStaticMethodID(cls, "oneWayAnovaTest", "(Ljava/util/Collection;D)Z");
            mids$[mid_pairedT_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_899e11e2ec28e6cd] = env->getStaticMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_rootLogLikelihoodRatio_84bd267915ec3a91] = env->getStaticMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");
            mids$[mid_t_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_e45651f63bcd931a] = env->getStaticMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_172f3ca66813c571] = env->getStaticMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_3aa35fce42f529d9] = env->getStaticMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_3207f9c2ae7271d9] = env->getStaticMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_e45651f63bcd931a] = env->getStaticMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_172f3ca66813c571] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_3aa35fce42f529d9] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_899e11e2ec28e6cd] = env->getStaticMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_a36fee56beaf3c37] = env->getStaticMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_45e6c9d7ca9c7c3d] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_516ad16aed11ab58] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble InferenceTestUtils::approximateP(jdouble a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_approximateP_3ea86aad626e7047], a0, a1, a2);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_54e0c9e47c29aca2], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareDataSetsComparison_f69626ae7ca2489a], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_54e0c9e47c29aca2], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_446489047f3f1b4f], a0.this$, a1);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_337fdba983c67932], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_f69626ae7ca2489a], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_05bd0745ca7cc56a], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::exactP(jdouble a0, jint a1, jint a2, jboolean a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_exactP_66797b2e6bbebeee], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::g(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_g_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gDataSetsComparison_f69626ae7ca2489a], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTest_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTest_337fdba983c67932], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestDataSetsComparison_f69626ae7ca2489a], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTestDataSetsComparison_05bd0745ca7cc56a], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestIntrinsic_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_3aa35fce42f529d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_3aa35fce42f529d9], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_homoscedasticTTest_899e11e2ec28e6cd], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_27f681af35b4baa1], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_27f681af35b4baa1], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_0c373dc781edcf2f], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_cc1786ac1add8fe8], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_kolmogorovSmirnovTest_208417a15884b969], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::oneWayAnovaFValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaFValue_b19699bf13064258], a0.this$);
        }

        jdouble InferenceTestUtils::oneWayAnovaPValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaPValue_b19699bf13064258], a0.this$);
        }

        jboolean InferenceTestUtils::oneWayAnovaTest(const ::java::util::Collection & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_oneWayAnovaTest_9417b0f508298776], a0.this$, a1);
        }

        jdouble InferenceTestUtils::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedT_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedTTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_pairedTTest_899e11e2ec28e6cd], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_rootLogLikelihoodRatio_84bd267915ec3a91], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_e45651f63bcd931a], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_172f3ca66813c571], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_3aa35fce42f529d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_e45651f63bcd931a], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_172f3ca66813c571], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_3aa35fce42f529d9], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_899e11e2ec28e6cd], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_a36fee56beaf3c37], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_45e6c9d7ca9c7c3d], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_516ad16aed11ab58], a0.this$, a1.this$, a2);
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
        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_InferenceTestUtils__methods_[] = {
          DECLARE_METHOD(t_InferenceTestUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, approximateP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquare, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, exactP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, g, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestIntrinsic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovStatistic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaFValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaPValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, rootLogLikelihoodRatio, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, t, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, tTest, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InferenceTestUtils)[] = {
          { Py_tp_methods, t_InferenceTestUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InferenceTestUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InferenceTestUtils, t_InferenceTestUtils, InferenceTestUtils);

        void t_InferenceTestUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(InferenceTestUtils), &PY_TYPE_DEF(InferenceTestUtils), module, "InferenceTestUtils", 0);
        }

        void t_InferenceTestUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "class_", make_descriptor(InferenceTestUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "wrapfn_", make_descriptor(t_InferenceTestUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InferenceTestUtils::initializeClass, 1)))
            return NULL;
          return t_InferenceTestUtils::wrap_Object(InferenceTestUtils(((t_InferenceTestUtils *) arg)->object.this$));
        }
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InferenceTestUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "approximateP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "exactP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "g", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
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
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaFValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaPValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaPValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "pairedT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1));
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
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "rootLogLikelihoodRatio", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "t", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
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
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
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
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
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
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
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
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistory::class$ = NULL;
              jmethodID *OrbitManeuverHistory::mids$ = NULL;
              bool OrbitManeuverHistory::live$ = false;

              jclass OrbitManeuverHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c0fd51ac6991aec1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getManeuvers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_d26c66d71d87c322] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistory::OrbitManeuverHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0fd51ac6991aec1, a0.this$, a1.this$)) {}

              ::java::util::List OrbitManeuverHistory::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata OrbitManeuverHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_d26c66d71d87c322]));
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
              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data);
              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, maneuvers),
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistory)[] = {
                { Py_tp_methods, t_OrbitManeuverHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistory_init_ },
                { Py_tp_getset, t_OrbitManeuverHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistory, t_OrbitManeuverHistory, OrbitManeuverHistory);

              void t_OrbitManeuverHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistory), &PY_TYPE_DEF(OrbitManeuverHistory), module, "OrbitManeuverHistory", 0);
              }

              void t_OrbitManeuverHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "class_", make_descriptor(OrbitManeuverHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "wrapfn_", make_descriptor(t_OrbitManeuverHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistory::wrap_Object(OrbitManeuverHistory(((t_OrbitManeuverHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitManeuverHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitManeuverHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuver));
              }

              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Transition::class$ = NULL;
      jmethodID *TimeSpanMap$Transition::mids$ = NULL;
      bool TimeSpanMap$Transition::live$ = false;

      jclass TimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAfter_541690f9ee81d3ad] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_541690f9ee81d3ad] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSpanAfter_5290b219f9ebfd63] = env->getMethodID(cls, "getSpanAfter", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpanBefore_5290b219f9ebfd63] = env->getMethodID(cls, "getSpanBefore", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_next_c754c29f2c04a95a] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_previous_c754c29f2c04a95a] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Transition;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_541690f9ee81d3ad]));
      }

      ::java::lang::Object TimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_541690f9ee81d3ad]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanAfter() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanAfter_5290b219f9ebfd63]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanBefore() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanBefore_5290b219f9ebfd63]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::next() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_next_c754c29f2c04a95a]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::previous() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_previous_c754c29f2c04a95a]));
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
      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanAfter),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanBefore),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_TimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Transition__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Transition *)) get_generic_next< t_TimeSpanMap$Transition,t_TimeSpanMap$Transition,TimeSpanMap$Transition >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Transition, t_TimeSpanMap$Transition, TimeSpanMap$Transition);
      PyObject *t_TimeSpanMap$Transition::wrap_Object(const TimeSpanMap$Transition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Transition), &PY_TYPE_DEF(TimeSpanMap$Transition), module, "TimeSpanMap$Transition", 0);
      }

      void t_TimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "class_", make_descriptor(TimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "wrapfn_", make_descriptor(t_TimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Transition::wrap_Object(TimeSpanMap$Transition(((t_TimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/WelzlEncloser.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
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
            mids$[mid_init$_c7220a52787016bf] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/enclosing/SupportBallGenerator;)V");
            mids$[mid_enclose_11758fc9a7169c2c] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
            mids$[mid_selectFarthest_882cf829bb92c726] = env->getMethodID(cls, "selectFarthest", "(Ljava/lang/Iterable;Lorg/hipparchus/geometry/enclosing/EnclosingBall;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WelzlEncloser::WelzlEncloser(jdouble a0, const ::org::hipparchus::geometry::enclosing::SupportBallGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7220a52787016bf, a0, a1.this$)) {}

        ::org::hipparchus::geometry::enclosing::EnclosingBall WelzlEncloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_11758fc9a7169c2c], a0.this$));
        }

        ::org::hipparchus::geometry::Point WelzlEncloser::selectFarthest(const ::java::lang::Iterable & a0, const ::org::hipparchus::geometry::enclosing::EnclosingBall & a1) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_selectFarthest_882cf829bb92c726], a0.this$, a1.this$));
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
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *DateBasedManeuverTriggers::class$ = NULL;
          jmethodID *DateBasedManeuverTriggers::mids$ = NULL;
          bool DateBasedManeuverTriggers::live$ = false;
          ::java::lang::String *DateBasedManeuverTriggers::DEFAULT_NAME = NULL;

          jclass DateBasedManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3dd4638451e09a7f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_init$_f707b8d915bcbfb2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_getDuration_b74f83833fdad017] = env->getMethodID(cls, "getDuration", "()D");
              mids$[mid_getEndDate_c325492395d89b24] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStartDate_c325492395d89b24] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_convertIntervalDetector_600bd35d7400e841] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_3dd4638451e09a7f, a0.this$, a1)) {}

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_f707b8d915bcbfb2, a0.this$, a1.this$, a2)) {}

          jdouble DateBasedManeuverTriggers::getDuration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDuration_b74f83833fdad017]);
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_c325492395d89b24]));
          }

          ::java::lang::String DateBasedManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          ::java::util::List DateBasedManeuverTriggers::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_c325492395d89b24]));
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
          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args);
          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data);
          static PyGetSetDef t_DateBasedManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, duration),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, endDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, name),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parametersDrivers),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, startDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DateBasedManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_DateBasedManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, of_, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getDuration, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getName, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DateBasedManeuverTriggers)[] = {
            { Py_tp_methods, t_DateBasedManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_DateBasedManeuverTriggers_init_ },
            { Py_tp_getset, t_DateBasedManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DateBasedManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(DateBasedManeuverTriggers, t_DateBasedManeuverTriggers, DateBasedManeuverTriggers);
          PyObject *t_DateBasedManeuverTriggers::wrap_Object(const DateBasedManeuverTriggers& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DateBasedManeuverTriggers::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DateBasedManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(DateBasedManeuverTriggers), &PY_TYPE_DEF(DateBasedManeuverTriggers), module, "DateBasedManeuverTriggers", 0);
          }

          void t_DateBasedManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "class_", make_descriptor(DateBasedManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "wrapfn_", make_descriptor(t_DateBasedManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            env->getClass(DateBasedManeuverTriggers::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "DEFAULT_NAME", make_descriptor(j2p(*DateBasedManeuverTriggers::DEFAULT_NAME)));
          }

          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DateBasedManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_DateBasedManeuverTriggers::wrap_Object(DateBasedManeuverTriggers(((t_DateBasedManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DateBasedManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble a1;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
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

          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDuration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getName", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDuration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EclipticProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EclipticProvider::class$ = NULL;
      jmethodID *EclipticProvider::mids$ = NULL;
      bool EclipticProvider::live$ = false;

      jclass EclipticProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EclipticProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3541ec887ebcb3e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;)V");
          mids$[mid_init$_67387863597a31ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3541ec887ebcb3e4, a0.this$)) {}

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67387863597a31ab, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Transform EclipticProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform EclipticProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_7a8ca6856fe3fc9e], a0.this$));
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
      static PyObject *t_EclipticProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EclipticProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EclipticProvider_init_(t_EclipticProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EclipticProvider_getTransform(t_EclipticProvider *self, PyObject *args);

      static PyMethodDef t_EclipticProvider__methods_[] = {
        DECLARE_METHOD(t_EclipticProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EclipticProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EclipticProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EclipticProvider)[] = {
        { Py_tp_methods, t_EclipticProvider__methods_ },
        { Py_tp_init, (void *) t_EclipticProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EclipticProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EclipticProvider, t_EclipticProvider, EclipticProvider);

      void t_EclipticProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EclipticProvider), &PY_TYPE_DEF(EclipticProvider), module, "EclipticProvider", 0);
      }

      void t_EclipticProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "class_", make_descriptor(EclipticProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "wrapfn_", make_descriptor(t_EclipticProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EclipticProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EclipticProvider::initializeClass, 1)))
          return NULL;
        return t_EclipticProvider::wrap_Object(EclipticProvider(((t_EclipticProvider *) arg)->object.this$));
      }
      static PyObject *t_EclipticProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EclipticProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EclipticProvider_init_(t_EclipticProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            EclipticProvider object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              INT_CALL(object = EclipticProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            EclipticProvider object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              INT_CALL(object = EclipticProvider(a0, a1));
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

      static PyObject *t_EclipticProvider_getTransform(t_EclipticProvider *self, PyObject *args)
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
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AdaptableInterval::class$ = NULL;
        jmethodID *AdaptableInterval::mids$ = NULL;
        bool AdaptableInterval::live$ = false;

        jclass AdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_038ef328b98483a2] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_038ef328b98483a2], a0.this$);
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
        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg);

        static PyMethodDef t_AdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_AdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptableInterval)[] = {
          { Py_tp_methods, t_AdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdaptableInterval, t_AdaptableInterval, AdaptableInterval);

        void t_AdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptableInterval), &PY_TYPE_DEF(AdaptableInterval), module, "AdaptableInterval", 0);
        }

        void t_AdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "class_", make_descriptor(AdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "wrapfn_", make_descriptor(t_AdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_AdaptableInterval::wrap_Object(AdaptableInterval(((t_AdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PV::class$ = NULL;
        jmethodID *PV::mids$ = NULL;
        bool PV::live$ = false;
        ::java::lang::String *PV::MEASUREMENT_TYPE = NULL;

        jclass PV::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PV");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9ef35e383d66c380] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_c9c19463d1055bc5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_5c6acf1bcac7f73f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_90a93226d0ab00d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[D[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_ed865644d6626b16] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_3b7b373db8e7887f] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_3b7b373db8e7887f] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocity_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_9ef35e383d66c380, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_c9c19463d1055bc5, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_5c6acf1bcac7f73f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_90a93226d0ab00d5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_ed865644d6626b16, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        JArray< JArray< jdouble > > PV::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_3b7b373db8e7887f]));
        }

        JArray< JArray< jdouble > > PV::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_3b7b373db8e7887f]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_8b724f8b4fdad1a2]));
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
        static PyObject *t_PV_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PV_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PV_of_(t_PV *self, PyObject *args);
        static int t_PV_init_(t_PV *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PV_getCorrelationCoefficientsMatrix(t_PV *self);
        static PyObject *t_PV_getCovarianceMatrix(t_PV *self);
        static PyObject *t_PV_getPosition(t_PV *self);
        static PyObject *t_PV_getVelocity(t_PV *self);
        static PyObject *t_PV_get__correlationCoefficientsMatrix(t_PV *self, void *data);
        static PyObject *t_PV_get__covarianceMatrix(t_PV *self, void *data);
        static PyObject *t_PV_get__position(t_PV *self, void *data);
        static PyObject *t_PV_get__velocity(t_PV *self, void *data);
        static PyObject *t_PV_get__parameters_(t_PV *self, void *data);
        static PyGetSetDef t_PV__fields_[] = {
          DECLARE_GET_FIELD(t_PV, correlationCoefficientsMatrix),
          DECLARE_GET_FIELD(t_PV, covarianceMatrix),
          DECLARE_GET_FIELD(t_PV, position),
          DECLARE_GET_FIELD(t_PV, velocity),
          DECLARE_GET_FIELD(t_PV, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PV__methods_[] = {
          DECLARE_METHOD(t_PV, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PV, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PV, of_, METH_VARARGS),
          DECLARE_METHOD(t_PV, getCorrelationCoefficientsMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PV, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PV, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_PV, getVelocity, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PV)[] = {
          { Py_tp_methods, t_PV__methods_ },
          { Py_tp_init, (void *) t_PV_init_ },
          { Py_tp_getset, t_PV__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PV)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PV, t_PV, PV);
        PyObject *t_PV::wrap_Object(const PV& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PV::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PV *self = (t_PV *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PV::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PV::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PV *self = (t_PV *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PV::install(PyObject *module)
        {
          installType(&PY_TYPE(PV), &PY_TYPE_DEF(PV), module, "PV", 0);
        }

        void t_PV::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "class_", make_descriptor(PV::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "wrapfn_", make_descriptor(t_PV::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "boxfn_", make_descriptor(boxObject));
          env->getClass(PV::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "MEASUREMENT_TYPE", make_descriptor(j2p(*PV::MEASUREMENT_TYPE)));
        }

        static PyObject *t_PV_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PV::initializeClass, 1)))
            return NULL;
          return t_PV::wrap_Object(PV(((t_PV *) arg)->object.this$));
        }
        static PyObject *t_PV_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PV::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PV_of_(t_PV *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PV_init_(t_PV *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< JArray< jdouble > > a3((jobject) NULL);
              jdouble a4;
              ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[D[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< JArray< jdouble > > a3((jobject) NULL);
              JArray< JArray< jdouble > > a4((jobject) NULL);
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[[D[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkkDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
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

        static PyObject *t_PV_getCorrelationCoefficientsMatrix(t_PV *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PV_getCovarianceMatrix(t_PV *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PV_getPosition(t_PV *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_PV_getVelocity(t_PV *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }
        static PyObject *t_PV_get__parameters_(t_PV *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PV_get__correlationCoefficientsMatrix(t_PV *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PV_get__covarianceMatrix(t_PV *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PV_get__position(t_PV *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_PV_get__velocity(t_PV *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/CholeskyDecomposition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *CholeskyDecomposition::class$ = NULL;
      jmethodID *CholeskyDecomposition::mids$ = NULL;
      bool CholeskyDecomposition::live$ = false;
      jdouble CholeskyDecomposition::DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = (jdouble) 0;
      jdouble CholeskyDecomposition::DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = (jdouble) 0;

      jclass CholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/CholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_38031a98bff21122] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DD)V");
          mids$[mid_getDeterminant_b74f83833fdad017] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_f77d745f2128c391] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_f77d745f2128c391] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_5823fb909376de2c] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD");
          DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_38031a98bff21122, a0.this$, a1, a2)) {}

      jdouble CholeskyDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_b74f83833fdad017]);
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_5823fb909376de2c]));
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
      static PyObject *t_CholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CholeskyDecomposition_init_(t_CholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CholeskyDecomposition_getDeterminant(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getL(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getLT(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getSolver(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_get__determinant(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__l(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__lT(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__solver(t_CholeskyDecomposition *self, void *data);
      static PyGetSetDef t_CholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_CholeskyDecomposition, determinant),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, l),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, lT),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_CholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getLT, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CholeskyDecomposition)[] = {
        { Py_tp_methods, t_CholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_CholeskyDecomposition_init_ },
        { Py_tp_getset, t_CholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CholeskyDecomposition, t_CholeskyDecomposition, CholeskyDecomposition);

      void t_CholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(CholeskyDecomposition), &PY_TYPE_DEF(CholeskyDecomposition), module, "CholeskyDecomposition", 0);
      }

      void t_CholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "class_", make_descriptor(CholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "wrapfn_", make_descriptor(t_CholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(CholeskyDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD", make_descriptor(CholeskyDecomposition::DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD", make_descriptor(CholeskyDecomposition::DEFAULT_RELATIVE_SYMMETRY_THRESHOLD));
      }

      static PyObject *t_CholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_CholeskyDecomposition::wrap_Object(CholeskyDecomposition(((t_CholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_CholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CholeskyDecomposition_init_(t_CholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            CholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = CholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            CholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CholeskyDecomposition(a0, a1, a2));
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

      static PyObject *t_CholeskyDecomposition_getDeterminant(t_CholeskyDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CholeskyDecomposition_getL(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_getLT(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_getSolver(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_get__determinant(t_CholeskyDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CholeskyDecomposition_get__l(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_CholeskyDecomposition_get__lT(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_CholeskyDecomposition_get__solver(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/linear/Relationship.h"
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
            mids$[mid_init$_2aeb1c1abbfab740] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_ac4d203849d954ad] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_c768f6b19d2aa1d9] = env->getMethodID(cls, "<init>", "([DDLorg/hipparchus/optim/linear/Relationship;[DD)V");
            mids$[mid_init$_3a15a6c1a7071f17] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;DLorg/hipparchus/optim/linear/Relationship;Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_3a10cc75bd070d84] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getRelationship_8ee3b6cbb19ddabb] = env->getMethodID(cls, "getRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2aeb1c1abbfab740, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ac4d203849d954ad, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const JArray< jdouble > & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c768f6b19d2aa1d9, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a15a6c1a7071f17, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        jboolean LinearConstraint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearConstraint::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_3a10cc75bd070d84]));
        }

        ::org::hipparchus::optim::linear::Relationship LinearConstraint::getRelationship() const
        {
          return ::org::hipparchus::optim::linear::Relationship(env->callObjectMethod(this$, mids$[mid_getRelationship_8ee3b6cbb19ddabb]));
        }

        jdouble LinearConstraint::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
        }

        jint LinearConstraint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *EarthOrientationParameterMessage::class$ = NULL;
          jmethodID *EarthOrientationParameterMessage::mids$ = NULL;
          bool EarthOrientationParameterMessage::live$ = false;

          jclass EarthOrientationParameterMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/EarthOrientationParameterMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2f7855eb8fb85f32] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getDut1_b74f83833fdad017] = env->getMethodID(cls, "getDut1", "()D");
              mids$[mid_getDut1Dot_b74f83833fdad017] = env->getMethodID(cls, "getDut1Dot", "()D");
              mids$[mid_getDut1DotDot_b74f83833fdad017] = env->getMethodID(cls, "getDut1DotDot", "()D");
              mids$[mid_getReferenceEpoch_c325492395d89b24] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTransmissionTime_b74f83833fdad017] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getXp_b74f83833fdad017] = env->getMethodID(cls, "getXp", "()D");
              mids$[mid_getXpDot_b74f83833fdad017] = env->getMethodID(cls, "getXpDot", "()D");
              mids$[mid_getXpDotDot_b74f83833fdad017] = env->getMethodID(cls, "getXpDotDot", "()D");
              mids$[mid_getYp_b74f83833fdad017] = env->getMethodID(cls, "getYp", "()D");
              mids$[mid_getYpDot_b74f83833fdad017] = env->getMethodID(cls, "getYpDot", "()D");
              mids$[mid_getYpDotDot_b74f83833fdad017] = env->getMethodID(cls, "getYpDotDot", "()D");
              mids$[mid_setDut1_8ba9fe7a847cecad] = env->getMethodID(cls, "setDut1", "(D)V");
              mids$[mid_setDut1Dot_8ba9fe7a847cecad] = env->getMethodID(cls, "setDut1Dot", "(D)V");
              mids$[mid_setDut1DotDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setDut1DotDot", "(D)V");
              mids$[mid_setReferenceEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTransmissionTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setXp_8ba9fe7a847cecad] = env->getMethodID(cls, "setXp", "(D)V");
              mids$[mid_setXpDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setXpDot", "(D)V");
              mids$[mid_setXpDotDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setXpDotDot", "(D)V");
              mids$[mid_setYp_8ba9fe7a847cecad] = env->getMethodID(cls, "setYp", "(D)V");
              mids$[mid_setYpDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setYpDot", "(D)V");
              mids$[mid_setYpDotDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setYpDotDot", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EarthOrientationParameterMessage::EarthOrientationParameterMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_2f7855eb8fb85f32, a0.this$, a1, a2.this$)) {}

          jdouble EarthOrientationParameterMessage::getDut1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1_b74f83833fdad017]);
          }

          jdouble EarthOrientationParameterMessage::getDut1Dot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1Dot_b74f83833fdad017]);
          }

          jdouble EarthOrientationParameterMessage::getDut1DotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1DotDot_b74f83833fdad017]);
          }

          ::org::orekit::time::AbsoluteDate EarthOrientationParameterMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_c325492395d89b24]));
          }

          jdouble EarthOrientationParameterMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_b74f83833fdad017]);
          }

          jdouble EarthOrientationParameterMessage::getXp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXp_b74f83833fdad017]);
          }

          jdouble EarthOrientationParameterMessage::getXpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDot_b74f83833fdad017]);
          }

          jdouble EarthOrientationParameterMessage::getXpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDotDot_b74f83833fdad017]);
          }

          jdouble EarthOrientationParameterMessage::getYp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYp_b74f83833fdad017]);
          }

          jdouble EarthOrientationParameterMessage::getYpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDot_b74f83833fdad017]);
          }

          jdouble EarthOrientationParameterMessage::getYpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDotDot_b74f83833fdad017]);
          }

          void EarthOrientationParameterMessage::setDut1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setDut1Dot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1Dot_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setDut1DotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1DotDot_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_02135a6ef25adb4b], a0.this$);
          }

          void EarthOrientationParameterMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setXp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXp_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setXpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDot_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setXpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDotDot_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setYp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYp_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setYpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDot_8ba9fe7a847cecad], a0);
          }

          void EarthOrientationParameterMessage::setYpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDotDot_8ba9fe7a847cecad], a0);
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
        namespace navigation {
          static PyObject *t_EarthOrientationParameterMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EarthOrientationParameterMessage_init_(t_EarthOrientationParameterMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EarthOrientationParameterMessage_getDut1(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getDut1Dot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getDut1DotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getReferenceEpoch(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getTransmissionTime(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXp(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXpDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXpDotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYp(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYpDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYpDotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_setDut1(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setDut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setDut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setReferenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setTransmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXp(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXpDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYp(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYpDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1Dot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1DotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__referenceEpoch(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__referenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__transmissionTime(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__transmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xp(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xpDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xpDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xpDotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__yp(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__yp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__ypDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__ypDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__ypDotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__ypDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_EarthOrientationParameterMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1Dot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1DotDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xp),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xpDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xpDotDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, yp),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, ypDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, ypDotDot),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EarthOrientationParameterMessage__methods_[] = {
            DECLARE_METHOD(t_EarthOrientationParameterMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1Dot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1DotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXp, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXpDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXpDotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYp, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYpDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYpDotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1Dot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1DotDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXp, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXpDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXpDotDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYp, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYpDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYpDotDot, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EarthOrientationParameterMessage)[] = {
            { Py_tp_methods, t_EarthOrientationParameterMessage__methods_ },
            { Py_tp_init, (void *) t_EarthOrientationParameterMessage_init_ },
            { Py_tp_getset, t_EarthOrientationParameterMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EarthOrientationParameterMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(EarthOrientationParameterMessage, t_EarthOrientationParameterMessage, EarthOrientationParameterMessage);

          void t_EarthOrientationParameterMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EarthOrientationParameterMessage), &PY_TYPE_DEF(EarthOrientationParameterMessage), module, "EarthOrientationParameterMessage", 0);
          }

          void t_EarthOrientationParameterMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "class_", make_descriptor(EarthOrientationParameterMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "wrapfn_", make_descriptor(t_EarthOrientationParameterMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EarthOrientationParameterMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EarthOrientationParameterMessage::initializeClass, 1)))
              return NULL;
            return t_EarthOrientationParameterMessage::wrap_Object(EarthOrientationParameterMessage(((t_EarthOrientationParameterMessage *) arg)->object.this$));
          }
          static PyObject *t_EarthOrientationParameterMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EarthOrientationParameterMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EarthOrientationParameterMessage_init_(t_EarthOrientationParameterMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            EarthOrientationParameterMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = EarthOrientationParameterMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1Dot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1Dot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1DotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1DotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getReferenceEpoch(t_EarthOrientationParameterMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getTransmissionTime(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXp(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXp());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXpDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXpDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXpDotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXpDotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYp(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYp());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYpDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYpDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYpDotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYpDotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1Dot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1Dot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1DotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1DotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setReferenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceEpoch", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setTransmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setTransmissionTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXp(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXp(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXp", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXpDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXpDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXpDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXpDotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXpDotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYp(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYp(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYp", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYpDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYpDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYpDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYpDotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYpDotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1Dot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1Dot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1Dot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1Dot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1DotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1DotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1DotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1DotDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__referenceEpoch(t_EarthOrientationParameterMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_EarthOrientationParameterMessage_set__referenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceEpoch", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__transmissionTime(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__transmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setTransmissionTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xp(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXp());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXp(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xp", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xpDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXpDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xpDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXpDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xpDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xpDotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXpDotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXpDotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xpDotDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__yp(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYp());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__yp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYp(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "yp", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__ypDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYpDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__ypDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYpDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ypDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__ypDotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYpDotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__ypDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYpDotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ypDotDot", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AberrationModifier.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AberrationModifier::class$ = NULL;
          jmethodID *AberrationModifier::mids$ = NULL;
          bool AberrationModifier::live$ = false;

          jclass AberrationModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AberrationModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fieldNaturalToProper_3d83526a19e21371] = env->getStaticMethodID(cls, "fieldNaturalToProper", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_fieldProperToNatural_3d83526a19e21371] = env->getStaticMethodID(cls, "fieldProperToNatural", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_naturalToProper_901c3791391f487f] = env->getStaticMethodID(cls, "naturalToProper", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");
              mids$[mid_properToNatural_901c3791391f487f] = env->getStaticMethodID(cls, "properToNatural", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AberrationModifier::AberrationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldNaturalToProper_3d83526a19e21371], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldProperToNatural_3d83526a19e21371], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List AberrationModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void AberrationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void AberrationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
          }

          JArray< jdouble > AberrationModifier::naturalToProper(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_naturalToProper_901c3791391f487f], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< jdouble > AberrationModifier::properToNatural(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_properToNatural_901c3791391f487f], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self);
          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data);
          static PyGetSetDef t_AberrationModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AberrationModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AberrationModifier__methods_[] = {
            DECLARE_METHOD(t_AberrationModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldNaturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldProperToNatural, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AberrationModifier, modify, METH_O),
            DECLARE_METHOD(t_AberrationModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_AberrationModifier, naturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, properToNatural, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AberrationModifier)[] = {
            { Py_tp_methods, t_AberrationModifier__methods_ },
            { Py_tp_init, (void *) t_AberrationModifier_init_ },
            { Py_tp_getset, t_AberrationModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AberrationModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AberrationModifier, t_AberrationModifier, AberrationModifier);

          void t_AberrationModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AberrationModifier), &PY_TYPE_DEF(AberrationModifier), module, "AberrationModifier", 0);
          }

          void t_AberrationModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "class_", make_descriptor(AberrationModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "wrapfn_", make_descriptor(t_AberrationModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AberrationModifier::initializeClass, 1)))
              return NULL;
            return t_AberrationModifier::wrap_Object(AberrationModifier(((t_AberrationModifier *) arg)->object.this$));
          }
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AberrationModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds)
          {
            AberrationModifier object((jobject) NULL);

            INT_CALL(object = AberrationModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args)
          {
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
            ::org::orekit::frames::FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

            if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldNaturalToProper(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            }

            PyErr_SetArgsError(type, "fieldNaturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args)
          {
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
            ::org::orekit::frames::FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

            if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldProperToNatural(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            }

            PyErr_SetArgsError(type, "fieldProperToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg)
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

          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg)
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

          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::naturalToProper(a0, a1, a2, a3));
              return result.wrap();
            }

            PyErr_SetArgsError(type, "naturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::properToNatural(a0, a1, a2, a3));
              return result.wrap();
            }

            PyErr_SetArgsError(type, "properToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data)
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
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *CartesianDerivativesFilter::class$ = NULL;
      jmethodID *CartesianDerivativesFilter::mids$ = NULL;
      bool CartesianDerivativesFilter::live$ = false;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_P = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PV = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PVA = NULL;

      jclass CartesianDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/CartesianDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_35016476cce1f80e] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_68447a1d612d4fba] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_values_d022290f2100b05f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/CartesianDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_P = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_P", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PV = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PV", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PVA = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PVA", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_35016476cce1f80e], a0));
      }

      jint CartesianDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_55546ef6a647f39b]);
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_68447a1d612d4fba], a0.this$));
      }

      JArray< CartesianDerivativesFilter > CartesianDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< CartesianDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_d022290f2100b05f]));
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
      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self);
      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data);
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data);
      static PyGetSetDef t_CartesianDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_CartesianDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianDerivativesFilter)[] = {
        { Py_tp_methods, t_CartesianDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CartesianDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(CartesianDerivativesFilter, t_CartesianDerivativesFilter, CartesianDerivativesFilter);
      PyObject *t_CartesianDerivativesFilter::wrap_Object(const CartesianDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CartesianDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CartesianDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianDerivativesFilter), &PY_TYPE_DEF(CartesianDerivativesFilter), module, "CartesianDerivativesFilter", 0);
      }

      void t_CartesianDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "class_", make_descriptor(CartesianDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "wrapfn_", make_descriptor(t_CartesianDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(CartesianDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_P", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PV", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PV)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PVA", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PVA)));
      }

      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_CartesianDerivativesFilter::wrap_Object(CartesianDerivativesFilter(((t_CartesianDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::getFilter(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::valueOf(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< CartesianDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_CartesianDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxOrder());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider$RawSphericalHarmonics::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider$RawSphericalHarmonics::mids$ = NULL;
          bool RawSphericalHarmonicsProvider$RawSphericalHarmonics::live$ = false;

          jclass RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRawCnm_cad98089d00f8a5b] = env->getMethodID(cls, "getRawCnm", "(II)D");
              mids$[mid_getRawSnm_cad98089d00f8a5b] = env->getMethodID(cls, "getRawSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawCnm_cad98089d00f8a5b], a0, a1);
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawSnm_cad98089d00f8a5b], a0, a1);
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
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawCnm, METH_VARARGS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, RawSphericalHarmonicsProvider$RawSphericalHarmonics);

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), &PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics), module, "RawSphericalHarmonicsProvider$RawSphericalHarmonics", 0);
          }

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "class_", make_descriptor(RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(RawSphericalHarmonicsProvider$RawSphericalHarmonics(((t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawCnm", args);
            return NULL;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmParser::class$ = NULL;
            jmethodID *AdmParser::mids$ = NULL;
            bool AdmParser::live$ = false;

            jclass AdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate AdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_c325492395d89b24]));
            }

            ::java::util::Map AdmParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a]));
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
            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self);
            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data);
            static PyGetSetDef t_AdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_AdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_AdmParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmParser__methods_[] = {
              DECLARE_METHOD(t_AdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_AdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmParser)[] = {
              { Py_tp_methods, t_AdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(AdmParser, t_AdmParser, AdmParser);
            PyObject *t_AdmParser::wrap_Object(const AdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmParser), &PY_TYPE_DEF(AdmParser), module, "AdmParser", 0);
            }

            void t_AdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "class_", make_descriptor(AdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "wrapfn_", make_descriptor(t_AdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmParser::initializeClass, 1)))
                return NULL;
              return t_AdmParser::wrap_Object(AdmParser(((t_AdmParser *) arg)->object.this$));
            }
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args)
            {
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
              }

              return callSuper(PY_TYPE(AdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
            }
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemData::class$ = NULL;
              jmethodID *OemData::mids$ = NULL;
              bool OemData::live$ = false;

              jclass OemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCovarianceMatrix_df1b706a550f4478] = env->getMethodID(cls, "addCovarianceMatrix", "(Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                  mids$[mid_addData_f7cb4011cb2864fe] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Z)Z");
                  mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getEphemeridesDataLines_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemData::OemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              void OemData::addCovarianceMatrix(const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCovarianceMatrix_df1b706a550f4478], a0.this$);
              }

              jboolean OemData::addData(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, jboolean a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_f7cb4011cb2864fe], a0.this$, a1);
              }

              ::org::orekit::utils::CartesianDerivativesFilter OemData::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
              }

              ::java::util::List OemData::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_e62d3bb06d56d7e3]));
              }

              ::java::util::List OemData::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_e62d3bb06d56d7e3]));
              }

              ::java::util::List OemData::getEphemeridesDataLines() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_e62d3bb06d56d7e3]));
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
            namespace oem {
              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg);
              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args);
              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self);
              static PyObject *t_OemData_getCoordinates(t_OemData *self);
              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self);
              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self);
              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data);
              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data);
              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data);
              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data);
              static PyGetSetDef t_OemData__fields_[] = {
                DECLARE_GET_FIELD(t_OemData, availableDerivatives),
                DECLARE_GET_FIELD(t_OemData, coordinates),
                DECLARE_GET_FIELD(t_OemData, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemData, ephemeridesDataLines),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemData__methods_[] = {
                DECLARE_METHOD(t_OemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, addCovarianceMatrix, METH_O),
                DECLARE_METHOD(t_OemData, addData, METH_VARARGS),
                DECLARE_METHOD(t_OemData, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getEphemeridesDataLines, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemData)[] = {
                { Py_tp_methods, t_OemData__methods_ },
                { Py_tp_init, (void *) t_OemData_init_ },
                { Py_tp_getset, t_OemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OemData, t_OemData, OemData);

              void t_OemData::install(PyObject *module)
              {
                installType(&PY_TYPE(OemData), &PY_TYPE_DEF(OemData), module, "OemData", 0);
              }

              void t_OemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "class_", make_descriptor(OemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "wrapfn_", make_descriptor(t_OemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemData::initializeClass, 1)))
                  return NULL;
                return t_OemData::wrap_Object(OemData(((t_OemData *) arg)->object.this$));
              }
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds)
              {
                OemData object((jobject) NULL);

                INT_CALL(object = OemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCovarianceMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCovarianceMatrix", arg);
                return NULL;
              }

              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                jboolean a1;
                jboolean result;

                if (!parseArgs(args, "kZ", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.addData(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", args);
                return NULL;
              }

              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemData_getCoordinates(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemeridesDataLines());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemeridesDataLines());
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
#include "org/hipparchus/geometry/euclidean/threed/SphericalCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphericalCoordinates::class$ = NULL;
          jmethodID *SphericalCoordinates::mids$ = NULL;
          bool SphericalCoordinates::live$ = false;

          jclass SphericalCoordinates::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphericalCoordinates");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1844f891addbac57] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getCartesian_8b724f8b4fdad1a2] = env->getMethodID(cls, "getCartesian", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPhi_b74f83833fdad017] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getR_b74f83833fdad017] = env->getMethodID(cls, "getR", "()D");
              mids$[mid_getTheta_b74f83833fdad017] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_toCartesianGradient_14dee4cb8cc3e959] = env->getMethodID(cls, "toCartesianGradient", "([D)[D");
              mids$[mid_toCartesianHessian_2ab9ee924fc53a1e] = env->getMethodID(cls, "toCartesianHessian", "([[D[D)[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalCoordinates::SphericalCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1844f891addbac57, a0.this$)) {}

          SphericalCoordinates::SphericalCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SphericalCoordinates::getCartesian() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesian_8b724f8b4fdad1a2]));
          }

          jdouble SphericalCoordinates::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_b74f83833fdad017]);
          }

          jdouble SphericalCoordinates::getR() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getR_b74f83833fdad017]);
          }

          jdouble SphericalCoordinates::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_b74f83833fdad017]);
          }

          JArray< jdouble > SphericalCoordinates::toCartesianGradient(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toCartesianGradient_14dee4cb8cc3e959], a0.this$));
          }

          JArray< JArray< jdouble > > SphericalCoordinates::toCartesianHessian(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_toCartesianHessian_2ab9ee924fc53a1e], a0.this$, a1.this$));
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
        namespace threed {
          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg);
          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args);
          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data);
          static PyGetSetDef t_SphericalCoordinates__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalCoordinates, cartesian),
            DECLARE_GET_FIELD(t_SphericalCoordinates, phi),
            DECLARE_GET_FIELD(t_SphericalCoordinates, r),
            DECLARE_GET_FIELD(t_SphericalCoordinates, theta),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalCoordinates__methods_[] = {
            DECLARE_METHOD(t_SphericalCoordinates, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, getCartesian, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getR, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianGradient, METH_O),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianHessian, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalCoordinates)[] = {
            { Py_tp_methods, t_SphericalCoordinates__methods_ },
            { Py_tp_init, (void *) t_SphericalCoordinates_init_ },
            { Py_tp_getset, t_SphericalCoordinates__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalCoordinates)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphericalCoordinates, t_SphericalCoordinates, SphericalCoordinates);

          void t_SphericalCoordinates::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalCoordinates), &PY_TYPE_DEF(SphericalCoordinates), module, "SphericalCoordinates", 0);
          }

          void t_SphericalCoordinates::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "class_", make_descriptor(SphericalCoordinates::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "wrapfn_", make_descriptor(t_SphericalCoordinates::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalCoordinates::initializeClass, 1)))
              return NULL;
            return t_SphericalCoordinates::wrap_Object(SphericalCoordinates(((t_SphericalCoordinates *) arg)->object.this$));
          }
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalCoordinates::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = SphericalCoordinates(a0));
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
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SphericalCoordinates(a0, a1, a2));
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

          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getR());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.toCartesianGradient(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianGradient", arg);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args)
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "[[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toCartesianHessian(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianHessian", args);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getR());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHIJjsPolynomials::class$ = NULL;
            jmethodID *GHIJjsPolynomials::mids$ = NULL;
            bool GHIJjsPolynomials::live$ = false;

            jclass GHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_getGjs_cad98089d00f8a5b] = env->getMethodID(cls, "getGjs", "(II)D");
                mids$[mid_getHjs_cad98089d00f8a5b] = env->getMethodID(cls, "getHjs", "(II)D");
                mids$[mid_getIjs_cad98089d00f8a5b] = env->getMethodID(cls, "getIjs", "(II)D");
                mids$[mid_getJjs_cad98089d00f8a5b] = env->getMethodID(cls, "getJjs", "(II)D");
                mids$[mid_getdGjsdAlpha_cad98089d00f8a5b] = env->getMethodID(cls, "getdGjsdAlpha", "(II)D");
                mids$[mid_getdGjsdBeta_cad98089d00f8a5b] = env->getMethodID(cls, "getdGjsdBeta", "(II)D");
                mids$[mid_getdGjsdh_cad98089d00f8a5b] = env->getMethodID(cls, "getdGjsdh", "(II)D");
                mids$[mid_getdGjsdk_cad98089d00f8a5b] = env->getMethodID(cls, "getdGjsdk", "(II)D");
                mids$[mid_getdHjsdAlpha_cad98089d00f8a5b] = env->getMethodID(cls, "getdHjsdAlpha", "(II)D");
                mids$[mid_getdHjsdBeta_cad98089d00f8a5b] = env->getMethodID(cls, "getdHjsdBeta", "(II)D");
                mids$[mid_getdHjsdh_cad98089d00f8a5b] = env->getMethodID(cls, "getdHjsdh", "(II)D");
                mids$[mid_getdHjsdk_cad98089d00f8a5b] = env->getMethodID(cls, "getdHjsdk", "(II)D");
                mids$[mid_getdIjsdAlpha_cad98089d00f8a5b] = env->getMethodID(cls, "getdIjsdAlpha", "(II)D");
                mids$[mid_getdIjsdBeta_cad98089d00f8a5b] = env->getMethodID(cls, "getdIjsdBeta", "(II)D");
                mids$[mid_getdIjsdh_cad98089d00f8a5b] = env->getMethodID(cls, "getdIjsdh", "(II)D");
                mids$[mid_getdIjsdk_cad98089d00f8a5b] = env->getMethodID(cls, "getdIjsdk", "(II)D");
                mids$[mid_getdJjsdAlpha_cad98089d00f8a5b] = env->getMethodID(cls, "getdJjsdAlpha", "(II)D");
                mids$[mid_getdJjsdBeta_cad98089d00f8a5b] = env->getMethodID(cls, "getdJjsdBeta", "(II)D");
                mids$[mid_getdJjsdh_cad98089d00f8a5b] = env->getMethodID(cls, "getdJjsdh", "(II)D");
                mids$[mid_getdJjsdk_cad98089d00f8a5b] = env->getMethodID(cls, "getdJjsdk", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHIJjsPolynomials::GHIJjsPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

            jdouble GHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGjs_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHjs_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIjs_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getJjs_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdAlpha_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdBeta_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdh_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdk_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdAlpha_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdBeta_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdh_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdk_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdAlpha_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdBeta_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdh_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdk_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdAlpha_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdBeta_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdh_cad98089d00f8a5b], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdk_cad98089d00f8a5b], a0, a1);
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
            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args);

            static PyMethodDef t_GHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHIJjsPolynomials)[] = {
              { Py_tp_methods, t_GHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHIJjsPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHIJjsPolynomials, t_GHIJjsPolynomials, GHIJjsPolynomials);

            void t_GHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHIJjsPolynomials), &PY_TYPE_DEF(GHIJjsPolynomials), module, "GHIJjsPolynomials", 0);
            }

            void t_GHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "class_", make_descriptor(GHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "wrapfn_", make_descriptor(t_GHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHIJjsPolynomials::wrap_Object(GHIJjsPolynomials(((t_GHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
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
#include "org/orekit/attitudes/LofOffset.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffset::class$ = NULL;
      jmethodID *LofOffset::mids$ = NULL;
      bool LofOffset::live$ = false;

      jclass LofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d3d90ff48b30fac5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_a89266640fadbeb9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;DDD)V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_1bc07ea175743b30] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3d90ff48b30fac5, a0.this$, a1.this$)) {}

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a89266640fadbeb9, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_1bc07ea175743b30], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffset_init_(t_LofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffset_getAttitude(t_LofOffset *self, PyObject *args);
      static PyObject *t_LofOffset_getAttitudeRotation(t_LofOffset *self, PyObject *args);

      static PyMethodDef t_LofOffset__methods_[] = {
        DECLARE_METHOD(t_LofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffset, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffset)[] = {
        { Py_tp_methods, t_LofOffset__methods_ },
        { Py_tp_init, (void *) t_LofOffset_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LofOffset, t_LofOffset, LofOffset);

      void t_LofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffset), &PY_TYPE_DEF(LofOffset), module, "LofOffset", 0);
      }

      void t_LofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "class_", make_descriptor(LofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "wrapfn_", make_descriptor(t_LofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffset::initializeClass, 1)))
          return NULL;
        return t_LofOffset::wrap_Object(LofOffset(((t_LofOffset *) arg)->object.this$));
      }
      static PyObject *t_LofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffset_init_(t_LofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            LofOffset object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LofOffset(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            LofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKDDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = LofOffset(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_LofOffset_getAttitude(t_LofOffset *self, PyObject *args)
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

      static PyObject *t_LofOffset_getAttitudeRotation(t_LofOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *PearsonsCorrelation::class$ = NULL;
        jmethodID *PearsonsCorrelation::mids$ = NULL;
        bool PearsonsCorrelation::live$ = false;

        jclass PearsonsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/PearsonsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_e58fef422968212a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/correlation/Covariance;)V");
            mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_e0e047388507c76a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;I)V");
            mids$[mid_computeCorrelationMatrix_2d1b7d41dfd6b278] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_be124f4006dc9f69] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_3207f9c2ae7271d9] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_covarianceToCorrelation_be124f4006dc9f69] = env->getMethodID(cls, "covarianceToCorrelation", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationMatrix_f77d745f2128c391] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationPValues_f77d745f2128c391] = env->getMethodID(cls, "getCorrelationPValues", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationStandardErrors_f77d745f2128c391] = env->getMethodID(cls, "getCorrelationStandardErrors", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PearsonsCorrelation::PearsonsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        PearsonsCorrelation::PearsonsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::stat::correlation::Covariance & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e58fef422968212a, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0e047388507c76a, a0.this$, a1)) {}

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_2d1b7d41dfd6b278], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_be124f4006dc9f69], a0.this$));
        }

        jdouble PearsonsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::covarianceToCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_covarianceToCorrelation_be124f4006dc9f69], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationPValues() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationPValues_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationStandardErrors() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationStandardErrors_f77d745f2128c391]));
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
      namespace correlation {
        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data);
        static PyGetSetDef t_PearsonsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationPValues),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationStandardErrors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PearsonsCorrelation__methods_[] = {
          DECLARE_METHOD(t_PearsonsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, covarianceToCorrelation, METH_O),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationPValues, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationStandardErrors, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PearsonsCorrelation)[] = {
          { Py_tp_methods, t_PearsonsCorrelation__methods_ },
          { Py_tp_init, (void *) t_PearsonsCorrelation_init_ },
          { Py_tp_getset, t_PearsonsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PearsonsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PearsonsCorrelation, t_PearsonsCorrelation, PearsonsCorrelation);

        void t_PearsonsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(PearsonsCorrelation), &PY_TYPE_DEF(PearsonsCorrelation), module, "PearsonsCorrelation", 0);
        }

        void t_PearsonsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "class_", make_descriptor(PearsonsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "wrapfn_", make_descriptor(t_PearsonsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PearsonsCorrelation::initializeClass, 1)))
            return NULL;
          return t_PearsonsCorrelation::wrap_Object(PearsonsCorrelation(((t_PearsonsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PearsonsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PearsonsCorrelation object((jobject) NULL);

              INT_CALL(object = PearsonsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::correlation::Covariance a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::correlation::Covariance::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jint a1;
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = PearsonsCorrelation(a0, a1));
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

        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.covarianceToCorrelation(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "covarianceToCorrelation", arg);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Double.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/util/SortedMap.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldLnsCoefficients::class$ = NULL;
            jmethodID *FieldLnsCoefficients::mids$ = NULL;
            bool FieldLnsCoefficients::live$ = false;

            jclass FieldLnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fe5b6ba414e50d1c] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/CalculusFieldElement;Ljava/util/SortedMap;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getLns_431f825c752f7b4c] = env->getMethodID(cls, "getLns", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdLnsdGamma_431f825c752f7b4c] = env->getMethodID(cls, "getdLnsdGamma", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldLnsCoefficients::FieldLnsCoefficients(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const ::java::util::SortedMap & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe5b6ba414e50d1c, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getLns(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLns_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdLnsdGamma_431f825c752f7b4c], a0, a1));
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
            static PyObject *t_FieldLnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldLnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldLnsCoefficients_of_(t_FieldLnsCoefficients *self, PyObject *args);
            static int t_FieldLnsCoefficients_init_(t_FieldLnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldLnsCoefficients_getLns(t_FieldLnsCoefficients *self, PyObject *args);
            static PyObject *t_FieldLnsCoefficients_getdLnsdGamma(t_FieldLnsCoefficients *self, PyObject *args);
            static PyObject *t_FieldLnsCoefficients_get__parameters_(t_FieldLnsCoefficients *self, void *data);
            static PyGetSetDef t_FieldLnsCoefficients__fields_[] = {
              DECLARE_GET_FIELD(t_FieldLnsCoefficients, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldLnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_FieldLnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldLnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldLnsCoefficients, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldLnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_FieldLnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldLnsCoefficients)[] = {
              { Py_tp_methods, t_FieldLnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_FieldLnsCoefficients_init_ },
              { Py_tp_getset, t_FieldLnsCoefficients__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldLnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldLnsCoefficients, t_FieldLnsCoefficients, FieldLnsCoefficients);
            PyObject *t_FieldLnsCoefficients::wrap_Object(const FieldLnsCoefficients& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldLnsCoefficients::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldLnsCoefficients *self = (t_FieldLnsCoefficients *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldLnsCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldLnsCoefficients::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldLnsCoefficients *self = (t_FieldLnsCoefficients *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldLnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldLnsCoefficients), &PY_TYPE_DEF(FieldLnsCoefficients), module, "FieldLnsCoefficients", 0);
            }

            void t_FieldLnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "class_", make_descriptor(FieldLnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "wrapfn_", make_descriptor(t_FieldLnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldLnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldLnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_FieldLnsCoefficients::wrap_Object(FieldLnsCoefficients(((t_FieldLnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_FieldLnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldLnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldLnsCoefficients_of_(t_FieldLnsCoefficients *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldLnsCoefficients_init_(t_FieldLnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::Field a5((jobject) NULL);
              PyTypeObject **p5;
              FieldLnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::java::util::SortedMap::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldLnsCoefficients(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldLnsCoefficients_getLns(t_FieldLnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_FieldLnsCoefficients_getdLnsdGamma(t_FieldLnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
              return NULL;
            }
            static PyObject *t_FieldLnsCoefficients_get__parameters_(t_FieldLnsCoefficients *self, void *data)
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
#include "org/orekit/forces/empirical/ParametricAcceleration.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *ParametricAcceleration::class$ = NULL;
        jmethodID *ParametricAcceleration::mids$ = NULL;
        bool ParametricAcceleration::live$ = false;

        jclass ParametricAcceleration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/ParametricAcceleration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4c3161fe77d68ecd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_5e38cdb9559e0e6a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c3161fe77d68ecd, a0.this$, a1, a2.this$)) {}

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e38cdb9559e0e6a, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        jboolean ParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::stream::Stream ParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
        }

        ::java::util::stream::Stream ParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
        }

        ::java::util::List ParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        void ParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        static PyObject *t_ParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParametricAcceleration_init_(t_ParametricAcceleration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParametricAcceleration_acceleration(t_ParametricAcceleration *self, PyObject *args);
        static PyObject *t_ParametricAcceleration_dependsOnPositionOnly(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_getEventDetectors(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_getFieldEventDetectors(t_ParametricAcceleration *self, PyObject *arg);
        static PyObject *t_ParametricAcceleration_getParametersDrivers(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_init(t_ParametricAcceleration *self, PyObject *args);
        static PyObject *t_ParametricAcceleration_get__eventDetectors(t_ParametricAcceleration *self, void *data);
        static PyObject *t_ParametricAcceleration_get__parametersDrivers(t_ParametricAcceleration *self, void *data);
        static PyGetSetDef t_ParametricAcceleration__fields_[] = {
          DECLARE_GET_FIELD(t_ParametricAcceleration, eventDetectors),
          DECLARE_GET_FIELD(t_ParametricAcceleration, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParametricAcceleration__methods_[] = {
          DECLARE_METHOD(t_ParametricAcceleration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParametricAcceleration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParametricAcceleration, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ParametricAcceleration, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_ParametricAcceleration, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParametricAcceleration)[] = {
          { Py_tp_methods, t_ParametricAcceleration__methods_ },
          { Py_tp_init, (void *) t_ParametricAcceleration_init_ },
          { Py_tp_getset, t_ParametricAcceleration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParametricAcceleration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ParametricAcceleration, t_ParametricAcceleration, ParametricAcceleration);

        void t_ParametricAcceleration::install(PyObject *module)
        {
          installType(&PY_TYPE(ParametricAcceleration), &PY_TYPE_DEF(ParametricAcceleration), module, "ParametricAcceleration", 0);
        }

        void t_ParametricAcceleration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "class_", make_descriptor(ParametricAcceleration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "wrapfn_", make_descriptor(t_ParametricAcceleration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParametricAcceleration::initializeClass, 1)))
            return NULL;
          return t_ParametricAcceleration::wrap_Object(ParametricAcceleration(((t_ParametricAcceleration *) arg)->object.this$));
        }
        static PyObject *t_ParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParametricAcceleration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParametricAcceleration_init_(t_ParametricAcceleration *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              ParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kZk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              ParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParametricAcceleration(a0, a1, a2));
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

        static PyObject *t_ParametricAcceleration_acceleration(t_ParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_ParametricAcceleration_dependsOnPositionOnly(t_ParametricAcceleration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ParametricAcceleration_getEventDetectors(t_ParametricAcceleration *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_ParametricAcceleration_getFieldEventDetectors(t_ParametricAcceleration *self, PyObject *arg)
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

        static PyObject *t_ParametricAcceleration_getParametersDrivers(t_ParametricAcceleration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ParametricAcceleration_init(t_ParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_ParametricAcceleration_get__eventDetectors(t_ParametricAcceleration *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_ParametricAcceleration_get__parametersDrivers(t_ParametricAcceleration *self, void *data)
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
#include "org/orekit/propagation/events/FieldAltitudeDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAltitudeDetector::class$ = NULL;
        jmethodID *FieldAltitudeDetector::mids$ = NULL;
        bool FieldAltitudeDetector::live$ = false;

        jclass FieldAltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5ec6031e829231e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_2f5de0815fa9837a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_3b841b473efd4d38] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAltitude_81520b552cb3fa26] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBodyShape_95d324082d4f411b] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_d1ec281a05feb29c] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5ec6031e829231e8, a0.this$, a1.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2f5de0815fa9837a, a0.this$, a1.this$, a2.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3b841b473efd4d38, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::getAltitude() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_81520b552cb3fa26]));
        }

        ::org::orekit::bodies::BodyShape FieldAltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_95d324082d4f411b]));
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
        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args);
        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args);
        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data);
        static PyGetSetDef t_FieldAltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAltitudeDetector)[] = {
          { Py_tp_methods, t_FieldAltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAltitudeDetector_init_ },
          { Py_tp_getset, t_FieldAltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldAltitudeDetector, t_FieldAltitudeDetector, FieldAltitudeDetector);
        PyObject *t_FieldAltitudeDetector::wrap_Object(const FieldAltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAltitudeDetector), &PY_TYPE_DEF(FieldAltitudeDetector), module, "FieldAltitudeDetector", 0);
        }

        void t_FieldAltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "class_", make_descriptor(FieldAltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "wrapfn_", make_descriptor(t_FieldAltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAltitudeDetector::wrap_Object(FieldAltitudeDetector(((t_FieldAltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAltitude());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAltitude());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BistaticRangeRateIonosphericDelayModifier::live$ = false;

          jclass BistaticRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c3c7040adbf9e5f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateIonosphericDelayModifier::BistaticRangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_c3c7040adbf9e5f8, a0.this$, a1)) {}

          void BistaticRangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void BistaticRangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeRateIonosphericDelayModifier_init_(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modify(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateIonosphericDelayModifier, t_BistaticRangeRateIonosphericDelayModifier, BistaticRangeRateIonosphericDelayModifier);

          void t_BistaticRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BistaticRangeRateIonosphericDelayModifier), module, "BistaticRangeRateIonosphericDelayModifier", 0);
          }

          void t_BistaticRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "class_", make_descriptor(BistaticRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateIonosphericDelayModifier::wrap_Object(BistaticRangeRateIonosphericDelayModifier(((t_BistaticRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeRateIonosphericDelayModifier_init_(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            BistaticRangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BistaticRangeRateIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modify(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg)
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
#include "java/util/ArrayList.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayList::class$ = NULL;
    jmethodID *ArrayList::mids$ = NULL;
    bool ArrayList::live$ = false;

    jclass ArrayList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_0f5a71e161fd256b] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_801a92d34e44726e] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_2c414c0fcc4406f4] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_ensureCapacity_44ed599e93e8a30c] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_1a3b934d2c285d65] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_b7898c5e94612125] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_b7898c5e94612125] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_d6d68fe3f5974930] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_008647f8b2408e7c] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_1a3b934d2c285d65] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_801a92d34e44726e] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_801a92d34e44726e] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_c616ac8dc1767986] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_2c01874c65d2ef2f] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_fe8f811ebd6e639a] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_39b43a702bd6611c] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_24e2edd6319f4c5a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_70d423ae061f83d5] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_trimToSize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "trimToSize", "()V");
        mids$[mid_removeRange_3313c75e3e16c428] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayList::ArrayList() : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    ArrayList::ArrayList(jint a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    ArrayList::ArrayList(const ::java::util::Collection & a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

    jboolean ArrayList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    void ArrayList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_0f5a71e161fd256b], a0, a1.this$);
    }

    jboolean ArrayList::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_801a92d34e44726e], a0.this$);
    }

    jboolean ArrayList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_2c414c0fcc4406f4], a0, a1.this$);
    }

    void ArrayList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    ::java::lang::Object ArrayList::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean ArrayList::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    void ArrayList::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_44ed599e93e8a30c], a0);
    }

    jboolean ArrayList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object ArrayList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_1a3b934d2c285d65], a0));
    }

    jint ArrayList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint ArrayList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_b7898c5e94612125], a0.this$);
    }

    jboolean ArrayList::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Iterator ArrayList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    jint ArrayList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_b7898c5e94612125], a0.this$);
    }

    ::java::util::ListIterator ArrayList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_d6d68fe3f5974930]));
    }

    ::java::util::ListIterator ArrayList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_008647f8b2408e7c], a0));
    }

    ::java::lang::Object ArrayList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_1a3b934d2c285d65], a0));
    }

    jboolean ArrayList::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean ArrayList::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_801a92d34e44726e], a0.this$);
    }

    jboolean ArrayList::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_801a92d34e44726e], a0.this$);
    }

    ::java::lang::Object ArrayList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_c616ac8dc1767986], a0, a1.this$));
    }

    jint ArrayList::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    void ArrayList::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_2c01874c65d2ef2f], a0.this$);
    }

    ::java::util::Spliterator ArrayList::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_fe8f811ebd6e639a]));
    }

    ::java::util::List ArrayList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_39b43a702bd6611c], a0, a1));
    }

    JArray< ::java::lang::Object > ArrayList::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_24e2edd6319f4c5a]));
    }

    JArray< ::java::lang::Object > ArrayList::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_70d423ae061f83d5], a0.this$));
    }

    void ArrayList::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args);
    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clone(t_ArrayList *self);
    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg);
    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self);
    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data);
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data);
    static PyGetSetDef t_ArrayList__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayList, empty),
      DECLARE_GET_FIELD(t_ArrayList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayList__methods_[] = {
      DECLARE_METHOD(t_ArrayList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayList, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, ensureCapacity, METH_O),
      DECLARE_METHOD(t_ArrayList, equals, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, get, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, set, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, sort, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, subList, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, toArray, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, trimToSize, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayList)[] = {
      { Py_tp_methods, t_ArrayList__methods_ },
      { Py_tp_init, (void *) t_ArrayList_init_ },
      { Py_tp_getset, t_ArrayList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayList *)) get_generic_iterator< t_ArrayList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractList),
      NULL
    };

    DEFINE_TYPE(ArrayList, t_ArrayList, ArrayList);
    PyObject *t_ArrayList::wrap_Object(const ArrayList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayList::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayList), &PY_TYPE_DEF(ArrayList), module, "ArrayList", 0);
    }

    void t_ArrayList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "class_", make_descriptor(ArrayList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "wrapfn_", make_descriptor(t_ArrayList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayList::initializeClass, 1)))
        return NULL;
      return t_ArrayList::wrap_Object(ArrayList(((t_ArrayList *) arg)->object.this$));
    }
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayList object((jobject) NULL);

          INT_CALL(object = ArrayList());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayList(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayList(a0));
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

    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayList_clone(t_ArrayList *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.ensureCapacity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "ensureCapacity", arg);
      return NULL;
    }

    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "listIterator", args, 2);
    }

    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "set", args, 2);
    }

    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "sort", args, 2);
    }

    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "subList", args, 2);
    }

    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args)
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

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "toArray", args, 2);
    }

    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self)
    {
      OBJ_CALL(self->object.trimToSize());
      Py_RETURN_NONE;
    }
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *SignSemantic::class$ = NULL;
          jmethodID *SignSemantic::mids$ = NULL;
          bool SignSemantic::live$ = false;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = NULL;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE = NULL;

          jclass SignSemantic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/SignSemantic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_measurementIsFeasible_716249baa52d209e] = env->getMethodID(cls, "measurementIsFeasible", "(D)Z");
              mids$[mid_valueOf_4fc43fd18b980bd4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/generation/SignSemantic;");
              mids$[mid_values_55196758e1f22b2c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/generation/SignSemantic;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              FEASIBLE_MEASUREMENT_WHEN_POSITIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SignSemantic::measurementIsFeasible(jdouble a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_716249baa52d209e], a0);
          }

          SignSemantic SignSemantic::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SignSemantic(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4fc43fd18b980bd4], a0.this$));
          }

          JArray< SignSemantic > SignSemantic::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SignSemantic >(env->callStaticObjectMethod(cls, mids$[mid_values_55196758e1f22b2c]));
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
          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args);
          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg);
          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SignSemantic_values(PyTypeObject *type);
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data);
          static PyGetSetDef t_SignSemantic__fields_[] = {
            DECLARE_GET_FIELD(t_SignSemantic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SignSemantic__methods_[] = {
            DECLARE_METHOD(t_SignSemantic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, of_, METH_VARARGS),
            DECLARE_METHOD(t_SignSemantic, measurementIsFeasible, METH_O),
            DECLARE_METHOD(t_SignSemantic, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SignSemantic)[] = {
            { Py_tp_methods, t_SignSemantic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SignSemantic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SignSemantic)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SignSemantic, t_SignSemantic, SignSemantic);
          PyObject *t_SignSemantic::wrap_Object(const SignSemantic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SignSemantic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SignSemantic::install(PyObject *module)
          {
            installType(&PY_TYPE(SignSemantic), &PY_TYPE_DEF(SignSemantic), module, "SignSemantic", 0);
          }

          void t_SignSemantic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "class_", make_descriptor(SignSemantic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "wrapfn_", make_descriptor(t_SignSemantic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "boxfn_", make_descriptor(boxObject));
            env->getClass(SignSemantic::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE)));
          }

          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SignSemantic::initializeClass, 1)))
              return NULL;
            return t_SignSemantic::wrap_Object(SignSemantic(((t_SignSemantic *) arg)->object.this$));
          }
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SignSemantic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg)
          {
            jdouble a0;
            jboolean result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }

          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SignSemantic result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::valueOf(a0));
              return t_SignSemantic::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SignSemantic_values(PyTypeObject *type)
          {
            JArray< SignSemantic > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::values());
            return JArray<jobject>(result.this$).wrap(t_SignSemantic::wrap_jobject);
          }
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile::class$ = NULL;
        jmethodID *AttitudeEphemerisFile::mids$ = NULL;
        bool AttitudeEphemerisFile::live$ = false;

        jclass AttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map AttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_AttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile_of_(t_AttitudeEphemerisFile *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile_getSatellites(t_AttitudeEphemerisFile *self);
        static PyObject *t_AttitudeEphemerisFile_get__satellites(t_AttitudeEphemerisFile *self, void *data);
        static PyObject *t_AttitudeEphemerisFile_get__parameters_(t_AttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile, satellites),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile, t_AttitudeEphemerisFile, AttitudeEphemerisFile);
        PyObject *t_AttitudeEphemerisFile::wrap_Object(const AttitudeEphemerisFile& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile *self = (t_AttitudeEphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile *self = (t_AttitudeEphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile), &PY_TYPE_DEF(AttitudeEphemerisFile), module, "AttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "AttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(AttitudeEphemerisFile$AttitudeEphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "SatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)));
        }

        void t_AttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "class_", make_descriptor(AttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile::wrap_Object(AttitudeEphemerisFile(((t_AttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile_of_(t_AttitudeEphemerisFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile_getSatellites(t_AttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile_get__parameters_(t_AttitudeEphemerisFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile_get__satellites(t_AttitudeEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
