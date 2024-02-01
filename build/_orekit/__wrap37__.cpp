#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *InertiaAxis::class$ = NULL;
      jmethodID *InertiaAxis::mids$ = NULL;
      bool InertiaAxis::live$ = false;

      jclass InertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/InertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getA_032312bdeb3f2f93] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_negate_451b696bc5d42d4b] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/InertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D InertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA_032312bdeb3f2f93]));
      }

      jdouble InertiaAxis::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
      }

      InertiaAxis InertiaAxis::negate() const
      {
        return InertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_451b696bc5d42d4b]));
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
      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data);
      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data);
      static PyGetSetDef t_InertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_InertiaAxis, a),
        DECLARE_GET_FIELD(t_InertiaAxis, i),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InertiaAxis__methods_[] = {
        DECLARE_METHOD(t_InertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InertiaAxis)[] = {
        { Py_tp_methods, t_InertiaAxis__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_InertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InertiaAxis, t_InertiaAxis, InertiaAxis);

      void t_InertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(InertiaAxis), &PY_TYPE_DEF(InertiaAxis), module, "InertiaAxis", 0);
      }

      void t_InertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "class_", make_descriptor(InertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "wrapfn_", make_descriptor(t_InertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InertiaAxis::initializeClass, 1)))
          return NULL;
        return t_InertiaAxis::wrap_Object(InertiaAxis(((t_InertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self)
      {
        InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FixedRate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedRate::class$ = NULL;
      jmethodID *FixedRate::mids$ = NULL;
      bool FixedRate::live$ = false;

      jclass FixedRate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedRate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77313604038d7c48] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getReferenceAttitude_83f44b5ac6431edc] = env->getMethodID(cls, "getReferenceAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedRate::FixedRate(const ::org::orekit::attitudes::Attitude & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77313604038d7c48, a0.this$)) {}

      ::org::orekit::attitudes::Attitude FixedRate::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FixedRate::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedRate::getReferenceAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getReferenceAttitude_83f44b5ac6431edc]));
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
      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args);
      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self);
      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data);
      static PyGetSetDef t_FixedRate__fields_[] = {
        DECLARE_GET_FIELD(t_FixedRate, referenceAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FixedRate__methods_[] = {
        DECLARE_METHOD(t_FixedRate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FixedRate, getReferenceAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedRate)[] = {
        { Py_tp_methods, t_FixedRate__methods_ },
        { Py_tp_init, (void *) t_FixedRate_init_ },
        { Py_tp_getset, t_FixedRate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedRate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedRate, t_FixedRate, FixedRate);

      void t_FixedRate::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedRate), &PY_TYPE_DEF(FixedRate), module, "FixedRate", 0);
      }

      void t_FixedRate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "class_", make_descriptor(FixedRate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "wrapfn_", make_descriptor(t_FixedRate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedRate::initializeClass, 1)))
          return NULL;
        return t_FixedRate::wrap_Object(FixedRate(((t_FixedRate *) arg)->object.this$));
      }
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedRate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        FixedRate object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::attitudes::Attitude::initializeClass, &a0))
        {
          INT_CALL(object = FixedRate(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodyFactory.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyFactory::class$ = NULL;
      jmethodID *CelestialBodyFactory::mids$ = NULL;
      bool CelestialBodyFactory::live$ = false;
      ::java::lang::String *CelestialBodyFactory::EARTH = NULL;
      ::java::lang::String *CelestialBodyFactory::EARTH_MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::JUPITER = NULL;
      ::java::lang::String *CelestialBodyFactory::MARS = NULL;
      ::java::lang::String *CelestialBodyFactory::MERCURY = NULL;
      ::java::lang::String *CelestialBodyFactory::MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::NEPTUNE = NULL;
      ::java::lang::String *CelestialBodyFactory::PLUTO = NULL;
      ::java::lang::String *CelestialBodyFactory::SATURN = NULL;
      ::java::lang::String *CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER = NULL;
      ::java::lang::String *CelestialBodyFactory::SUN = NULL;
      ::java::lang::String *CelestialBodyFactory::URANUS = NULL;
      ::java::lang::String *CelestialBodyFactory::VENUS = NULL;

      jclass CelestialBodyFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addCelestialBodyLoader_dcd989e3e2312275] = env->getStaticMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_105e1eadb709d9ac] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_771aee6c143cc92a] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_ff7cb6c242604316] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_105e1eadb709d9ac] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_ff7cb6c242604316] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_105e1eadb709d9ac] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_0ed99bba3e5bd60c] = env->getStaticMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getCelestialBodies_2e5dcdcd5b8a5903] = env->getStaticMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getEarth_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_a1474f5cfab89b5e] = env->getStaticMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH", "Ljava/lang/String;"));
          EARTH_MOON = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH_MOON", "Ljava/lang/String;"));
          JUPITER = new ::java::lang::String(env->getStaticObjectField(cls, "JUPITER", "Ljava/lang/String;"));
          MARS = new ::java::lang::String(env->getStaticObjectField(cls, "MARS", "Ljava/lang/String;"));
          MERCURY = new ::java::lang::String(env->getStaticObjectField(cls, "MERCURY", "Ljava/lang/String;"));
          MOON = new ::java::lang::String(env->getStaticObjectField(cls, "MOON", "Ljava/lang/String;"));
          NEPTUNE = new ::java::lang::String(env->getStaticObjectField(cls, "NEPTUNE", "Ljava/lang/String;"));
          PLUTO = new ::java::lang::String(env->getStaticObjectField(cls, "PLUTO", "Ljava/lang/String;"));
          SATURN = new ::java::lang::String(env->getStaticObjectField(cls, "SATURN", "Ljava/lang/String;"));
          SOLAR_SYSTEM_BARYCENTER = new ::java::lang::String(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Ljava/lang/String;"));
          SUN = new ::java::lang::String(env->getStaticObjectField(cls, "SUN", "Ljava/lang/String;"));
          URANUS = new ::java::lang::String(env->getStaticObjectField(cls, "URANUS", "Ljava/lang/String;"));
          VENUS = new ::java::lang::String(env->getStaticObjectField(cls, "VENUS", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void CelestialBodyFactory::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addCelestialBodyLoader_dcd989e3e2312275], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_105e1eadb709d9ac], a0.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_771aee6c143cc92a], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyCache()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_ff7cb6c242604316]);
      }

      void CelestialBodyFactory::clearCelestialBodyCache(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_105e1eadb709d9ac], a0.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_ff7cb6c242604316]);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_105e1eadb709d9ac], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getBody(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getBody_0ed99bba3e5bd60c], a0.this$));
      }

      ::org::orekit::bodies::LazyLoadedCelestialBodies CelestialBodyFactory::getCelestialBodies()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callStaticObjectMethod(cls, mids$[mid_getCelestialBodies_2e5dcdcd5b8a5903]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarth()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarth_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarthMoonBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonBarycenter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getJupiter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getJupiter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMars()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMars_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMercury()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMercury_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMoon()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMoon_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getNeptune()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getNeptune_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getPluto()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getPluto_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSaturn()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSaturn_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSolarSystemBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSolarSystemBarycenter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSun()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSun_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getUranus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getUranus_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getVenus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getVenus_a1474f5cfab89b5e]));
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
      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data);
      static PyGetSetDef t_CelestialBodyFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodyFactory, celestialBodies),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earth),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mars),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mercury),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, moon),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, neptune),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, pluto),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, saturn),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, sun),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, uranus),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodyFactory__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addDefaultCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyCache, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getBody, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getCelestialBodies, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarth, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarthMoonBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getJupiter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMars, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMercury, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMoon, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getNeptune, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getPluto, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSaturn, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSolarSystemBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSun, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getUranus, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getVenus, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFactory)[] = {
        { Py_tp_methods, t_CelestialBodyFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodyFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyFactory, t_CelestialBodyFactory, CelestialBodyFactory);

      void t_CelestialBodyFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyFactory), &PY_TYPE_DEF(CelestialBodyFactory), module, "CelestialBodyFactory", 0);
      }

      void t_CelestialBodyFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "class_", make_descriptor(CelestialBodyFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "wrapfn_", make_descriptor(t_CelestialBodyFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(CelestialBodyFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH", make_descriptor(j2p(*CelestialBodyFactory::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH_MOON", make_descriptor(j2p(*CelestialBodyFactory::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "JUPITER", make_descriptor(j2p(*CelestialBodyFactory::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MARS", make_descriptor(j2p(*CelestialBodyFactory::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MERCURY", make_descriptor(j2p(*CelestialBodyFactory::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MOON", make_descriptor(j2p(*CelestialBodyFactory::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "NEPTUNE", make_descriptor(j2p(*CelestialBodyFactory::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "PLUTO", make_descriptor(j2p(*CelestialBodyFactory::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SATURN", make_descriptor(j2p(*CelestialBodyFactory::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(j2p(*CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SUN", make_descriptor(j2p(*CelestialBodyFactory::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "URANUS", make_descriptor(j2p(*CelestialBodyFactory::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "VENUS", make_descriptor(j2p(*CelestialBodyFactory::VENUS)));
      }

      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyFactory::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyFactory::wrap_Object(CelestialBodyFactory(((t_CelestialBodyFactory *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegrator::class$ = NULL;
          jmethodID *GaussIntegrator::mids$ = NULL;
          bool GaussIntegrator::live$ = false;

          jclass GaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0e5b4ae04bc40a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_getNumberOfPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_ce4c02d583456bc9] = env->getMethodID(cls, "getPoint", "(I)D");
              mids$[mid_getWeight_ce4c02d583456bc9] = env->getMethodID(cls, "getWeight", "(I)D");
              mids$[mid_integrate_f4604469c090863e] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegrator::GaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0e5b4ae04bc40a1, a0.this$)) {}

          GaussIntegrator::GaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

          jint GaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_d6ab429752e7c267]);
          }

          jdouble GaussIntegrator::getPoint(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPoint_ce4c02d583456bc9], a0);
          }

          jdouble GaussIntegrator::getWeight(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWeight_ce4c02d583456bc9], a0);
          }

          jdouble GaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_f4604469c090863e], a0.this$);
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self);
          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data);
          static PyGetSetDef t_GaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_GaussIntegrator, numberOfPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_GaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_GaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegrator)[] = {
            { Py_tp_methods, t_GaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_GaussIntegrator_init_ },
            { Py_tp_getset, t_GaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegrator, t_GaussIntegrator, GaussIntegrator);

          void t_GaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegrator), &PY_TYPE_DEF(GaussIntegrator), module, "GaussIntegrator", 0);
          }

          void t_GaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "class_", make_descriptor(GaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "wrapfn_", make_descriptor(t_GaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_GaussIntegrator::wrap_Object(GaussIntegrator(((t_GaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = GaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = GaussIntegrator(a0, a1));
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

          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MeasurementBuilder::class$ = NULL;
          jmethodID *MeasurementBuilder::mids$ = NULL;
          bool MeasurementBuilder::live$ = false;

          jclass MeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_a3bed5360bec47d0] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_9dac2855d37640dd] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_getModifiers_d751c1a57012b438] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_27bb228995072af3] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_a3bed5360bec47d0], a0.this$);
          }

          ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_build_9dac2855d37640dd], a0.this$, a1.this$));
          }

          ::java::util::List MeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_d751c1a57012b438]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_27bb228995072af3]));
          }

          void MeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_ce7d94fe97fdcf55], a0.this$, a1.this$);
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
          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data);
          static PyGetSetDef t_MeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_MeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementBuilder)[] = {
            { Py_tp_methods, t_MeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementBuilder, t_MeasurementBuilder, MeasurementBuilder);
          PyObject *t_MeasurementBuilder::wrap_Object(const MeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementBuilder), &PY_TYPE_DEF(MeasurementBuilder), module, "MeasurementBuilder", 0);
          }

          void t_MeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "class_", make_descriptor(MeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "wrapfn_", make_descriptor(t_MeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MeasurementBuilder::wrap_Object(MeasurementBuilder(((t_MeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg)
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

          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args)
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
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data)
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
#include "org/orekit/propagation/events/handlers/StopOnEvent.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66898681536e4202] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnEvent::StopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::ode::events::Action StopOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66898681536e4202], a0.this$, a1.this$, a2));
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
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarS::class$ = NULL;
          jmethodID *FieldCopolarS::mids$ = NULL;
          bool FieldCopolarS::live$ = false;

          jclass FieldCopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_08d37e3f77b7239d] = env->getMethodID(cls, "cs", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ds_08d37e3f77b7239d] = env->getMethodID(cls, "ds", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ns_08d37e3f77b7239d] = env->getMethodID(cls, "ns", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::cs() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cs_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ds() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ds_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ns() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ns_08d37e3f77b7239d]));
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
          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args);
          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data);
          static PyGetSetDef t_FieldCopolarS__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarS, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarS__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarS)[] = {
            { Py_tp_methods, t_FieldCopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarS__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarS, t_FieldCopolarS, FieldCopolarS);
          PyObject *t_FieldCopolarS::wrap_Object(const FieldCopolarS& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarS::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarS), &PY_TYPE_DEF(FieldCopolarS), module, "FieldCopolarS", 0);
          }

          void t_FieldCopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "class_", make_descriptor(FieldCopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "wrapfn_", make_descriptor(t_FieldCopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarS::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarS::wrap_Object(FieldCopolarS(((t_FieldCopolarS *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cs());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ds());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ns());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data)
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
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *TDOA::class$ = NULL;
        jmethodID *TDOA::mids$ = NULL;
        bool TDOA::live$ = false;
        ::java::lang::String *TDOA::MEASUREMENT_TYPE = NULL;

        jclass TDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/TDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e4f5e0763746f291] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TDOA::TDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_e4f5e0763746f291, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_f8d3ef5d49da0d87]));
        }

        ::org::orekit::estimation::measurements::GroundStation TDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_f8d3ef5d49da0d87]));
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
        static PyObject *t_TDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDOA_of_(t_TDOA *self, PyObject *args);
        static int t_TDOA_init_(t_TDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDOA_getPrimeStation(t_TDOA *self);
        static PyObject *t_TDOA_getSecondStation(t_TDOA *self);
        static PyObject *t_TDOA_get__primeStation(t_TDOA *self, void *data);
        static PyObject *t_TDOA_get__secondStation(t_TDOA *self, void *data);
        static PyObject *t_TDOA_get__parameters_(t_TDOA *self, void *data);
        static PyGetSetDef t_TDOA__fields_[] = {
          DECLARE_GET_FIELD(t_TDOA, primeStation),
          DECLARE_GET_FIELD(t_TDOA, secondStation),
          DECLARE_GET_FIELD(t_TDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDOA__methods_[] = {
          DECLARE_METHOD(t_TDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_TDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_TDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDOA)[] = {
          { Py_tp_methods, t_TDOA__methods_ },
          { Py_tp_init, (void *) t_TDOA_init_ },
          { Py_tp_getset, t_TDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(TDOA, t_TDOA, TDOA);
        PyObject *t_TDOA::wrap_Object(const TDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TDOA *self = (t_TDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TDOA *self = (t_TDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(TDOA), &PY_TYPE_DEF(TDOA), module, "TDOA", 0);
        }

        void t_TDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "class_", make_descriptor(TDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "wrapfn_", make_descriptor(t_TDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(TDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*TDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_TDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDOA::initializeClass, 1)))
            return NULL;
          return t_TDOA::wrap_Object(TDOA(((t_TDOA *) arg)->object.this$));
        }
        static PyObject *t_TDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TDOA_of_(t_TDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TDOA_init_(t_TDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          TDOA object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = TDOA(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TDOA);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TDOA_getPrimeStation(t_TDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_TDOA_getSecondStation(t_TDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_TDOA_get__parameters_(t_TDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_TDOA_get__primeStation(t_TDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_TDOA_get__secondStation(t_TDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well19937c.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937c::class$ = NULL;
      jmethodID *Well19937c::mids$ = NULL;
      bool Well19937c::live$ = false;

      jclass Well19937c::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937c");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937c::Well19937c() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Well19937c::Well19937c(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      Well19937c::Well19937c(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      Well19937c::Well19937c(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jint Well19937c::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
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
      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args);

      static PyMethodDef t_Well19937c__methods_[] = {
        DECLARE_METHOD(t_Well19937c, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937c)[] = {
        { Py_tp_methods, t_Well19937c__methods_ },
        { Py_tp_init, (void *) t_Well19937c_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937c)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937c, t_Well19937c, Well19937c);

      void t_Well19937c::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937c), &PY_TYPE_DEF(Well19937c), module, "Well19937c", 0);
      }

      void t_Well19937c::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "class_", make_descriptor(Well19937c::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "wrapfn_", make_descriptor(t_Well19937c::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937c::initializeClass, 1)))
          return NULL;
        return t_Well19937c::wrap_Object(Well19937c(((t_Well19937c *) arg)->object.this$));
      }
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937c::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937c object((jobject) NULL);

            INT_CALL(object = Well19937c());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937c(a0));
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

      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937c), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *FieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool FieldAbstractAnalyticalPropagator::live$ = false;

        jclass FieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_bb8991c4a46cf56d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_ed886b943b6de8d9] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");
            mids$[mid_propagate_bcf793a6168805e3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getMass_cf010978f3c5a913] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_acceptStep_b3f40e8786c1fe19] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator$FieldBasicStepInterpolator;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagateOrbit_78985b34baac5c8e] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_basicPropagate_fb689a9c0f30b938] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_resetIntermediateState_e90aea08a7a0ab5e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_bb8991c4a46cf56d], a0.this$);
        }

        void FieldAbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_ff7cb6c242604316]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4]));
        }

        ::java::util::Collection FieldAbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_3bfef5c77ceb081a]));
        }

        ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_ed886b943b6de8d9]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractAnalyticalPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_bcf793a6168805e3], a0.this$, a1.this$));
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
        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self);
        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, pvProvider),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractAnalyticalPropagator, t_FieldAbstractAnalyticalPropagator, FieldAbstractAnalyticalPropagator);
        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_Object(const FieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(FieldAbstractAnalyticalPropagator), module, "FieldAbstractAnalyticalPropagator", 0);
        }

        void t_FieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "class_", make_descriptor(FieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_FieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractAnalyticalPropagator::wrap_Object(FieldAbstractAnalyticalPropagator(((t_FieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorPixelCrossing.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixelCrossing::class$ = NULL;
        jmethodID *SensorPixelCrossing::mids$ = NULL;
        bool SensorPixelCrossing::live$ = false;

        jclass SensorPixelCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixelCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_98694b02a500db1c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ID)V");
            mids$[mid_locatePixel_209f08246d708042] = env->getMethodID(cls, "locatePixel", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixelCrossing::SensorPixelCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_98694b02a500db1c, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        jdouble SensorPixelCrossing::locatePixel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_locatePixel_209f08246d708042], a0.this$);
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
        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg);

        static PyMethodDef t_SensorPixelCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorPixelCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, locatePixel, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixelCrossing)[] = {
          { Py_tp_methods, t_SensorPixelCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorPixelCrossing_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixelCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixelCrossing, t_SensorPixelCrossing, SensorPixelCrossing);

        void t_SensorPixelCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixelCrossing), &PY_TYPE_DEF(SensorPixelCrossing), module, "SensorPixelCrossing", 0);
        }

        void t_SensorPixelCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "class_", make_descriptor(SensorPixelCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "wrapfn_", make_descriptor(t_SensorPixelCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixelCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorPixelCrossing::wrap_Object(SensorPixelCrossing(((t_SensorPixelCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixelCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jint a3;
          jdouble a4;
          SensorPixelCrossing object((jobject) NULL);

          if (!parseArgs(args, "kkkID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorPixelCrossing(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.locatePixel(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "locatePixel", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAdditionalStateProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonAdditionalStateProvider::mids$ = NULL;
      bool PythonAdditionalStateProvider::live$ = false;

      jclass PythonAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_e8a4ac02afc72623] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_34f098c1d43e614c] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/SpacecraftState;)Z");
          mids$[mid_yield__34f098c1d43e614c] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAdditionalStateProvider::PythonAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }

      jboolean PythonAdditionalStateProvider::yield(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_34f098c1d43e614c], a0.this$);
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
      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self);
      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAdditionalStateProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAdditionalStateProvider, t_PythonAdditionalStateProvider, PythonAdditionalStateProvider);

      void t_PythonAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAdditionalStateProvider), &PY_TYPE_DEF(PythonAdditionalStateProvider), module, "PythonAdditionalStateProvider", 1);
      }

      void t_PythonAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "class_", make_descriptor(PythonAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAdditionalStateProvider::wrap_Object(PythonAdditionalStateProvider(((t_PythonAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSPhaseModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSPhaseModifier::live$ = false;

          jclass ShapiroOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSPhaseModifier::ShapiroOneWayGNSSPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ::java::util::List ShapiroOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void ShapiroOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSPhaseModifier, t_ShapiroOneWayGNSSPhaseModifier, ShapiroOneWayGNSSPhaseModifier);

          void t_ShapiroOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSPhaseModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSPhaseModifier), module, "ShapiroOneWayGNSSPhaseModifier", 0);
          }

          void t_ShapiroOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "class_", make_descriptor(ShapiroOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSPhaseModifier::wrap_Object(ShapiroOneWayGNSSPhaseModifier(((t_ShapiroOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *AbstractEvaluation::class$ = NULL;
            jmethodID *AbstractEvaluation::mids$ = NULL;
            bool AbstractEvaluation::live$ = false;

            jclass AbstractEvaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getChiSquare_9981f74b2d109da6] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_9981f74b2d109da6] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_d5a7c13c36e5009c] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getRMS_9981f74b2d109da6] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_ce4c02d583456bc9] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getSigma_2fd46ead8ae05f47] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEvaluation::AbstractEvaluation(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            jdouble AbstractEvaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_9981f74b2d109da6]);
            }

            jdouble AbstractEvaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_9981f74b2d109da6]);
            }

            ::org::hipparchus::linear::RealMatrix AbstractEvaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_d5a7c13c36e5009c], a0));
            }

            jdouble AbstractEvaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_9981f74b2d109da6]);
            }

            jdouble AbstractEvaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_ce4c02d583456bc9], a0);
            }

            ::org::hipparchus::linear::RealVector AbstractEvaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_2fd46ead8ae05f47], a0));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data);
            static PyGetSetDef t_AbstractEvaluation__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractEvaluation, chiSquare),
              DECLARE_GET_FIELD(t_AbstractEvaluation, cost),
              DECLARE_GET_FIELD(t_AbstractEvaluation, rMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEvaluation__methods_[] = {
              DECLARE_METHOD(t_AbstractEvaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEvaluation)[] = {
              { Py_tp_methods, t_AbstractEvaluation__methods_ },
              { Py_tp_init, (void *) t_AbstractEvaluation_init_ },
              { Py_tp_getset, t_AbstractEvaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEvaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEvaluation, t_AbstractEvaluation, AbstractEvaluation);

            void t_AbstractEvaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEvaluation), &PY_TYPE_DEF(AbstractEvaluation), module, "AbstractEvaluation", 0);
            }

            void t_AbstractEvaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "class_", make_descriptor(AbstractEvaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "wrapfn_", make_descriptor(t_AbstractEvaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEvaluation::initializeClass, 1)))
                return NULL;
              return t_AbstractEvaluation::wrap_Object(AbstractEvaluation(((t_AbstractEvaluation *) arg)->object.this$));
            }
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEvaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              AbstractEvaluation object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = AbstractEvaluation(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
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
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
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

              ::java::lang::Class *SpinStabilized::class$ = NULL;
              jmethodID *SpinStabilized::mids$ = NULL;
              bool SpinStabilized::live$ = false;

              jclass SpinStabilized::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_d67fadc29cf1ce4a] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getMomentumAlpha_9981f74b2d109da6] = env->getMethodID(cls, "getMomentumAlpha", "()D");
                  mids$[mid_getMomentumDelta_9981f74b2d109da6] = env->getMethodID(cls, "getMomentumDelta", "()D");
                  mids$[mid_getNutation_9981f74b2d109da6] = env->getMethodID(cls, "getNutation", "()D");
                  mids$[mid_getNutationPeriod_9981f74b2d109da6] = env->getMethodID(cls, "getNutationPeriod", "()D");
                  mids$[mid_getNutationPhase_9981f74b2d109da6] = env->getMethodID(cls, "getNutationPhase", "()D");
                  mids$[mid_getNutationVel_9981f74b2d109da6] = env->getMethodID(cls, "getNutationVel", "()D");
                  mids$[mid_getSpinAlpha_9981f74b2d109da6] = env->getMethodID(cls, "getSpinAlpha", "()D");
                  mids$[mid_getSpinAngle_9981f74b2d109da6] = env->getMethodID(cls, "getSpinAngle", "()D");
                  mids$[mid_getSpinAngleVel_9981f74b2d109da6] = env->getMethodID(cls, "getSpinAngleVel", "()D");
                  mids$[mid_getSpinDelta_9981f74b2d109da6] = env->getMethodID(cls, "getSpinDelta", "()D");
                  mids$[mid_hasMomentum_eee3de00fe971136] = env->getMethodID(cls, "hasMomentum", "()Z");
                  mids$[mid_hasNutation_eee3de00fe971136] = env->getMethodID(cls, "hasNutation", "()Z");
                  mids$[mid_setMomentumAlpha_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMomentumAlpha", "(D)V");
                  mids$[mid_setMomentumDelta_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMomentumDelta", "(D)V");
                  mids$[mid_setNutation_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNutation", "(D)V");
                  mids$[mid_setNutationPeriod_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNutationPeriod", "(D)V");
                  mids$[mid_setNutationPhase_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNutationPhase", "(D)V");
                  mids$[mid_setNutationVel_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNutationVel", "(D)V");
                  mids$[mid_setSpinAlpha_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSpinAlpha", "(D)V");
                  mids$[mid_setSpinAngle_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSpinAngle", "(D)V");
                  mids$[mid_setSpinAngleVel_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSpinAngleVel", "(D)V");
                  mids$[mid_setSpinDelta_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSpinDelta", "(D)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SpinStabilized::SpinStabilized() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints SpinStabilized::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_d67fadc29cf1ce4a]));
              }

              jdouble SpinStabilized::getMomentumAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumAlpha_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getMomentumDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumDelta_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getNutation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutation_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getNutationPeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPeriod_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getNutationPhase() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPhase_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getNutationVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationVel_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getSpinAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAlpha_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getSpinAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngle_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getSpinAngleVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngleVel_9981f74b2d109da6]);
              }

              jdouble SpinStabilized::getSpinDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinDelta_9981f74b2d109da6]);
              }

              jboolean SpinStabilized::hasMomentum() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasMomentum_eee3de00fe971136]);
              }

              jboolean SpinStabilized::hasNutation() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasNutation_eee3de00fe971136]);
              }

              void SpinStabilized::setMomentumAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumAlpha_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setMomentumDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumDelta_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setNutation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutation_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setNutationPeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPeriod_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setNutationPhase(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPhase_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setNutationVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationVel_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setSpinAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAlpha_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setSpinAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngle_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setSpinAngleVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngleVel_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::setSpinDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinDelta_1ad26e8c8c0cd65b], a0);
              }

              void SpinStabilized::validate(jdouble a0) const
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
              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args);
              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data);
              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyGetSetDef t_SpinStabilized__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilized, endpoints),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumDelta),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutation),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPeriod),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPhase),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngle),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngleVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinDelta),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilized__methods_[] = {
                DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPeriod, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPhase, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngle, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngleVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasMomentum, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, setMomentumAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setMomentumDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutation, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPeriod, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPhase, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngle, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngleVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
                { Py_tp_methods, t_SpinStabilized__methods_ },
                { Py_tp_init, (void *) t_SpinStabilized_init_ },
                { Py_tp_getset, t_SpinStabilized__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

              void t_SpinStabilized::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
              }

              void t_SpinStabilized::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilized::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
              {
                SpinStabilized object((jobject) NULL);

                INT_CALL(object = SpinStabilized());
                self->object = object;

                return 0;
              }

              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasMomentum());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasNutation());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutation", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPeriod", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPhase(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPhase", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngle", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngleVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngleVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(SpinStabilized), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumDelta", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutation", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPeriod", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPhase(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPhase", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngle", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngleVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngleVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinDelta", arg);
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
#include "org/hipparchus/util/MathArrays$Function.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Function::class$ = NULL;
      jmethodID *MathArrays$Function::mids$ = NULL;
      bool MathArrays$Function::live$ = false;

      jclass MathArrays$Function::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Function");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_a40ce4fdf6559ac0] = env->getMethodID(cls, "evaluate", "([D)D");
          mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
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
      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args);

      static PyMethodDef t_MathArrays$Function__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Function, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Function)[] = {
        { Py_tp_methods, t_MathArrays$Function__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Function)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays$Function, t_MathArrays$Function, MathArrays$Function);

      void t_MathArrays$Function::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Function), &PY_TYPE_DEF(MathArrays$Function), module, "MathArrays$Function", 0);
      }

      void t_MathArrays$Function::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "class_", make_descriptor(MathArrays$Function::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "wrapfn_", make_descriptor(t_MathArrays$Function::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Function::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Function::wrap_Object(MathArrays$Function(((t_MathArrays$Function *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Function::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
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
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *FirstMoment::class$ = NULL;
          jmethodID *FirstMoment::mids$ = NULL;
          bool FirstMoment::live$ = false;

          jclass FirstMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/FirstMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_94cbffb9a31e17bb] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/FirstMoment;");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_aggregate_43fa94dba5c449e7] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FirstMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          FirstMoment FirstMoment::copy() const
          {
            return FirstMoment(env->callObjectMethod(this$, mids$[mid_copy_94cbffb9a31e17bb]));
          }

          jlong FirstMoment::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble FirstMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void FirstMoment::increment(jdouble a0) const
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
        namespace moment {
          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data);
          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data);
          static PyGetSetDef t_FirstMoment__fields_[] = {
            DECLARE_GET_FIELD(t_FirstMoment, n),
            DECLARE_GET_FIELD(t_FirstMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FirstMoment__methods_[] = {
            DECLARE_METHOD(t_FirstMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getN, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FirstMoment)[] = {
            { Py_tp_methods, t_FirstMoment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FirstMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FirstMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(FirstMoment, t_FirstMoment, FirstMoment);

          void t_FirstMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(FirstMoment), &PY_TYPE_DEF(FirstMoment), module, "FirstMoment", 0);
          }

          void t_FirstMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "class_", make_descriptor(FirstMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "wrapfn_", make_descriptor(t_FirstMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FirstMoment::initializeClass, 1)))
              return NULL;
            return t_FirstMoment::wrap_Object(FirstMoment(((t_FirstMoment *) arg)->object.this$));
          }
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FirstMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args)
          {
            FirstMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_FirstMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data)
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
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EphemerisPropagatorBuilder::class$ = NULL;
        jmethodID *EphemerisPropagatorBuilder::mids$ = NULL;
        bool EphemerisPropagatorBuilder::live$ = false;

        jclass EphemerisPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EphemerisPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a87fec2ffab2c1fc] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_e8a5aea010c0672d] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_c346a54c93891220] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_082ed74cc9efab42] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_dbf963913bad78cb] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_66ae8c26b63a0d85] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EphemerisPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_a87fec2ffab2c1fc, a0.this$, a1.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_e8a5aea010c0672d, a0.this$, a1.this$, a2.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_c346a54c93891220, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_082ed74cc9efab42, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EphemerisPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EphemerisPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_dbf963913bad78cb], a0.this$));
        }

        EphemerisPropagatorBuilder EphemerisPropagatorBuilder::copy() const
        {
          return EphemerisPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_66ae8c26b63a0d85]));
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
        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EphemerisPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisPropagatorBuilder)[] = {
          { Py_tp_methods, t_EphemerisPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EphemerisPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EphemerisPropagatorBuilder, t_EphemerisPropagatorBuilder, EphemerisPropagatorBuilder);

        void t_EphemerisPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisPropagatorBuilder), &PY_TYPE_DEF(EphemerisPropagatorBuilder), module, "EphemerisPropagatorBuilder", 0);
        }

        void t_EphemerisPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "class_", make_descriptor(EphemerisPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "wrapfn_", make_descriptor(t_EphemerisPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EphemerisPropagatorBuilder::wrap_Object(EphemerisPropagatorBuilder(((t_EphemerisPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          EphemerisPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EphemerisPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/DumpManager.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/frames/Transform.h"
#include "java/io/File.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Boolean.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpManager::class$ = NULL;
        jmethodID *DumpManager::mids$ = NULL;
        bool DumpManager::live$ = false;

        jclass DumpManager::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpManager");

            mids$ = new jmethodID[max_mid];
            mids$[mid_activate_44d81342f3d8a712] = env->getStaticMethodID(cls, "activate", "(Ljava/io/File;)V");
            mids$[mid_deactivate_ff7cb6c242604316] = env->getStaticMethodID(cls, "deactivate", "()V");
            mids$[mid_dumpAlgorithm_65176271965491fa] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)V");
            mids$[mid_dumpAlgorithm_e11894221e750207] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;D)V");
            mids$[mid_dumpDirectLocation_540ea62e8e0f3832] = env->getStaticMethodID(cls, "dumpDirectLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZZZ)V");
            mids$[mid_dumpDirectLocationResult_1ef3ae5bc44c9ecc] = env->getStaticMethodID(cls, "dumpDirectLocationResult", "(Lorg/orekit/bodies/GeodeticPoint;)V");
            mids$[mid_dumpEllipsoid_669bd2fe21c4893e] = env->getStaticMethodID(cls, "dumpEllipsoid", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_dumpInverseLocation_80885c8da95da0fd] = env->getStaticMethodID(cls, "dumpInverseLocation", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/rugged/utils/ExtendedEllipsoid;IIZZZ)V");
            mids$[mid_dumpInverseLocationResult_0b33f8be05e1ae42] = env->getStaticMethodID(cls, "dumpInverseLocationResult", "(Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_dumpSensorDatation_2c90ca3870824978] = env->getStaticMethodID(cls, "dumpSensorDatation", "(Lorg/orekit/rugged/linesensor/LineSensor;DLorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dumpSensorLOS_a83f84fc2b2b427a] = env->getStaticMethodID(cls, "dumpSensorLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_dumpSensorMeanPlane_9befa7185f3ed3e6] = env->getStaticMethodID(cls, "dumpSensorMeanPlane", "(Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing;)V");
            mids$[mid_dumpSensorRate_3d13afbeee0dc169] = env->getStaticMethodID(cls, "dumpSensorRate", "(Lorg/orekit/rugged/linesensor/LineSensor;DD)V");
            mids$[mid_dumpTileCell_d7e47d69b20de341] = env->getStaticMethodID(cls, "dumpTileCell", "(Lorg/orekit/rugged/raster/Tile;IID)V");
            mids$[mid_dumpTransform_23a631f1ef960f5e] = env->getStaticMethodID(cls, "dumpTransform", "(Lorg/orekit/rugged/utils/SpacecraftToObservedBody;ILorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
            mids$[mid_endNicely_ff7cb6c242604316] = env->getStaticMethodID(cls, "endNicely", "()V");
            mids$[mid_isActive_eee3de00fe971136] = env->getStaticMethodID(cls, "isActive", "()Z");
            mids$[mid_resume_787cc3f8b789a31f] = env->getStaticMethodID(cls, "resume", "(Ljava/lang/Boolean;)V");
            mids$[mid_suspend_b55c3109c27b90e3] = env->getStaticMethodID(cls, "suspend", "()Ljava/lang/Boolean;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DumpManager::activate(const ::java::io::File & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_activate_44d81342f3d8a712], a0.this$);
        }

        void DumpManager::deactivate()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_deactivate_ff7cb6c242604316]);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_65176271965491fa], a0.this$);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_e11894221e750207], a0.this$, a1);
        }

        void DumpManager::dumpDirectLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jboolean a3, jboolean a4, jboolean a5)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocation_540ea62e8e0f3832], a0.this$, a1.this$, a2.this$, a3, a4, a5);
        }

        void DumpManager::dumpDirectLocationResult(const ::org::orekit::bodies::GeodeticPoint & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocationResult_1ef3ae5bc44c9ecc], a0.this$);
        }

        void DumpManager::dumpEllipsoid(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpEllipsoid_669bd2fe21c4893e], a0.this$);
        }

        void DumpManager::dumpInverseLocation(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::rugged::utils::ExtendedEllipsoid & a2, jint a3, jint a4, jboolean a5, jboolean a6, jboolean a7)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocation_80885c8da95da0fd], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7);
        }

        void DumpManager::dumpInverseLocationResult(const ::org::orekit::rugged::linesensor::SensorPixel & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocationResult_0b33f8be05e1ae42], a0.this$);
        }

        void DumpManager::dumpSensorDatation(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorDatation_2c90ca3870824978], a0.this$, a1, a2.this$);
        }

        void DumpManager::dumpSensorLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorLOS_a83f84fc2b2b427a], a0.this$, a1.this$, a2, a3.this$);
        }

        void DumpManager::dumpSensorMeanPlane(const ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorMeanPlane_9befa7185f3ed3e6], a0.this$);
        }

        void DumpManager::dumpSensorRate(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorRate_3d13afbeee0dc169], a0.this$, a1, a2);
        }

        void DumpManager::dumpTileCell(const ::org::orekit::rugged::raster::Tile & a0, jint a1, jint a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTileCell_d7e47d69b20de341], a0.this$, a1, a2, a3);
        }

        void DumpManager::dumpTransform(const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a0, jint a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::frames::Transform & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTransform_23a631f1ef960f5e], a0.this$, a1, a2.this$, a3.this$);
        }

        void DumpManager::endNicely()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_endNicely_ff7cb6c242604316]);
        }

        jboolean DumpManager::isActive()
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isActive_eee3de00fe971136]);
        }

        void DumpManager::resume(const ::java::lang::Boolean & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_resume_787cc3f8b789a31f], a0.this$);
        }

        ::java::lang::Boolean DumpManager::suspend()
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::Boolean(env->callStaticObjectMethod(cls, mids$[mid_suspend_b55c3109c27b90e3]));
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
      namespace errors {
        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_deactivate(PyTypeObject *type);
        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_endNicely(PyTypeObject *type);
        static PyObject *t_DumpManager_isActive(PyTypeObject *type);
        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_suspend(PyTypeObject *type);
        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data);
        static PyGetSetDef t_DumpManager__fields_[] = {
          DECLARE_GET_FIELD(t_DumpManager, active),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpManager__methods_[] = {
          DECLARE_METHOD(t_DumpManager, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, activate, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, deactivate, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpAlgorithm, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpEllipsoid, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorDatation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorLOS, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorMeanPlane, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorRate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTileCell, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTransform, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, endNicely, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, isActive, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, resume, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, suspend, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpManager)[] = {
          { Py_tp_methods, t_DumpManager__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpManager__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpManager)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpManager, t_DumpManager, DumpManager);

        void t_DumpManager::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpManager), &PY_TYPE_DEF(DumpManager), module, "DumpManager", 0);
        }

        void t_DumpManager::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "class_", make_descriptor(DumpManager::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "wrapfn_", make_descriptor(t_DumpManager::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpManager::initializeClass, 1)))
            return NULL;
          return t_DumpManager::wrap_Object(DumpManager(((t_DumpManager *) arg)->object.this$));
        }
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpManager::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::activate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "activate", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_deactivate(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::deactivate());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;

              if (!parseArgs(args, "KD", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_, &a1))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError(type, "dumpAlgorithm", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jboolean a3;
          jboolean a4;
          jboolean a5;

          if (!parseArgs(args, "kkkZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocation(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpEllipsoid(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpEllipsoid", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          ::org::orekit::rugged::utils::ExtendedEllipsoid a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean a5;
          jboolean a6;
          jboolean a7;

          if (!parseArgs(args, "kkkIIZZZ", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocation(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorDatation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorDatation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);

          if (!parseArgs(args, "kkIk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorLOS(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorLOS", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorMeanPlane(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorMeanPlane", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorRate(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorRate", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::raster::Tile a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "kIID", ::org::orekit::rugged::raster::Tile::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTileCell(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTileCell", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a0((jobject) NULL);
          jint a1;
          ::org::orekit::frames::Transform a2((jobject) NULL);
          ::org::orekit::frames::Transform a3((jobject) NULL);

          if (!parseArgs(args, "kIkk", ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTransform(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTransform", args);
          return NULL;
        }

        static PyObject *t_DumpManager_endNicely(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::endNicely());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_isActive(PyTypeObject *type)
        {
          jboolean result;
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::isActive());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::Boolean a0((jobject) NULL);

          if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::resume(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "resume", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_suspend(PyTypeObject *type)
        {
          ::java::lang::Boolean result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::suspend());
          return ::java::lang::t_Boolean::wrap_Object(result);
        }

        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isActive());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *JB2008SpaceEnvironmentData::class$ = NULL;
            jmethodID *JB2008SpaceEnvironmentData::mids$ = NULL;
            bool JB2008SpaceEnvironmentData::live$ = false;
            ::java::lang::String *JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_DTC = NULL;
            ::java::lang::String *JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_SOLFSMY = NULL;

            jclass JB2008SpaceEnvironmentData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_init$_0780bc52ba3a7e18] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_e6cfd5b32b8f78ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_28880648617f24f8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDSTDTC_209f08246d708042] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10_209f08246d708042] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10B_209f08246d708042] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getS10_209f08246d708042] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getS10B_209f08246d708042] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10_209f08246d708042] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10B_209f08246d708042] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10_209f08246d708042] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10B_209f08246d708042] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES_DTC = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_DTC", "Ljava/lang/String;"));
                DEFAULT_SUPPORTED_NAMES_SOLFSMY = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_SOLFSMY", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0780bc52ba3a7e18, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e6cfd5b32b8f78ae, a0.this$, a1.this$, a2.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28880648617f24f8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            jdouble JB2008SpaceEnvironmentData::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_209f08246d708042], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_209f08246d708042], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_209f08246d708042], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
            }

            jdouble JB2008SpaceEnvironmentData::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_209f08246d708042], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_209f08246d708042], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_209f08246d708042], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_209f08246d708042], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_209f08246d708042], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_209f08246d708042], a0.this$);
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
            static PyObject *t_JB2008SpaceEnvironmentData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_JB2008SpaceEnvironmentData_init_(t_JB2008SpaceEnvironmentData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_JB2008SpaceEnvironmentData_getDSTDTC(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getF10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getF10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getMaxDate(t_JB2008SpaceEnvironmentData *self);
            static PyObject *t_JB2008SpaceEnvironmentData_getMinDate(t_JB2008SpaceEnvironmentData *self);
            static PyObject *t_JB2008SpaceEnvironmentData_getS10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getS10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getXM10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getXM10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getY10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getY10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_get__maxDate(t_JB2008SpaceEnvironmentData *self, void *data);
            static PyObject *t_JB2008SpaceEnvironmentData_get__minDate(t_JB2008SpaceEnvironmentData *self, void *data);
            static PyGetSetDef t_JB2008SpaceEnvironmentData__fields_[] = {
              DECLARE_GET_FIELD(t_JB2008SpaceEnvironmentData, maxDate),
              DECLARE_GET_FIELD(t_JB2008SpaceEnvironmentData, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_JB2008SpaceEnvironmentData__methods_[] = {
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getDSTDTC, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getF10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getF10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getS10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getS10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getXM10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getXM10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getY10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getY10B, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JB2008SpaceEnvironmentData)[] = {
              { Py_tp_methods, t_JB2008SpaceEnvironmentData__methods_ },
              { Py_tp_init, (void *) t_JB2008SpaceEnvironmentData_init_ },
              { Py_tp_getset, t_JB2008SpaceEnvironmentData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JB2008SpaceEnvironmentData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JB2008SpaceEnvironmentData, t_JB2008SpaceEnvironmentData, JB2008SpaceEnvironmentData);

            void t_JB2008SpaceEnvironmentData::install(PyObject *module)
            {
              installType(&PY_TYPE(JB2008SpaceEnvironmentData), &PY_TYPE_DEF(JB2008SpaceEnvironmentData), module, "JB2008SpaceEnvironmentData", 0);
            }

            void t_JB2008SpaceEnvironmentData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "class_", make_descriptor(JB2008SpaceEnvironmentData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "wrapfn_", make_descriptor(t_JB2008SpaceEnvironmentData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "boxfn_", make_descriptor(boxObject));
              env->getClass(JB2008SpaceEnvironmentData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "DEFAULT_SUPPORTED_NAMES_DTC", make_descriptor(j2p(*JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_DTC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "DEFAULT_SUPPORTED_NAMES_SOLFSMY", make_descriptor(j2p(*JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_SOLFSMY)));
            }

            static PyObject *t_JB2008SpaceEnvironmentData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JB2008SpaceEnvironmentData::initializeClass, 1)))
                return NULL;
              return t_JB2008SpaceEnvironmentData::wrap_Object(JB2008SpaceEnvironmentData(((t_JB2008SpaceEnvironmentData *) arg)->object.this$));
            }
            static PyObject *t_JB2008SpaceEnvironmentData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JB2008SpaceEnvironmentData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_JB2008SpaceEnvironmentData_init_(t_JB2008SpaceEnvironmentData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "ss", &a0, &a1))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::data::DataSource a1((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::data::DataSource a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "sskk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1, a2, a3));
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

            static PyObject *t_JB2008SpaceEnvironmentData_getDSTDTC(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDSTDTC(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getF10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getF10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getF10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getF10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getF10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getMaxDate(t_JB2008SpaceEnvironmentData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getMinDate(t_JB2008SpaceEnvironmentData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getS10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getS10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getS10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getS10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getS10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getXM10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getXM10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getXM10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getXM10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getY10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getY10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getY10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getY10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getY10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_get__maxDate(t_JB2008SpaceEnvironmentData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_get__minDate(t_JB2008SpaceEnvironmentData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64::class$ = NULL;
      jmethodID *Binary64::mids$ = NULL;
      bool Binary64::live$ = false;
      Binary64 *Binary64::NAN$ = NULL;
      Binary64 *Binary64::NEGATIVE_INFINITY = NULL;
      Binary64 *Binary64::ONE = NULL;
      Binary64 *Binary64::PI = NULL;
      Binary64 *Binary64::POSITIVE_INFINITY = NULL;
      Binary64 *Binary64::ZERO = NULL;

      jclass Binary64::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_abs_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acos_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acosh_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_76168256092fdd9b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_b9ec16195ba9efb8] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_asin_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_asinh_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan2_76168256092fdd9b] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_atanh_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_byteValue_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "byteValue", "()B");
          mids$[mid_cbrt_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_ceil_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_compareTo_67c4a67ce13a19a7] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/Binary64;)I");
          mids$[mid_copySign_76168256092fdd9b] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_copySign_b9ec16195ba9efb8] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_cos_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_cosh_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_76168256092fdd9b] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_b9ec16195ba9efb8] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_expm1_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_floor_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_76168256092fdd9b] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_eee3de00fe971136] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_31eede5a9e207c26] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_a26db9d949765b6e] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Binary64;[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_8236fa68fda0c542] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_b1bc4355487c8bea] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_c61172707f0d3812] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_56007c6e7f46e161] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_327c1262125a2b00] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_247e0cf34c4742e7] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_log_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log10_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log1p_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_76168256092fdd9b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_b9ec16195ba9efb8] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_9eae667e534a2534] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_negate_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_newInstance_b9ec16195ba9efb8] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_76168256092fdd9b] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_b9ec16195ba9efb8] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_9eae667e534a2534] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_reciprocal_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_76168256092fdd9b] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_b9ec16195ba9efb8] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_rint_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_rootN_9eae667e534a2534] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_scalb_9eae667e534a2534] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_shortValue_5067fec74ceda473] = env->getMethodID(cls, "shortValue", "()S");
          mids$[mid_sign_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sin_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_76168256092fdd9b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_b9ec16195ba9efb8] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_tan_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_tanh_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toDegrees_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toRadians_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Binary64;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NAN$ = new Binary64(env->getStaticObjectField(cls, "NAN", "Lorg/hipparchus/util/Binary64;"));
          NEGATIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ONE = new Binary64(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/Binary64;"));
          PI = new Binary64(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/util/Binary64;"));
          POSITIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ZERO = new Binary64(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/Binary64;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Binary64::Binary64(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      Binary64 Binary64::abs() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_abs_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::acos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acos_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::acosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acosh_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::add(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_76168256092fdd9b], a0.this$));
      }

      Binary64 Binary64::add(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_b9ec16195ba9efb8], a0));
      }

      Binary64 Binary64::asin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asin_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::asinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asinh_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::atan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::atan2(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan2_76168256092fdd9b], a0.this$));
      }

      Binary64 Binary64::atanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atanh_8fcc6c2abdbc3ba7]));
      }

      jbyte Binary64::byteValue() const
      {
        return env->callByteMethod(this$, mids$[mid_byteValue_5bc9c54e4a4e6e3f]);
      }

      Binary64 Binary64::cbrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cbrt_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::ceil() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ceil_8fcc6c2abdbc3ba7]));
      }

      jint Binary64::compareTo(const Binary64 & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_67c4a67ce13a19a7], a0.this$);
      }

      Binary64 Binary64::copySign(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_76168256092fdd9b], a0.this$));
      }

      Binary64 Binary64::copySign(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_b9ec16195ba9efb8], a0));
      }

      Binary64 Binary64::cos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cos_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::cosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cosh_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::divide(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_76168256092fdd9b], a0.this$));
      }

      Binary64 Binary64::divide(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_b9ec16195ba9efb8], a0));
      }

      jdouble Binary64::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
      }

      jboolean Binary64::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      Binary64 Binary64::exp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_exp_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::expm1() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_expm1_8fcc6c2abdbc3ba7]));
      }

      jfloat Binary64::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
      }

      Binary64 Binary64::floor() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_floor_8fcc6c2abdbc3ba7]));
      }

      ::org::hipparchus::Field Binary64::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      Binary64 Binary64::getPi() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_getPi_8fcc6c2abdbc3ba7]));
      }

      jdouble Binary64::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      jint Binary64::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      Binary64 Binary64::hypot(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_hypot_76168256092fdd9b], a0.this$));
      }

      jint Binary64::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
      }

      jboolean Binary64::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
      }

      jboolean Binary64::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
      }

      jboolean Binary64::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_eee3de00fe971136]);
      }

      Binary64 Binary64::linearCombination(const JArray< jdouble > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_31eede5a9e207c26], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const JArray< Binary64 > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_a26db9d949765b6e], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_8236fa68fda0c542], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_b1bc4355487c8bea], a0, a1.this$, a2, a3.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_c61172707f0d3812], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_56007c6e7f46e161], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5, const Binary64 & a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_327c1262125a2b00], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5, jdouble a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_247e0cf34c4742e7], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Binary64 Binary64::log() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::log10() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log10_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::log1p() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log1p_8fcc6c2abdbc3ba7]));
      }

      jlong Binary64::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
      }

      Binary64 Binary64::multiply(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_76168256092fdd9b], a0.this$));
      }

      Binary64 Binary64::multiply(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_b9ec16195ba9efb8], a0));
      }

      Binary64 Binary64::multiply(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_9eae667e534a2534], a0));
      }

      Binary64 Binary64::negate() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_negate_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::newInstance(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_newInstance_b9ec16195ba9efb8], a0));
      }

      Binary64 Binary64::pow(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_76168256092fdd9b], a0.this$));
      }

      Binary64 Binary64::pow(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_b9ec16195ba9efb8], a0));
      }

      Binary64 Binary64::pow(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_9eae667e534a2534], a0));
      }

      Binary64 Binary64::reciprocal() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_reciprocal_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::remainder(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_76168256092fdd9b], a0.this$));
      }

      Binary64 Binary64::remainder(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_b9ec16195ba9efb8], a0));
      }

      Binary64 Binary64::rint() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rint_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::rootN(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rootN_9eae667e534a2534], a0));
      }

      Binary64 Binary64::scalb(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_scalb_9eae667e534a2534], a0));
      }

      jshort Binary64::shortValue() const
      {
        return env->callShortMethod(this$, mids$[mid_shortValue_5067fec74ceda473]);
      }

      Binary64 Binary64::sign() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sign_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::sin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sin_8fcc6c2abdbc3ba7]));
      }

      ::org::hipparchus::util::FieldSinCos Binary64::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
      }

      Binary64 Binary64::sinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sinh_8fcc6c2abdbc3ba7]));
      }

      ::org::hipparchus::util::FieldSinhCosh Binary64::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
      }

      Binary64 Binary64::sqrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sqrt_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::subtract(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_76168256092fdd9b], a0.this$));
      }

      Binary64 Binary64::subtract(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_b9ec16195ba9efb8], a0));
      }

      Binary64 Binary64::tan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tan_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::tanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tanh_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::toDegrees() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toDegrees_8fcc6c2abdbc3ba7]));
      }

      Binary64 Binary64::toRadians() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toRadians_8fcc6c2abdbc3ba7]));
      }

      ::java::lang::String Binary64::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      Binary64 Binary64::ulp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ulp_8fcc6c2abdbc3ba7]));
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
      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Binary64_abs(t_Binary64 *self);
      static PyObject *t_Binary64_acos(t_Binary64 *self);
      static PyObject *t_Binary64_acosh(t_Binary64 *self);
      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_asin(t_Binary64 *self);
      static PyObject *t_Binary64_asinh(t_Binary64 *self);
      static PyObject *t_Binary64_atan(t_Binary64 *self);
      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_atanh(t_Binary64 *self);
      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cbrt(t_Binary64 *self);
      static PyObject *t_Binary64_ceil(t_Binary64 *self);
      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cos(t_Binary64 *self);
      static PyObject *t_Binary64_cosh(t_Binary64 *self);
      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_exp(t_Binary64 *self);
      static PyObject *t_Binary64_expm1(t_Binary64 *self);
      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_floor(t_Binary64 *self);
      static PyObject *t_Binary64_getField(t_Binary64 *self);
      static PyObject *t_Binary64_getPi(t_Binary64 *self);
      static PyObject *t_Binary64_getReal(t_Binary64 *self);
      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_isInfinite(t_Binary64 *self);
      static PyObject *t_Binary64_isNaN(t_Binary64 *self);
      static PyObject *t_Binary64_isZero(t_Binary64 *self);
      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_log(t_Binary64 *self);
      static PyObject *t_Binary64_log10(t_Binary64 *self);
      static PyObject *t_Binary64_log1p(t_Binary64 *self);
      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_negate(t_Binary64 *self);
      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_reciprocal(t_Binary64 *self);
      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_rint(t_Binary64 *self);
      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_sign(t_Binary64 *self);
      static PyObject *t_Binary64_sin(t_Binary64 *self);
      static PyObject *t_Binary64_sinCos(t_Binary64 *self);
      static PyObject *t_Binary64_sinh(t_Binary64 *self);
      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self);
      static PyObject *t_Binary64_sqrt(t_Binary64 *self);
      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_tan(t_Binary64 *self);
      static PyObject *t_Binary64_tanh(t_Binary64 *self);
      static PyObject *t_Binary64_toDegrees(t_Binary64 *self);
      static PyObject *t_Binary64_toRadians(t_Binary64 *self);
      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_ulp(t_Binary64 *self);
      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data);
      static PyGetSetDef t_Binary64__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64, field),
        DECLARE_GET_FIELD(t_Binary64, infinite),
        DECLARE_GET_FIELD(t_Binary64, naN),
        DECLARE_GET_FIELD(t_Binary64, pi),
        DECLARE_GET_FIELD(t_Binary64, real),
        DECLARE_GET_FIELD(t_Binary64, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64__methods_[] = {
        DECLARE_METHOD(t_Binary64, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, abs, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, add, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, asin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan2, METH_O),
        DECLARE_METHOD(t_Binary64, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, byteValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, compareTo, METH_O),
        DECLARE_METHOD(t_Binary64, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, divide, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, exp, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, floor, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getField, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, hypot, METH_O),
        DECLARE_METHOD(t_Binary64, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, log, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log10, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, negate, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, newInstance, METH_O),
        DECLARE_METHOD(t_Binary64, pow, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, rint, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, rootN, METH_O),
        DECLARE_METHOD(t_Binary64, scalb, METH_O),
        DECLARE_METHOD(t_Binary64, shortValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, sign, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, tan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toString, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64)[] = {
        { Py_tp_methods, t_Binary64__methods_ },
        { Py_tp_init, (void *) t_Binary64_init_ },
        { Py_tp_getset, t_Binary64__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Binary64, t_Binary64, Binary64);

      void t_Binary64::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64), &PY_TYPE_DEF(Binary64), module, "Binary64", 0);
      }

      void t_Binary64::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "class_", make_descriptor(Binary64::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "wrapfn_", make_descriptor(t_Binary64::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "boxfn_", make_descriptor(boxObject));
        env->getClass(Binary64::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NAN", make_descriptor(t_Binary64::wrap_Object(*Binary64::NAN$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NEGATIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::NEGATIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ONE", make_descriptor(t_Binary64::wrap_Object(*Binary64::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "PI", make_descriptor(t_Binary64::wrap_Object(*Binary64::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "POSITIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::POSITIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ZERO", make_descriptor(t_Binary64::wrap_Object(*Binary64::ZERO)));
      }

      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64::initializeClass, 1)))
          return NULL;
        return t_Binary64::wrap_Object(Binary64(((t_Binary64 *) arg)->object.this$));
      }
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        Binary64 object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = Binary64(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Binary64_abs(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Binary64_asin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_asinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Binary64_atanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args)
      {
        jbyte result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.byteValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "byteValue", args, 2);
      }

      static PyObject *t_Binary64_cbrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_ceil(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Binary64_cos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_cosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64_exp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_expm1(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Binary64_floor(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getField(t_Binary64 *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_getPi(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getReal(t_Binary64 *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Binary64_isInfinite(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isNaN(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isZero(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            JArray< Binary64 > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 a6((jobject) NULL);
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            jdouble a6;
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Binary64_log(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log10(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log1p(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Binary64_negate(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg)
      {
        jdouble a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Binary64_reciprocal(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Binary64_rint(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args)
      {
        jshort result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.shortValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "shortValue", args, 2);
      }

      static PyObject *t_Binary64_sign(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinCos(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sqrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Binary64_tan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_tanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toDegrees(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toRadians(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Binary64_ulp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data)
      {
        Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadata::class$ = NULL;
              jmethodID *OemMetadata::mids$ = NULL;
              bool OemMetadata::live$ = false;

              jclass OemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getInterpolationDegree_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_5c787fe19a1e0bf9] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getStartTime_80e11148db499dda] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_80e11148db499dda] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_80e11148db499dda] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_80e11148db499dda] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_setInterpolationDegree_8fd427ab23829bf5] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_373a113be1fa06ae] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setStartTime_8497861b879c83f7] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_8497861b879c83f7] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_8497861b879c83f7] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_8497861b879c83f7] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemMetadata::OemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

              jint OemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_d6ab429752e7c267]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod OemMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_5c787fe19a1e0bf9]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_80e11148db499dda]));
              }

              void OemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_8fd427ab23829bf5], a0);
              }

              void OemMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_373a113be1fa06ae], a0.this$);
              }

              void OemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_8497861b879c83f7], a0.this$);
              }

              void OemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_8497861b879c83f7], a0.this$);
              }

              void OemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_8497861b879c83f7], a0.this$);
              }

              void OemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_8497861b879c83f7], a0.this$);
              }

              void OemMetadata::validate(jdouble a0) const
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
            namespace oem {
              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args);
              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OemMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_OemMetadata, startTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadata__methods_[] = {
                DECLARE_METHOD(t_OemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_OemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadata)[] = {
                { Py_tp_methods, t_OemMetadata__methods_ },
                { Py_tp_init, (void *) t_OemMetadata_init_ },
                { Py_tp_getset, t_OemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OemMetadata, t_OemMetadata, OemMetadata);

              void t_OemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadata), &PY_TYPE_DEF(OemMetadata), module, "OemMetadata", 0);
              }

              void t_OemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "class_", make_descriptor(OemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "wrapfn_", make_descriptor(t_OemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadata::initializeClass, 1)))
                  return NULL;
                return t_OemMetadata::wrap_Object(OemMetadata(((t_OemMetadata *) arg)->object.this$));
              }
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                OemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = OemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
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
#include "org/orekit/utils/LoveNumbers.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LoveNumbers::class$ = NULL;
      jmethodID *LoveNumbers::mids$ = NULL;
      bool LoveNumbers::live$ = false;

      jclass LoveNumbers::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LoveNumbers");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_813cb525afd84855] = env->getMethodID(cls, "<init>", "([[D[[D[[D)V");
          mids$[mid_getImaginary_6d920aab27f0a3d2] = env->getMethodID(cls, "getImaginary", "(II)D");
          mids$[mid_getPlus_6d920aab27f0a3d2] = env->getMethodID(cls, "getPlus", "(II)D");
          mids$[mid_getReal_6d920aab27f0a3d2] = env->getMethodID(cls, "getReal", "(II)D");
          mids$[mid_getSize_d6ab429752e7c267] = env->getMethodID(cls, "getSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoveNumbers::LoveNumbers(const JArray< JArray< jdouble > > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_813cb525afd84855, a0.this$, a1.this$, a2.this$)) {}

      jdouble LoveNumbers::getImaginary(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_6d920aab27f0a3d2], a0, a1);
      }

      jdouble LoveNumbers::getPlus(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPlus_6d920aab27f0a3d2], a0, a1);
      }

      jdouble LoveNumbers::getReal(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_6d920aab27f0a3d2], a0, a1);
      }

      jint LoveNumbers::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_d6ab429752e7c267]);
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
      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self);
      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data);
      static PyGetSetDef t_LoveNumbers__fields_[] = {
        DECLARE_GET_FIELD(t_LoveNumbers, size),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoveNumbers__methods_[] = {
        DECLARE_METHOD(t_LoveNumbers, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, getImaginary, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getPlus, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getReal, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoveNumbers)[] = {
        { Py_tp_methods, t_LoveNumbers__methods_ },
        { Py_tp_init, (void *) t_LoveNumbers_init_ },
        { Py_tp_getset, t_LoveNumbers__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoveNumbers)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LoveNumbers, t_LoveNumbers, LoveNumbers);

      void t_LoveNumbers::install(PyObject *module)
      {
        installType(&PY_TYPE(LoveNumbers), &PY_TYPE_DEF(LoveNumbers), module, "LoveNumbers", 0);
      }

      void t_LoveNumbers::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "class_", make_descriptor(LoveNumbers::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "wrapfn_", make_descriptor(t_LoveNumbers::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoveNumbers::initializeClass, 1)))
          return NULL;
        return t_LoveNumbers::wrap_Object(LoveNumbers(((t_LoveNumbers *) arg)->object.this$));
      }
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoveNumbers::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > a1((jobject) NULL);
        JArray< JArray< jdouble > > a2((jobject) NULL);
        LoveNumbers object((jobject) NULL);

        if (!parseArgs(args, "[[D[[D[[D", &a0, &a1, &a2))
        {
          INT_CALL(object = LoveNumbers(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getImaginary(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPlus(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPlus", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getReal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/NewtonRaphsonSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *NewtonRaphsonSolver::class$ = NULL;
        jmethodID *NewtonRaphsonSolver::mids$ = NULL;
        bool NewtonRaphsonSolver::live$ = false;

        jclass NewtonRaphsonSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/NewtonRaphsonSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_solve_c151eaed64ea01c9] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DD)D");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonRaphsonSolver::NewtonRaphsonSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        NewtonRaphsonSolver::NewtonRaphsonSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        jdouble NewtonRaphsonSolver::solve(jint a0, const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_c151eaed64ea01c9], a0, a1.this$, a2, a3);
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
        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args);
        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args);
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data);
        static PyGetSetDef t_NewtonRaphsonSolver__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonRaphsonSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonRaphsonSolver__methods_[] = {
          DECLARE_METHOD(t_NewtonRaphsonSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonRaphsonSolver)[] = {
          { Py_tp_methods, t_NewtonRaphsonSolver__methods_ },
          { Py_tp_init, (void *) t_NewtonRaphsonSolver_init_ },
          { Py_tp_getset, t_NewtonRaphsonSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonRaphsonSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver),
          NULL
        };

        DEFINE_TYPE(NewtonRaphsonSolver, t_NewtonRaphsonSolver, NewtonRaphsonSolver);
        PyObject *t_NewtonRaphsonSolver::wrap_Object(const NewtonRaphsonSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NewtonRaphsonSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NewtonRaphsonSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonRaphsonSolver), &PY_TYPE_DEF(NewtonRaphsonSolver), module, "NewtonRaphsonSolver", 0);
        }

        void t_NewtonRaphsonSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "class_", make_descriptor(NewtonRaphsonSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "wrapfn_", make_descriptor(t_NewtonRaphsonSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonRaphsonSolver::initializeClass, 1)))
            return NULL;
          return t_NewtonRaphsonSolver::wrap_Object(NewtonRaphsonSolver(((t_NewtonRaphsonSolver *) arg)->object.this$));
        }
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonRaphsonSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NewtonRaphsonSolver object((jobject) NULL);

              INT_CALL(object = NewtonRaphsonSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              NewtonRaphsonSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = NewtonRaphsonSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NewtonRaphsonSolver), (PyObject *) self, "solve", args, 2);
        }
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TrackingMode::class$ = NULL;
            jmethodID *TrackingMode::mids$ = NULL;
            bool TrackingMode::live$ = false;
            TrackingMode *TrackingMode::SEQUENTIAL = NULL;
            TrackingMode *TrackingMode::SINGLE_DIFF = NULL;

            jclass TrackingMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TrackingMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_e2cad1f1a2d7985b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_values_35e0872f6be77443] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SEQUENTIAL = new TrackingMode(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                SINGLE_DIFF = new TrackingMode(env->getStaticObjectField(cls, "SINGLE_DIFF", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TrackingMode TrackingMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TrackingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e2cad1f1a2d7985b], a0.this$));
            }

            JArray< TrackingMode > TrackingMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TrackingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_35e0872f6be77443]));
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
            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args);
            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TrackingMode_values(PyTypeObject *type);
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data);
            static PyGetSetDef t_TrackingMode__fields_[] = {
              DECLARE_GET_FIELD(t_TrackingMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TrackingMode__methods_[] = {
              DECLARE_METHOD(t_TrackingMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_TrackingMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TrackingMode)[] = {
              { Py_tp_methods, t_TrackingMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TrackingMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TrackingMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TrackingMode, t_TrackingMode, TrackingMode);
            PyObject *t_TrackingMode::wrap_Object(const TrackingMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TrackingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TrackingMode::install(PyObject *module)
            {
              installType(&PY_TYPE(TrackingMode), &PY_TYPE_DEF(TrackingMode), module, "TrackingMode", 0);
            }

            void t_TrackingMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "class_", make_descriptor(TrackingMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "wrapfn_", make_descriptor(t_TrackingMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(TrackingMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SEQUENTIAL", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SEQUENTIAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SINGLE_DIFF", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SINGLE_DIFF)));
            }

            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TrackingMode::initializeClass, 1)))
                return NULL;
              return t_TrackingMode::wrap_Object(TrackingMode(((t_TrackingMode *) arg)->object.this$));
            }
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TrackingMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TrackingMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::valueOf(a0));
                return t_TrackingMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TrackingMode_values(PyTypeObject *type)
            {
              JArray< TrackingMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::values());
              return JArray<jobject>(result.this$).wrap(t_TrackingMode::wrap_jobject);
            }
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data)
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
#include "org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_9981f74b2d109da6] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_eb84deac0f960db9] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNormalizedSphericalHarmonicsProvider::PythonNormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonNormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonNormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonNormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundStation::class$ = NULL;
        jmethodID *GroundStation::mids$ = NULL;
        bool GroundStation::live$ = false;
        ::java::lang::String *GroundStation::DRIFT_SUFFIX = NULL;
        ::java::lang::String *GroundStation::INTERMEDIATE_SUFFIX = NULL;
        ::java::lang::String *GroundStation::OFFSET_SUFFIX = NULL;

        jclass GroundStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c9031d766545c51] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_a3f52cf9727f39a6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/frames/EOPHistory;[Lorg/orekit/models/earth/displacement/StationDisplacement;)V");
            mids$[mid_getBaseFrame_d0e5c3c9d5578806] = env->getMethodID(cls, "getBaseFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_getClockDriftDriver_7daccb22665e511b] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_7daccb22665e511b] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getDisplacements_fa6c07d489a11cbc] = env->getMethodID(cls, "getDisplacements", "()[Lorg/orekit/models/earth/displacement/StationDisplacement;");
            mids$[mid_getEastOffsetDriver_7daccb22665e511b] = env->getMethodID(cls, "getEastOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getEstimatedEarthFrame_cb151471db4570f0] = env->getMethodID(cls, "getEstimatedEarthFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEstimatedUT1_ac848fda7f5ef1ad] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getNorthOffsetDriver_7daccb22665e511b] = env->getMethodID(cls, "getNorthOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getOffsetGeodeticPoint_fcf69cfd0f2dce3f] = env->getMethodID(cls, "getOffsetGeodeticPoint", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getOffsetToInertial_d6f3b63bcf7680d5] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/frames/Transform;");
            mids$[mid_getOffsetToInertial_9bfbf8a64f37336b] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getOffsetToInertial_efc9ead827db6ffb] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getPolarDriftXDriver_7daccb22665e511b] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_7daccb22665e511b] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_7daccb22665e511b] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_7daccb22665e511b] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_7daccb22665e511b] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_7daccb22665e511b] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getZenithOffsetDriver_7daccb22665e511b] = env->getMethodID(cls, "getZenithOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRIFT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DRIFT_SUFFIX", "Ljava/lang/String;"));
            INTERMEDIATE_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "INTERMEDIATE_SUFFIX", "Ljava/lang/String;"));
            OFFSET_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "OFFSET_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c9031d766545c51, a0.this$)) {}

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::frames::EOPHistory & a1, const JArray< ::org::orekit::models::earth::displacement::StationDisplacement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3f52cf9727f39a6, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::frames::TopocentricFrame GroundStation::getBaseFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getBaseFrame_d0e5c3c9d5578806]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_7daccb22665e511b]));
        }

        JArray< ::org::orekit::models::earth::displacement::StationDisplacement > GroundStation::getDisplacements() const
        {
          return JArray< ::org::orekit::models::earth::displacement::StationDisplacement >(env->callObjectMethod(this$, mids$[mid_getDisplacements_fa6c07d489a11cbc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getEastOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getEastOffsetDriver_7daccb22665e511b]));
        }

        ::org::orekit::frames::Frame GroundStation::getEstimatedEarthFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEstimatedEarthFrame_cb151471db4570f0]));
        }

        ::org::orekit::time::UT1Scale GroundStation::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_ac848fda7f5ef1ad]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getNorthOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getNorthOffsetDriver_7daccb22665e511b]));
        }

        ::org::orekit::bodies::GeodeticPoint GroundStation::getOffsetGeodeticPoint(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getOffsetGeodeticPoint_fcf69cfd0f2dce3f], a0.this$));
        }

        ::org::orekit::frames::Transform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_d6f3b63bcf7680d5], a0.this$, a1.this$, a2));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_9bfbf8a64f37336b], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_efc9ead827db6ffb], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getZenithOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getZenithOffsetDriver_7daccb22665e511b]));
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
        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self);
        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self);
        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg);
        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args);
        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data);
        static PyGetSetDef t_GroundStation__fields_[] = {
          DECLARE_GET_FIELD(t_GroundStation, baseFrame),
          DECLARE_GET_FIELD(t_GroundStation, clockDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, clockOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, displacements),
          DECLARE_GET_FIELD(t_GroundStation, eastOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, estimatedEarthFrame),
          DECLARE_GET_FIELD(t_GroundStation, estimatedUT1),
          DECLARE_GET_FIELD(t_GroundStation, northOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftYDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, zenithOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundStation__methods_[] = {
          DECLARE_METHOD(t_GroundStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, getBaseFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getDisplacements, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEastOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedEarthFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getNorthOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getOffsetGeodeticPoint, METH_O),
          DECLARE_METHOD(t_GroundStation, getOffsetToInertial, METH_VARARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getZenithOffsetDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundStation)[] = {
          { Py_tp_methods, t_GroundStation__methods_ },
          { Py_tp_init, (void *) t_GroundStation_init_ },
          { Py_tp_getset, t_GroundStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundStation, t_GroundStation, GroundStation);

        void t_GroundStation::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundStation), &PY_TYPE_DEF(GroundStation), module, "GroundStation", 0);
        }

        void t_GroundStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "class_", make_descriptor(GroundStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "wrapfn_", make_descriptor(t_GroundStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundStation::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "DRIFT_SUFFIX", make_descriptor(j2p(*GroundStation::DRIFT_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "INTERMEDIATE_SUFFIX", make_descriptor(j2p(*GroundStation::INTERMEDIATE_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "OFFSET_SUFFIX", make_descriptor(j2p(*GroundStation::OFFSET_SUFFIX)));
        }

        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundStation::initializeClass, 1)))
            return NULL;
          return t_GroundStation::wrap_Object(GroundStation(((t_GroundStation *) arg)->object.this$));
        }
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = GroundStation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ::org::orekit::frames::EOPHistory a1((jobject) NULL);
              JArray< ::org::orekit::models::earth::displacement::StationDisplacement > a2((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "kk[k", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::models::earth::displacement::StationDisplacement::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GroundStation(a0, a1, a2));
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

        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplacements());
          return JArray<jobject>(result.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getOffsetGeodeticPoint(a0));
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetGeodeticPoint", arg);
          return NULL;
        }

        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::frames::Transform result((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2));
                return ::org::orekit::frames::t_Transform::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetToInertial", args);
          return NULL;
        }

        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getDisplacements());
          return JArray<jobject>(value.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaNStrategy::class$ = NULL;
        jmethodID *NaNStrategy::mids$ = NULL;
        bool NaNStrategy::live$ = false;
        NaNStrategy *NaNStrategy::FAILED = NULL;
        NaNStrategy *NaNStrategy::FIXED = NULL;
        NaNStrategy *NaNStrategy::MAXIMAL = NULL;
        NaNStrategy *NaNStrategy::MINIMAL = NULL;
        NaNStrategy *NaNStrategy::REMOVED = NULL;

        jclass NaNStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaNStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_29c4bf17048357d0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_values_3475a48aee965c94] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/NaNStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FAILED = new NaNStrategy(env->getStaticObjectField(cls, "FAILED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            FIXED = new NaNStrategy(env->getStaticObjectField(cls, "FIXED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            MAXIMAL = new NaNStrategy(env->getStaticObjectField(cls, "MAXIMAL", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            MINIMAL = new NaNStrategy(env->getStaticObjectField(cls, "MINIMAL", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            REMOVED = new NaNStrategy(env->getStaticObjectField(cls, "REMOVED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaNStrategy NaNStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return NaNStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_29c4bf17048357d0], a0.this$));
        }

        JArray< NaNStrategy > NaNStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< NaNStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_3475a48aee965c94]));
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
      namespace ranking {
        static PyObject *t_NaNStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaNStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaNStrategy_of_(t_NaNStrategy *self, PyObject *args);
        static PyObject *t_NaNStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_NaNStrategy_values(PyTypeObject *type);
        static PyObject *t_NaNStrategy_get__parameters_(t_NaNStrategy *self, void *data);
        static PyGetSetDef t_NaNStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_NaNStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaNStrategy__methods_[] = {
          DECLARE_METHOD(t_NaNStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_NaNStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaNStrategy)[] = {
          { Py_tp_methods, t_NaNStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_NaNStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaNStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(NaNStrategy, t_NaNStrategy, NaNStrategy);
        PyObject *t_NaNStrategy::wrap_Object(const NaNStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NaNStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NaNStrategy *self = (t_NaNStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NaNStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NaNStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NaNStrategy *self = (t_NaNStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NaNStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(NaNStrategy), &PY_TYPE_DEF(NaNStrategy), module, "NaNStrategy", 0);
        }

        void t_NaNStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "class_", make_descriptor(NaNStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "wrapfn_", make_descriptor(t_NaNStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaNStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "FAILED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::FAILED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "FIXED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "MAXIMAL", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::MAXIMAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "MINIMAL", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::MINIMAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "REMOVED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::REMOVED)));
        }

        static PyObject *t_NaNStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaNStrategy::initializeClass, 1)))
            return NULL;
          return t_NaNStrategy::wrap_Object(NaNStrategy(((t_NaNStrategy *) arg)->object.this$));
        }
        static PyObject *t_NaNStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaNStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NaNStrategy_of_(t_NaNStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_NaNStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          NaNStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::NaNStrategy::valueOf(a0));
            return t_NaNStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_NaNStrategy_values(PyTypeObject *type)
        {
          JArray< NaNStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::NaNStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_NaNStrategy::wrap_jobject);
        }
        static PyObject *t_NaNStrategy_get__parameters_(t_NaNStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFileParser.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFileParser::class$ = NULL;
        jmethodID *STKEphemerisFileParser::mids$ = NULL;
        bool STKEphemerisFileParser::live$ = false;

        jclass STKEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_01ab45d8c3ba0191] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/time/UTCScale;Ljava/util/Map;)V");
            mids$[mid_parse_419f61288a24c099] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/stk/STKEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFileParser::STKEphemerisFileParser(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::time::UTCScale & a2, const ::java::util::Map & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01ab45d8c3ba0191, a0.this$, a1, a2.this$, a3.this$)) {}

        ::org::orekit::files::stk::STKEphemerisFile STKEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::stk::STKEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_419f61288a24c099], a0.this$));
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
        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg);

        static PyMethodDef t_STKEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFileParser)[] = {
          { Py_tp_methods, t_STKEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFileParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFileParser, t_STKEphemerisFileParser, STKEphemerisFileParser);

        void t_STKEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFileParser), &PY_TYPE_DEF(STKEphemerisFileParser), module, "STKEphemerisFileParser", 0);
        }

        void t_STKEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "class_", make_descriptor(STKEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "wrapfn_", make_descriptor(t_STKEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFileParser::wrap_Object(STKEphemerisFileParser(((t_STKEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::UTCScale a2((jobject) NULL);
          ::java::util::Map a3((jobject) NULL);
          PyTypeObject **p3;
          STKEphemerisFileParser object((jobject) NULL);

          if (!parseArgs(args, "sDkK", ::org::orekit::time::UTCScale::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = STKEphemerisFileParser(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::stk::t_STKEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
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
                mids$[mid_getDnl_1340186f93089476] = env->getStaticMethodID(cls, "getDnl", "(DDII)D");
                mids$[mid_getDnl_3c0decdc6d452b91] = env->getStaticMethodID(cls, "getDnl", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRnml_f61f9bc72ee2229e] = env->getStaticMethodID(cls, "getRnml", "(DIIIII)D");
                mids$[mid_getRnml_3423c1ac4701718a] = env->getStaticMethodID(cls, "getRnml", "(Lorg/hipparchus/CalculusFieldElement;IIIII)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble UpperBounds::getDnl(jdouble a0, jdouble a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getDnl_1340186f93089476], a0, a1, a2, a3);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getDnl(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getDnl_3c0decdc6d452b91], a0.this$, a1.this$, a2, a3));
            }

            jdouble UpperBounds::getRnml(jdouble a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getRnml_f61f9bc72ee2229e], a0, a1, a2, a3, a4, a5);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getRnml(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getRnml_3423c1ac4701718a], a0.this$, a1, a2, a3, a4, a5));
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
#include "org/hipparchus/distribution/continuous/UniformRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *UniformRealDistribution::class$ = NULL;
        jmethodID *UniformRealDistribution::mids$ = NULL;
        bool UniformRealDistribution::live$ = false;

        jclass UniformRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/UniformRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformRealDistribution::UniformRealDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        UniformRealDistribution::UniformRealDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble UniformRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble UniformRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble UniformRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble UniformRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble UniformRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble UniformRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble UniformRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean UniformRealDistribution::isSupportConnected() const
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
        static PyObject *t_UniformRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformRealDistribution_init_(t_UniformRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformRealDistribution_cumulativeProbability(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_density(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getNumericalMean(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getNumericalVariance(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getSupportLowerBound(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getSupportUpperBound(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_inverseCumulativeProbability(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_isSupportConnected(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_get__numericalMean(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__numericalVariance(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportConnected(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportLowerBound(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportUpperBound(t_UniformRealDistribution *self, void *data);
        static PyGetSetDef t_UniformRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformRealDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformRealDistribution)[] = {
          { Py_tp_methods, t_UniformRealDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformRealDistribution_init_ },
          { Py_tp_getset, t_UniformRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(UniformRealDistribution, t_UniformRealDistribution, UniformRealDistribution);

        void t_UniformRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformRealDistribution), &PY_TYPE_DEF(UniformRealDistribution), module, "UniformRealDistribution", 0);
        }

        void t_UniformRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "class_", make_descriptor(UniformRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "wrapfn_", make_descriptor(t_UniformRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformRealDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformRealDistribution::wrap_Object(UniformRealDistribution(((t_UniformRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformRealDistribution_init_(t_UniformRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              UniformRealDistribution object((jobject) NULL);

              INT_CALL(object = UniformRealDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UniformRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UniformRealDistribution(a0, a1));
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

        static PyObject *t_UniformRealDistribution_cumulativeProbability(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformRealDistribution_density(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getNumericalMean(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getNumericalVariance(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getSupportLowerBound(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getSupportUpperBound(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformRealDistribution_inverseCumulativeProbability(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_UniformRealDistribution_isSupportConnected(t_UniformRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformRealDistribution_get__numericalMean(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__numericalVariance(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__supportConnected(t_UniformRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformRealDistribution_get__supportLowerBound(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__supportUpperBound(t_UniformRealDistribution *self, void *data)
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
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationModifier::class$ = NULL;
        jmethodID *EstimationModifier::mids$ = NULL;
        bool EstimationModifier::live$ = false;

        jclass EstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EstimationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
        }

        void EstimationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
        static PyObject *t_EstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationModifier_of_(t_EstimationModifier *self, PyObject *args);
        static PyObject *t_EstimationModifier_modify(t_EstimationModifier *self, PyObject *arg);
        static PyObject *t_EstimationModifier_modifyWithoutDerivatives(t_EstimationModifier *self, PyObject *arg);
        static PyObject *t_EstimationModifier_get__parameters_(t_EstimationModifier *self, void *data);
        static PyGetSetDef t_EstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationModifier__methods_[] = {
          DECLARE_METHOD(t_EstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimationModifier, modify, METH_O),
          DECLARE_METHOD(t_EstimationModifier, modifyWithoutDerivatives, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationModifier)[] = {
          { Py_tp_methods, t_EstimationModifier__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationModifier)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(EstimationModifier, t_EstimationModifier, EstimationModifier);
        PyObject *t_EstimationModifier::wrap_Object(const EstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimationModifier *self = (t_EstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimationModifier *self = (t_EstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationModifier), &PY_TYPE_DEF(EstimationModifier), module, "EstimationModifier", 0);
        }

        void t_EstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "class_", make_descriptor(EstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "wrapfn_", make_descriptor(t_EstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationModifier), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationModifier::initializeClass, 1)))
            return NULL;
          return t_EstimationModifier::wrap_Object(EstimationModifier(((t_EstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_EstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationModifier_of_(t_EstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimationModifier_modify(t_EstimationModifier *self, PyObject *arg)
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

        static PyObject *t_EstimationModifier_modifyWithoutDerivatives(t_EstimationModifier *self, PyObject *arg)
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
        static PyObject *t_EstimationModifier_get__parameters_(t_EstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
