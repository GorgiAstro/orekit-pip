#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GeographicZoneDetector::class$ = NULL;
        jmethodID *GeographicZoneDetector::mids$ = NULL;
        bool GeographicZoneDetector::live$ = false;

        jclass GeographicZoneDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GeographicZoneDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fe907d784096cf52] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_f4844a1bc23e7008] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_6f2d25f6f71d01ca] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getMargin_9981f74b2d109da6] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getZone_17b2f5c9c3ed683f] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_withMargin_3ead346dc2613e5a] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/GeographicZoneDetector;");
            mids$[mid_create_0272f2dc6ff8f89b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GeographicZoneDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeographicZoneDetector::GeographicZoneDetector(const ::org::orekit::bodies::BodyShape & a0, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fe907d784096cf52, a0.this$, a1.this$, a2)) {}

        GeographicZoneDetector::GeographicZoneDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f4844a1bc23e7008, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble GeographicZoneDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::bodies::BodyShape GeographicZoneDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_6f2d25f6f71d01ca]));
        }

        jdouble GeographicZoneDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_9981f74b2d109da6]);
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet GeographicZoneDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_17b2f5c9c3ed683f]));
        }

        GeographicZoneDetector GeographicZoneDetector::withMargin(jdouble a0) const
        {
          return GeographicZoneDetector(env->callObjectMethod(this$, mids$[mid_withMargin_3ead346dc2613e5a], a0));
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
        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args);
        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args);
        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data);
        static PyGetSetDef t_GeographicZoneDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GeographicZoneDetector, body),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, margin),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, zone),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeographicZoneDetector__methods_[] = {
          DECLARE_METHOD(t_GeographicZoneDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getZone, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, withMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeographicZoneDetector)[] = {
          { Py_tp_methods, t_GeographicZoneDetector__methods_ },
          { Py_tp_init, (void *) t_GeographicZoneDetector_init_ },
          { Py_tp_getset, t_GeographicZoneDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeographicZoneDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GeographicZoneDetector, t_GeographicZoneDetector, GeographicZoneDetector);
        PyObject *t_GeographicZoneDetector::wrap_Object(const GeographicZoneDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeographicZoneDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeographicZoneDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GeographicZoneDetector), &PY_TYPE_DEF(GeographicZoneDetector), module, "GeographicZoneDetector", 0);
        }

        void t_GeographicZoneDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "class_", make_descriptor(GeographicZoneDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "wrapfn_", make_descriptor(t_GeographicZoneDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeographicZoneDetector::initializeClass, 1)))
            return NULL;
          return t_GeographicZoneDetector::wrap_Object(GeographicZoneDetector(((t_GeographicZoneDetector *) arg)->object.this$));
        }
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeographicZoneDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::bodies::BodyShape a0((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a2))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a4))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
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

        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeographicZoneDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg)
        {
          jdouble a0;
          GeographicZoneDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_GeographicZoneDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStamped::class$ = NULL;
      jmethodID *FieldTimeStamped::mids$ = NULL;
      bool FieldTimeStamped::live$ = false;

      jclass FieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_894bdf3b7441f744] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldTimeStamped;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldTimeStamped::durationFrom(const FieldTimeStamped & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_894bdf3b7441f744], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStamped::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
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
      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args);
      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg);
      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self);
      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data);
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data);
      static PyGetSetDef t_FieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStamped, date),
        DECLARE_GET_FIELD(t_FieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_FieldTimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStamped)[] = {
        { Py_tp_methods, t_FieldTimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStamped, t_FieldTimeStamped, FieldTimeStamped);
      PyObject *t_FieldTimeStamped::wrap_Object(const FieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStamped), &PY_TYPE_DEF(FieldTimeStamped), module, "FieldTimeStamped", 0);
      }

      void t_FieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "class_", make_descriptor(FieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "wrapfn_", make_descriptor(t_FieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStamped::wrap_Object(FieldTimeStamped(((t_FieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg)
      {
        FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTimeStamped::initializeClass, &a0, &p0, t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmData::class$ = NULL;
              jmethodID *OmmData::mids$ = NULL;
              bool OmmData::live$ = false;

              jclass OmmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1645f0f7285da97b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_2b28f441350fd9e6] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_4af716cba10d823b] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getMass_9981f74b2d109da6] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getSpacecraftParametersBlock_36c0b14eddf66774] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getTLEBlock_02e8a50c3ed3ac28] = env->getMethodID(cls, "getTLEBlock", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;");
                  mids$[mid_getUserDefinedBlock_b8dba07746e1b089] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmData::OmmData(const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a0, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1645f0f7285da97b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OmmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_2b28f441350fd9e6]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OmmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_4af716cba10d823b]));
              }

              jdouble OmmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_9981f74b2d109da6]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OmmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_36c0b14eddf66774]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle OmmData::getTLEBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle(env->callObjectMethod(this$, mids$[mid_getTLEBlock_02e8a50c3ed3ac28]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OmmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_b8dba07746e1b089]));
              }

              void OmmData::validate(jdouble a0) const
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
            namespace omm {
              static PyObject *t_OmmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmData_init_(t_OmmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmData_getCovarianceBlock(t_OmmData *self);
              static PyObject *t_OmmData_getKeplerianElementsBlock(t_OmmData *self);
              static PyObject *t_OmmData_getMass(t_OmmData *self);
              static PyObject *t_OmmData_getSpacecraftParametersBlock(t_OmmData *self);
              static PyObject *t_OmmData_getTLEBlock(t_OmmData *self);
              static PyObject *t_OmmData_getUserDefinedBlock(t_OmmData *self);
              static PyObject *t_OmmData_validate(t_OmmData *self, PyObject *arg);
              static PyObject *t_OmmData_get__covarianceBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__keplerianElementsBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__mass(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__spacecraftParametersBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__tLEBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__userDefinedBlock(t_OmmData *self, void *data);
              static PyGetSetDef t_OmmData__fields_[] = {
                DECLARE_GET_FIELD(t_OmmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OmmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OmmData, mass),
                DECLARE_GET_FIELD(t_OmmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OmmData, tLEBlock),
                DECLARE_GET_FIELD(t_OmmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmData__methods_[] = {
                DECLARE_METHOD(t_OmmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getTLEBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmData)[] = {
                { Py_tp_methods, t_OmmData__methods_ },
                { Py_tp_init, (void *) t_OmmData_init_ },
                { Py_tp_getset, t_OmmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OmmData, t_OmmData, OmmData);

              void t_OmmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmData), &PY_TYPE_DEF(OmmData), module, "OmmData", 0);
              }

              void t_OmmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "class_", make_descriptor(OmmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "wrapfn_", make_descriptor(t_OmmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OmmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmData::initializeClass, 1)))
                  return NULL;
                return t_OmmData::wrap_Object(OmmData(((t_OmmData *) arg)->object.this$));
              }
              static PyObject *t_OmmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmData_init_(t_OmmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a4((jobject) NULL);
                jdouble a5;
                OmmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkD", ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = OmmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OmmData_getCovarianceBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OmmData_getKeplerianElementsBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OmmData_getMass(t_OmmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmData_getSpacecraftParametersBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OmmData_getTLEBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle result((jobject) NULL);
                OBJ_CALL(result = self->object.getTLEBlock());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmTle::wrap_Object(result);
              }

              static PyObject *t_OmmData_getUserDefinedBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OmmData_validate(t_OmmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_OmmData_get__covarianceBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__keplerianElementsBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__mass(t_OmmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OmmData_get__spacecraftParametersBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__tLEBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle value((jobject) NULL);
                OBJ_CALL(value = self->object.getTLEBlock());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmTle::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__userDefinedBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/orekit/rugged/raster/PythonTile.h"
#include "java/lang/Throwable.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *PythonTile::class$ = NULL;
        jmethodID *PythonTile::mids$ = NULL;
        bool PythonTile::live$ = false;

        jclass PythonTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/PythonTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_cellIntersection_7e043202c789e76d] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getElevationAtIndices_6d920aab27f0a3d2] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_9e72cb20adb363fb] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_9e72cb20adb363fb] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_ce4c02d583456bc9] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_d6ab429752e7c267] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_9981f74b2d109da6] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_bb268b89f4ba5b33] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_ce4c02d583456bc9] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_d6ab429752e7c267] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_9981f74b2d109da6] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_9981f74b2d109da6] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_9981f74b2d109da6] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_d6ab429752e7c267] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_82f92590f4247da1] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setElevation_e98d7b3e971b6087] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_d690bb44b994cfa6] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");
            mids$[mid_tileUpdateCompleted_ff7cb6c242604316] = env->getMethodID(cls, "tileUpdateCompleted", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTile::PythonTile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonTile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonTile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonTile::pythonExtension(jlong a0) const
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
    namespace rugged {
      namespace raster {
        static PyObject *t_PythonTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTile_init_(t_PythonTile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTile_finalize(t_PythonTile *self);
        static PyObject *t_PythonTile_pythonExtension(t_PythonTile *self, PyObject *args);
        static jobject JNICALL t_PythonTile_cellIntersection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jint a3);
        static jdouble JNICALL t_PythonTile_getElevationAtIndices1(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
        static jint JNICALL t_PythonTile_getFloorLatitudeIndex2(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jint JNICALL t_PythonTile_getFloorLongitudeIndex3(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jdouble JNICALL t_PythonTile_getLatitudeAtIndex4(JNIEnv *jenv, jobject jobj, jint a0);
        static jint JNICALL t_PythonTile_getLatitudeRows5(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_getLatitudeStep6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonTile_getLocation7(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static jdouble JNICALL t_PythonTile_getLongitudeAtIndex8(JNIEnv *jenv, jobject jobj, jint a0);
        static jint JNICALL t_PythonTile_getLongitudeColumns9(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_getLongitudeStep10(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_getMaxElevation11(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonTile_getMaxElevationLatitudeIndex12(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonTile_getMaxElevationLongitudeIndex13(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_getMaximumLatitude14(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_getMaximumLongitude15(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_getMinElevation16(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonTile_getMinElevationLatitudeIndex17(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonTile_getMinElevationLongitudeIndex18(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_getMinimumLatitude19(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_getMinimumLongitude20(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonTile_interpolateElevation21(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static void JNICALL t_PythonTile_pythonDecRef22(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonTile_setElevation23(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jdouble a2);
        static void JNICALL t_PythonTile_setGeometry24(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5);
        static void JNICALL t_PythonTile_tileUpdateCompleted25(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonTile_get__self(t_PythonTile *self, void *data);
        static PyGetSetDef t_PythonTile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTile__methods_[] = {
          DECLARE_METHOD(t_PythonTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTile)[] = {
          { Py_tp_methods, t_PythonTile__methods_ },
          { Py_tp_init, (void *) t_PythonTile_init_ },
          { Py_tp_getset, t_PythonTile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTile, t_PythonTile, PythonTile);

        void t_PythonTile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTile), &PY_TYPE_DEF(PythonTile), module, "PythonTile", 1);
        }

        void t_PythonTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTile), "class_", make_descriptor(PythonTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTile), "wrapfn_", make_descriptor(t_PythonTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTile::initializeClass);
          JNINativeMethod methods[] = {
            { "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;", (void *) t_PythonTile_cellIntersection0 },
            { "getElevationAtIndices", "(II)D", (void *) t_PythonTile_getElevationAtIndices1 },
            { "getFloorLatitudeIndex", "(D)I", (void *) t_PythonTile_getFloorLatitudeIndex2 },
            { "getFloorLongitudeIndex", "(D)I", (void *) t_PythonTile_getFloorLongitudeIndex3 },
            { "getLatitudeAtIndex", "(I)D", (void *) t_PythonTile_getLatitudeAtIndex4 },
            { "getLatitudeRows", "()I", (void *) t_PythonTile_getLatitudeRows5 },
            { "getLatitudeStep", "()D", (void *) t_PythonTile_getLatitudeStep6 },
            { "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;", (void *) t_PythonTile_getLocation7 },
            { "getLongitudeAtIndex", "(I)D", (void *) t_PythonTile_getLongitudeAtIndex8 },
            { "getLongitudeColumns", "()I", (void *) t_PythonTile_getLongitudeColumns9 },
            { "getLongitudeStep", "()D", (void *) t_PythonTile_getLongitudeStep10 },
            { "getMaxElevation", "()D", (void *) t_PythonTile_getMaxElevation11 },
            { "getMaxElevationLatitudeIndex", "()I", (void *) t_PythonTile_getMaxElevationLatitudeIndex12 },
            { "getMaxElevationLongitudeIndex", "()I", (void *) t_PythonTile_getMaxElevationLongitudeIndex13 },
            { "getMaximumLatitude", "()D", (void *) t_PythonTile_getMaximumLatitude14 },
            { "getMaximumLongitude", "()D", (void *) t_PythonTile_getMaximumLongitude15 },
            { "getMinElevation", "()D", (void *) t_PythonTile_getMinElevation16 },
            { "getMinElevationLatitudeIndex", "()I", (void *) t_PythonTile_getMinElevationLatitudeIndex17 },
            { "getMinElevationLongitudeIndex", "()I", (void *) t_PythonTile_getMinElevationLongitudeIndex18 },
            { "getMinimumLatitude", "()D", (void *) t_PythonTile_getMinimumLatitude19 },
            { "getMinimumLongitude", "()D", (void *) t_PythonTile_getMinimumLongitude20 },
            { "interpolateElevation", "(DD)D", (void *) t_PythonTile_interpolateElevation21 },
            { "pythonDecRef", "()V", (void *) t_PythonTile_pythonDecRef22 },
            { "setElevation", "(IID)V", (void *) t_PythonTile_setElevation23 },
            { "setGeometry", "(DDDDII)V", (void *) t_PythonTile_setGeometry24 },
            { "tileUpdateCompleted", "()V", (void *) t_PythonTile_tileUpdateCompleted25 },
          };
          env->registerNatives(cls, methods, 26);
        }

        static PyObject *t_PythonTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTile::initializeClass, 1)))
            return NULL;
          return t_PythonTile::wrap_Object(PythonTile(((t_PythonTile *) arg)->object.this$));
        }
        static PyObject *t_PythonTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTile_init_(t_PythonTile *self, PyObject *args, PyObject *kwds)
        {
          PythonTile object((jobject) NULL);

          INT_CALL(object = PythonTile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTile_finalize(t_PythonTile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTile_pythonExtension(t_PythonTile *self, PyObject *args)
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

        static jobject JNICALL t_PythonTile_cellIntersection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jint a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(::org::orekit::rugged::utils::NormalizedGeodeticPoint(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *result = PyObject_CallMethod(obj, "cellIntersection", "OOii", o0, o1, (int) a2, (int) a3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("cellIntersection", result);
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

        static jdouble JNICALL t_PythonTile_getElevationAtIndices1(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getElevationAtIndices", "ii", (int) a0, (int) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getElevationAtIndices", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jint JNICALL t_PythonTile_getFloorLatitudeIndex2(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getFloorLatitudeIndex", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getFloorLatitudeIndex", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jint JNICALL t_PythonTile_getFloorLongitudeIndex3(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getFloorLongitudeIndex", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getFloorLongitudeIndex", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonTile_getLatitudeAtIndex4(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getLatitudeAtIndex", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getLatitudeAtIndex", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jint JNICALL t_PythonTile_getLatitudeRows5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getLatitudeRows", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getLatitudeRows", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonTile_getLatitudeStep6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getLatitudeStep", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getLatitudeStep", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonTile_getLocation7(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::rugged::raster::Tile$Location value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getLocation", "dd", (double) a0, (double) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::rugged::raster::Tile$Location::initializeClass, &value))
          {
            throwTypeError("getLocation", result);
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

        static jdouble JNICALL t_PythonTile_getLongitudeAtIndex8(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getLongitudeAtIndex", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getLongitudeAtIndex", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jint JNICALL t_PythonTile_getLongitudeColumns9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getLongitudeColumns", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getLongitudeColumns", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonTile_getLongitudeStep10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getLongitudeStep", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getLongitudeStep", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonTile_getMaxElevation11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxElevation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMaxElevation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jint JNICALL t_PythonTile_getMaxElevationLatitudeIndex12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxElevationLatitudeIndex", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxElevationLatitudeIndex", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jint JNICALL t_PythonTile_getMaxElevationLongitudeIndex13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxElevationLongitudeIndex", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxElevationLongitudeIndex", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonTile_getMaximumLatitude14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMaximumLatitude", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMaximumLatitude", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonTile_getMaximumLongitude15(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMaximumLongitude", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMaximumLongitude", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonTile_getMinElevation16(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMinElevation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMinElevation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jint JNICALL t_PythonTile_getMinElevationLatitudeIndex17(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMinElevationLatitudeIndex", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMinElevationLatitudeIndex", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jint JNICALL t_PythonTile_getMinElevationLongitudeIndex18(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMinElevationLongitudeIndex", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMinElevationLongitudeIndex", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonTile_getMinimumLatitude19(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMinimumLatitude", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMinimumLatitude", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonTile_getMinimumLongitude20(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMinimumLongitude", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMinimumLongitude", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonTile_interpolateElevation21(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "interpolateElevation", "dd", (double) a0, (double) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("interpolateElevation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonTile_pythonDecRef22(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonTile_setElevation23(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "setElevation", "iid", (int) a0, (int) a1, (double) a2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTile_setGeometry24(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "setGeometry", "ddddii", (double) a0, (double) a1, (double) a2, (double) a3, (int) a4, (int) a5);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTile_tileUpdateCompleted25(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTile::mids$[PythonTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "tileUpdateCompleted", "");
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonTile_get__self(t_PythonTile *self, void *data)
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
#include "org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *AbstractUnivariateDifferentiableSolver::mids$ = NULL;
        bool AbstractUnivariateDifferentiableSolver::live$ = false;

        jclass AbstractUnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeObjectiveValueAndDerivative_f7de6915022fec9a] = env->getMethodID(cls, "computeObjectiveValueAndDerivative", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_setup_4c280941c23764b2] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateDifferentiableSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateDifferentiableSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateDifferentiableSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateDifferentiableSolver, t_AbstractUnivariateDifferentiableSolver, AbstractUnivariateDifferentiableSolver);
        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_Object(const AbstractUnivariateDifferentiableSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateDifferentiableSolver), &PY_TYPE_DEF(AbstractUnivariateDifferentiableSolver), module, "AbstractUnivariateDifferentiableSolver", 0);
        }

        void t_AbstractUnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "class_", make_descriptor(AbstractUnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateDifferentiableSolver::wrap_Object(AbstractUnivariateDifferentiableSolver(((t_AbstractUnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Gradient::class$ = NULL;
        jmethodID *Gradient::mids$ = NULL;
        bool Gradient::live$ = false;

        jclass Gradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Gradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4e382a6827bb5ab6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_bb630ae4b8ab9248] = env->getMethodID(cls, "<init>", "(D[D)V");
            mids$[mid_abs_9d89382e9667f8f2] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acos_9d89382e9667f8f2] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acosh_9d89382e9667f8f2] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_c787c1374ffea9a6] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_a02745480e33af17] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asin_9d89382e9667f8f2] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asinh_9d89382e9667f8f2] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan_9d89382e9667f8f2] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan2_c787c1374ffea9a6] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atanh_9d89382e9667f8f2] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cbrt_9d89382e9667f8f2] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ceil_9d89382e9667f8f2] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_compose_79788fd98ed5043c] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_constant_3a4e4a2ef4d0cef8] = env->getStaticMethodID(cls, "constant", "(ID)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_c787c1374ffea9a6] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_a02745480e33af17] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cos_9d89382e9667f8f2] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cosh_9d89382e9667f8f2] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_c787c1374ffea9a6] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_a02745480e33af17] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_9d89382e9667f8f2] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_expm1_9d89382e9667f8f2] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_floor_9d89382e9667f8f2] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_96a7b143fbea6ef9] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_be783177b060994b] = env->getMethodID(cls, "getGradient", "()[D");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_7f744e43a2f098aa] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPartialDerivative_ce4c02d583456bc9] = env->getMethodID(cls, "getPartialDerivative", "(I)D");
            mids$[mid_getPi_9d89382e9667f8f2] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_c787c1374ffea9a6] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_99958680a052ee19] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_cdc08de3ece5adb3] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/Gradient;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_5eccced812f07b95] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_47bdf4d42c389022] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_850c09fe98e559b7] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_05b6d17fc9d40440] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_bbd82dad01395811] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_035453087584d40a] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log_9d89382e9667f8f2] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log10_9d89382e9667f8f2] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log1p_9d89382e9667f8f2] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_c787c1374ffea9a6] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_a02745480e33af17] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_37d83d9b8cd1d783] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_negate_9d89382e9667f8f2] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_newInstance_a02745480e33af17] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_c787c1374ffea9a6] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_a02745480e33af17] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_37d83d9b8cd1d783] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_a7a1776857b51e19] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_reciprocal_9d89382e9667f8f2] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_c787c1374ffea9a6] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_a02745480e33af17] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rint_9d89382e9667f8f2] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rootN_37d83d9b8cd1d783] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_scalb_37d83d9b8cd1d783] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sign_9d89382e9667f8f2] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sin_9d89382e9667f8f2] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_9d89382e9667f8f2] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_9d89382e9667f8f2] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_c787c1374ffea9a6] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_a02745480e33af17] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tan_9d89382e9667f8f2] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tanh_9d89382e9667f8f2] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_taylor_a40ce4fdf6559ac0] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_9d89382e9667f8f2] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_toDerivativeStructure_ce114c5dd035d753] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_9d89382e9667f8f2] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ulp_9d89382e9667f8f2] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_variable_bbdfccc349a0164b] = env->getStaticMethodID(cls, "variable", "(IID)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gradient::Gradient(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4e382a6827bb5ab6, a0.this$)) {}

        Gradient::Gradient(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb630ae4b8ab9248, a0, a1.this$)) {}

        Gradient Gradient::abs() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_abs_9d89382e9667f8f2]));
        }

        Gradient Gradient::acos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acos_9d89382e9667f8f2]));
        }

        Gradient Gradient::acosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acosh_9d89382e9667f8f2]));
        }

        Gradient Gradient::add(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::add(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_a02745480e33af17], a0));
        }

        Gradient Gradient::asin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asin_9d89382e9667f8f2]));
        }

        Gradient Gradient::asinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asinh_9d89382e9667f8f2]));
        }

        Gradient Gradient::atan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan_9d89382e9667f8f2]));
        }

        Gradient Gradient::atan2(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan2_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::atanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atanh_9d89382e9667f8f2]));
        }

        Gradient Gradient::cbrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cbrt_9d89382e9667f8f2]));
        }

        Gradient Gradient::ceil() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ceil_9d89382e9667f8f2]));
        }

        Gradient Gradient::compose(const JArray< jdouble > & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_compose_79788fd98ed5043c], a0.this$));
        }

        Gradient Gradient::constant(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_constant_3a4e4a2ef4d0cef8], a0, a1));
        }

        Gradient Gradient::copySign(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::copySign(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_a02745480e33af17], a0));
        }

        Gradient Gradient::cos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cos_9d89382e9667f8f2]));
        }

        Gradient Gradient::cosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cosh_9d89382e9667f8f2]));
        }

        Gradient Gradient::divide(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::divide(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_a02745480e33af17], a0));
        }

        jboolean Gradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        Gradient Gradient::exp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_exp_9d89382e9667f8f2]));
        }

        Gradient Gradient::expm1() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_expm1_9d89382e9667f8f2]));
        }

        Gradient Gradient::floor() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_floor_9d89382e9667f8f2]));
        }

        jint Gradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::differentiation::GradientField Gradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::GradientField(env->callObjectMethod(this$, mids$[mid_getField_96a7b143fbea6ef9]));
        }

        jint Gradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        JArray< jdouble > Gradient::getGradient() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGradient_be783177b060994b]));
        }

        jint Gradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        jdouble Gradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_7f744e43a2f098aa], a0.this$);
        }

        jdouble Gradient::getPartialDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_ce4c02d583456bc9], a0);
        }

        Gradient Gradient::getPi() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_getPi_9d89382e9667f8f2]));
        }

        jdouble Gradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        jdouble Gradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
        }

        jint Gradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        Gradient Gradient::hypot(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_hypot_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::linearCombination(const JArray< jdouble > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_99958680a052ee19], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const JArray< Gradient > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_cdc08de3ece5adb3], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_5eccced812f07b95], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_47bdf4d42c389022], a0, a1.this$, a2, a3.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_850c09fe98e559b7], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_05b6d17fc9d40440], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5, const Gradient & a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_bbd82dad01395811], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5, jdouble a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_035453087584d40a], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        Gradient Gradient::log() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log_9d89382e9667f8f2]));
        }

        Gradient Gradient::log10() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log10_9d89382e9667f8f2]));
        }

        Gradient Gradient::log1p() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log1p_9d89382e9667f8f2]));
        }

        Gradient Gradient::multiply(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::multiply(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_a02745480e33af17], a0));
        }

        Gradient Gradient::multiply(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_37d83d9b8cd1d783], a0));
        }

        Gradient Gradient::negate() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_negate_9d89382e9667f8f2]));
        }

        Gradient Gradient::newInstance(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_newInstance_a02745480e33af17], a0));
        }

        Gradient Gradient::pow(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::pow(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_a02745480e33af17], a0));
        }

        Gradient Gradient::pow(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_37d83d9b8cd1d783], a0));
        }

        Gradient Gradient::pow(jdouble a0, const Gradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_pow_a7a1776857b51e19], a0, a1.this$));
        }

        Gradient Gradient::reciprocal() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_reciprocal_9d89382e9667f8f2]));
        }

        Gradient Gradient::remainder(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::remainder(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_a02745480e33af17], a0));
        }

        Gradient Gradient::rint() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rint_9d89382e9667f8f2]));
        }

        Gradient Gradient::rootN(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rootN_37d83d9b8cd1d783], a0));
        }

        Gradient Gradient::scalb(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_scalb_37d83d9b8cd1d783], a0));
        }

        Gradient Gradient::sign() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sign_9d89382e9667f8f2]));
        }

        Gradient Gradient::sin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sin_9d89382e9667f8f2]));
        }

        ::org::hipparchus::util::FieldSinCos Gradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        Gradient Gradient::sinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sinh_9d89382e9667f8f2]));
        }

        ::org::hipparchus::util::FieldSinhCosh Gradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        Gradient Gradient::sqrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sqrt_9d89382e9667f8f2]));
        }

        Gradient Gradient::subtract(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_c787c1374ffea9a6], a0.this$));
        }

        Gradient Gradient::subtract(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_a02745480e33af17], a0));
        }

        Gradient Gradient::tan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tan_9d89382e9667f8f2]));
        }

        Gradient Gradient::tanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tanh_9d89382e9667f8f2]));
        }

        jdouble Gradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_a40ce4fdf6559ac0], a0.this$);
        }

        Gradient Gradient::toDegrees() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toDegrees_9d89382e9667f8f2]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure Gradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_ce114c5dd035d753]));
        }

        Gradient Gradient::toRadians() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toRadians_9d89382e9667f8f2]));
        }

        Gradient Gradient::ulp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ulp_9d89382e9667f8f2]));
        }

        Gradient Gradient::variable(jint a0, jint a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_variable_bbdfccc349a0164b], a0, a1, a2));
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
        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gradient_abs(t_Gradient *self);
        static PyObject *t_Gradient_acos(t_Gradient *self);
        static PyObject *t_Gradient_acosh(t_Gradient *self);
        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_asin(t_Gradient *self);
        static PyObject *t_Gradient_asinh(t_Gradient *self);
        static PyObject *t_Gradient_atan(t_Gradient *self);
        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_atanh(t_Gradient *self);
        static PyObject *t_Gradient_cbrt(t_Gradient *self);
        static PyObject *t_Gradient_ceil(t_Gradient *self);
        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_cos(t_Gradient *self);
        static PyObject *t_Gradient_cosh(t_Gradient *self);
        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_exp(t_Gradient *self);
        static PyObject *t_Gradient_expm1(t_Gradient *self);
        static PyObject *t_Gradient_floor(t_Gradient *self);
        static PyObject *t_Gradient_getExponent(t_Gradient *self);
        static PyObject *t_Gradient_getField(t_Gradient *self);
        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self);
        static PyObject *t_Gradient_getGradient(t_Gradient *self);
        static PyObject *t_Gradient_getOrder(t_Gradient *self);
        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_getPi(t_Gradient *self);
        static PyObject *t_Gradient_getReal(t_Gradient *self);
        static PyObject *t_Gradient_getValue(t_Gradient *self);
        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_log(t_Gradient *self);
        static PyObject *t_Gradient_log10(t_Gradient *self);
        static PyObject *t_Gradient_log1p(t_Gradient *self);
        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_negate(t_Gradient *self);
        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_reciprocal(t_Gradient *self);
        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_rint(t_Gradient *self);
        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_sign(t_Gradient *self);
        static PyObject *t_Gradient_sin(t_Gradient *self);
        static PyObject *t_Gradient_sinCos(t_Gradient *self);
        static PyObject *t_Gradient_sinh(t_Gradient *self);
        static PyObject *t_Gradient_sinhCosh(t_Gradient *self);
        static PyObject *t_Gradient_sqrt(t_Gradient *self);
        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_tan(t_Gradient *self);
        static PyObject *t_Gradient_tanh(t_Gradient *self);
        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_toDegrees(t_Gradient *self);
        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self);
        static PyObject *t_Gradient_toRadians(t_Gradient *self);
        static PyObject *t_Gradient_ulp(t_Gradient *self);
        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data);
        static PyGetSetDef t_Gradient__fields_[] = {
          DECLARE_GET_FIELD(t_Gradient, exponent),
          DECLARE_GET_FIELD(t_Gradient, field),
          DECLARE_GET_FIELD(t_Gradient, freeParameters),
          DECLARE_GET_FIELD(t_Gradient, gradient),
          DECLARE_GET_FIELD(t_Gradient, order),
          DECLARE_GET_FIELD(t_Gradient, pi),
          DECLARE_GET_FIELD(t_Gradient, real),
          DECLARE_GET_FIELD(t_Gradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Gradient__methods_[] = {
          DECLARE_METHOD(t_Gradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, add, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan2, METH_O),
          DECLARE_METHOD(t_Gradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, compose, METH_O),
          DECLARE_METHOD(t_Gradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, hypot, METH_O),
          DECLARE_METHOD(t_Gradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, log, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, newInstance, METH_O),
          DECLARE_METHOD(t_Gradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, rootN, METH_O),
          DECLARE_METHOD(t_Gradient, scalb, METH_O),
          DECLARE_METHOD(t_Gradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, taylor, METH_O),
          DECLARE_METHOD(t_Gradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gradient)[] = {
          { Py_tp_methods, t_Gradient__methods_ },
          { Py_tp_init, (void *) t_Gradient_init_ },
          { Py_tp_getset, t_Gradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gradient, t_Gradient, Gradient);

        void t_Gradient::install(PyObject *module)
        {
          installType(&PY_TYPE(Gradient), &PY_TYPE_DEF(Gradient), module, "Gradient", 0);
        }

        void t_Gradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "class_", make_descriptor(Gradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "wrapfn_", make_descriptor(t_Gradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gradient::initializeClass, 1)))
            return NULL;
          return t_Gradient::wrap_Object(Gradient(((t_Gradient *) arg)->object.this$));
        }
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = Gradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                INT_CALL(object = Gradient(a0, a1));
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

        static PyObject *t_Gradient_abs(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_Gradient_asin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_asinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_Gradient_atanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cbrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ceil(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::constant(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_Gradient_cos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Gradient_exp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_expm1(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_floor(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getExponent(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getField(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::GradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(result);
        }

        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getGradient(t_Gradient *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return result.wrap();
        }

        static PyObject *t_Gradient_getOrder(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              jdouble result;

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_Gradient_getPi(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getReal(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_getValue(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              JArray< Gradient > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient a6((jobject) NULL);
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              jdouble a6;
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_Gradient_log(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log10(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log1p(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Gradient_negate(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg)
        {
          jdouble a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          Gradient a1((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", Gradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::pow(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_Gradient_reciprocal(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_Gradient_rint(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_Gradient_sign(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinCos(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinhCosh(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sqrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_Gradient_tan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_tanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_Gradient_toDegrees(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_Gradient_toRadians(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ulp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::variable(a0, a1, a2));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }

        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::GradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return value.wrap();
        }

        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data)
        {
          Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_Gradient::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data)
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
          mids$[mid_init$_3cc95a4236015ec7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/bodies/CR3BPSystem;D)V");
          mids$[mid_compute_e453650857dc35f7] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/LibrationOrbitType;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunov_78e01095d7eced90] = env->getMethodID(cls, "computeLyapunov", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_9981f74b2d109da6] = env->getMethodID(cls, "getOrbitalPeriod", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPDifferentialCorrection::CR3BPDifferentialCorrection(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::bodies::CR3BPSystem & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3cc95a4236015ec7, a0.this$, a1.this$, a2)) {}

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::compute(const ::org::orekit::orbits::LibrationOrbitType & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_compute_e453650857dc35f7], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::computeLyapunov() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunov_78e01095d7eced90]));
      }

      jdouble CR3BPDifferentialCorrection::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_9981f74b2d109da6]);
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
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldCombinedDerivatives::class$ = NULL;
        jmethodID *FieldCombinedDerivatives::mids$ = NULL;
        bool FieldCombinedDerivatives::live$ = false;

        jclass FieldCombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldCombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7709cb51638b2622] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAdditionalDerivatives_94ed2e0620f8833d] = env->getMethodID(cls, "getAdditionalDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMainStateDerivativesIncrements_94ed2e0620f8833d] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldCombinedDerivatives::FieldCombinedDerivatives(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7709cb51638b2622, a0.this$, a1.this$)) {}

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_94ed2e0620f8833d]));
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
      namespace integration {
        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args);
        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data);
        static PyGetSetDef t_FieldCombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, mainStateDerivativesIncrements),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldCombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_FieldCombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldCombinedDerivatives)[] = {
          { Py_tp_methods, t_FieldCombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_FieldCombinedDerivatives_init_ },
          { Py_tp_getset, t_FieldCombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldCombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldCombinedDerivatives, t_FieldCombinedDerivatives, FieldCombinedDerivatives);
        PyObject *t_FieldCombinedDerivatives::wrap_Object(const FieldCombinedDerivatives& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldCombinedDerivatives::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldCombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldCombinedDerivatives), &PY_TYPE_DEF(FieldCombinedDerivatives), module, "FieldCombinedDerivatives", 0);
        }

        void t_FieldCombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "class_", make_descriptor(FieldCombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "wrapfn_", make_descriptor(t_FieldCombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldCombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_FieldCombinedDerivatives::wrap_Object(FieldCombinedDerivatives(((t_FieldCombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldCombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldCombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldCombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/Record.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Record::class$ = NULL;
          jmethodID *Record::mids$ = NULL;
          bool Record::live$ = false;

          jclass Record::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Record");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMisc_d2c8eb4129821f0e] = env->getMethodID(cls, "getMisc", "()Ljava/lang/String;");
              mids$[mid_getRecordType_6b1d5e4fef5a106c] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getFieldsNumber_d6ab429752e7c267] = env->getMethodID(cls, "getFieldsNumber", "()I");
              mids$[mid_getField_c81987d6b0e2977a] = env->getMethodID(cls, "getField", "(I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String Record::getMisc() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMisc_d2c8eb4129821f0e]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType Record::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_6b1d5e4fef5a106c]));
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
          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_getMisc(t_Record *self);
          static PyObject *t_Record_getRecordType(t_Record *self);
          static PyObject *t_Record_get__misc(t_Record *self, void *data);
          static PyObject *t_Record_get__recordType(t_Record *self, void *data);
          static PyGetSetDef t_Record__fields_[] = {
            DECLARE_GET_FIELD(t_Record, misc),
            DECLARE_GET_FIELD(t_Record, recordType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Record__methods_[] = {
            DECLARE_METHOD(t_Record, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, getMisc, METH_NOARGS),
            DECLARE_METHOD(t_Record, getRecordType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Record)[] = {
            { Py_tp_methods, t_Record__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Record__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Record)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Record, t_Record, Record);

          void t_Record::install(PyObject *module)
          {
            installType(&PY_TYPE(Record), &PY_TYPE_DEF(Record), module, "Record", 0);
          }

          void t_Record::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "class_", make_descriptor(Record::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "wrapfn_", make_descriptor(t_Record::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Record::initializeClass, 1)))
              return NULL;
            return t_Record::wrap_Object(Record(((t_Record *) arg)->object.this$));
          }
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Record::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Record_getMisc(t_Record *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMisc());
            return j2p(result);
          }

          static PyObject *t_Record_getRecordType(t_Record *self)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);
            OBJ_CALL(result = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
          }

          static PyObject *t_Record_get__misc(t_Record *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMisc());
            return j2p(value);
          }

          static PyObject *t_Record_get__recordType(t_Record *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/IllinoisSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *IllinoisSolver::class$ = NULL;
        jmethodID *IllinoisSolver::mids$ = NULL;
        bool IllinoisSolver::live$ = false;

        jclass IllinoisSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/IllinoisSolver");

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

        IllinoisSolver::IllinoisSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}
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
        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args);
        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data);
        static PyGetSetDef t_IllinoisSolver__fields_[] = {
          DECLARE_GET_FIELD(t_IllinoisSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IllinoisSolver__methods_[] = {
          DECLARE_METHOD(t_IllinoisSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IllinoisSolver)[] = {
          { Py_tp_methods, t_IllinoisSolver__methods_ },
          { Py_tp_init, (void *) t_IllinoisSolver_init_ },
          { Py_tp_getset, t_IllinoisSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IllinoisSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(IllinoisSolver, t_IllinoisSolver, IllinoisSolver);
        PyObject *t_IllinoisSolver::wrap_Object(const IllinoisSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IllinoisSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IllinoisSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(IllinoisSolver), &PY_TYPE_DEF(IllinoisSolver), module, "IllinoisSolver", 0);
        }

        void t_IllinoisSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "class_", make_descriptor(IllinoisSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "wrapfn_", make_descriptor(t_IllinoisSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IllinoisSolver::initializeClass, 1)))
            return NULL;
          return t_IllinoisSolver::wrap_Object(IllinoisSolver(((t_IllinoisSolver *) arg)->object.this$));
        }
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IllinoisSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              IllinoisSolver object((jobject) NULL);

              INT_CALL(object = IllinoisSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = IllinoisSolver(a0));
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
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IllinoisSolver(a0, a1));
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
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IllinoisSolver(a0, a1, a2));
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
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaIntegrator::live$ = false;

        jclass ClassicalRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_335bb385589eab1a] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegrator::ClassicalRungeKuttaIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        JArray< JArray< jdouble > > ClassicalRungeKuttaIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
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
        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegrator, t_ClassicalRungeKuttaIntegrator, ClassicalRungeKuttaIntegrator);

        void t_ClassicalRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaIntegrator), module, "ClassicalRungeKuttaIntegrator", 0);
        }

        void t_ClassicalRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "class_", make_descriptor(ClassicalRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegrator::wrap_Object(ClassicalRungeKuttaIntegrator(((t_ClassicalRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldEventDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEventDetector::class$ = NULL;
        jmethodID *PythonFieldEventDetector::mids$ = NULL;
        bool PythonFieldEventDetector::live$ = false;

        jclass PythonFieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_ae50020f8bfe1c59] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_0f2b5ee7b716ac92] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_08d37e3f77b7239d] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEventDetector::PythonFieldEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldEventDetector::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace events {
        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args);
        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self);
        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data);
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data);
        static PyGetSetDef t_PythonFieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventDetector)[] = {
          { Py_tp_methods, t_PythonFieldEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEventDetector_init_ },
          { Py_tp_getset, t_PythonFieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEventDetector, t_PythonFieldEventDetector, PythonFieldEventDetector);
        PyObject *t_PythonFieldEventDetector::wrap_Object(const PythonFieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEventDetector), &PY_TYPE_DEF(PythonFieldEventDetector), module, "PythonFieldEventDetector", 1);
        }

        void t_PythonFieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "class_", make_descriptor(PythonFieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "wrapfn_", make_descriptor(t_PythonFieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;", (void *) t_PythonFieldEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;", (void *) t_PythonFieldEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonFieldEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEventDetector::wrap_Object(PythonFieldEventDetector(((t_PythonFieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEventDetector object((jobject) NULL);

          INT_CALL(object = PythonFieldEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
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

        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
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

        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
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

        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getThreshold", result);
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

        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data)
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
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials.h"
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

            ::java::lang::Class *FieldGHmsjPolynomials::class$ = NULL;
            jmethodID *FieldGHmsjPolynomials::mids$ = NULL;
            bool FieldGHmsjPolynomials::live$ = false;

            jclass FieldGHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_47ca3d039a9c38c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getGmsj_641e4ebbc4b1ea55] = env->getMethodID(cls, "getGmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHmsj_641e4ebbc4b1ea55] = env->getMethodID(cls, "getHmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdAlpha_641e4ebbc4b1ea55] = env->getMethodID(cls, "getdGmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdBeta_641e4ebbc4b1ea55] = env->getMethodID(cls, "getdGmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdh_641e4ebbc4b1ea55] = env->getMethodID(cls, "getdGmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdk_641e4ebbc4b1ea55] = env->getMethodID(cls, "getdGmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdAlpha_641e4ebbc4b1ea55] = env->getMethodID(cls, "getdHmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdBeta_641e4ebbc4b1ea55] = env->getMethodID(cls, "getdHmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdh_641e4ebbc4b1ea55] = env->getMethodID(cls, "getdHmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdk_641e4ebbc4b1ea55] = env->getMethodID(cls, "getdHmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHmsjPolynomials::FieldGHmsjPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47ca3d039a9c38c2, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGmsj_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHmsj_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdAlpha_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdBeta_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdh_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdk_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdAlpha_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdBeta_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdh_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdk_641e4ebbc4b1ea55], a0, a1, a2));
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
            static PyObject *t_FieldGHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHmsjPolynomials_of_(t_FieldGHmsjPolynomials *self, PyObject *args);
            static int t_FieldGHmsjPolynomials_init_(t_FieldGHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHmsjPolynomials_getGmsj(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getHmsj(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdh(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdk(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdh(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdk(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_get__parameters_(t_FieldGHmsjPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHmsjPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHmsjPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHmsjPolynomials)[] = {
              { Py_tp_methods, t_FieldGHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHmsjPolynomials_init_ },
              { Py_tp_getset, t_FieldGHmsjPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHmsjPolynomials, t_FieldGHmsjPolynomials, FieldGHmsjPolynomials);
            PyObject *t_FieldGHmsjPolynomials::wrap_Object(const FieldGHmsjPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHmsjPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHmsjPolynomials *self = (t_FieldGHmsjPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHmsjPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHmsjPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHmsjPolynomials *self = (t_FieldGHmsjPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHmsjPolynomials), &PY_TYPE_DEF(FieldGHmsjPolynomials), module, "FieldGHmsjPolynomials", 0);
            }

            void t_FieldGHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "class_", make_descriptor(FieldGHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "wrapfn_", make_descriptor(t_FieldGHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHmsjPolynomials::wrap_Object(FieldGHmsjPolynomials(((t_FieldGHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHmsjPolynomials_of_(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHmsjPolynomials_init_(t_FieldGHmsjPolynomials *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;
              ::org::hipparchus::Field a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGHmsjPolynomials(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHmsjPolynomials_getGmsj(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getHmsj(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdh(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdk(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdh(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdk(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHmsjPolynomials_get__parameters_(t_FieldGHmsjPolynomials *self, void *data)
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
        mids$[mid_asIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "asIterator", "()Ljava/util/Iterator;");
        mids$[mid_hasMoreElements_eee3de00fe971136] = env->getMethodID(cls, "hasMoreElements", "()Z");
        mids$[mid_nextElement_704a5bee58538972] = env->getMethodID(cls, "nextElement", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Enumeration::asIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_asIterator_4f613ccd2f803b4b]));
    }

    jboolean Enumeration::hasMoreElements() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasMoreElements_eee3de00fe971136]);
    }

    ::java::lang::Object Enumeration::nextElement() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_nextElement_704a5bee58538972]));
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
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *RegressionResults::class$ = NULL;
        jmethodID *RegressionResults::mids$ = NULL;
        bool RegressionResults::live$ = false;

        jclass RegressionResults::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/RegressionResults");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_89d75cd07da19c78] = env->getMethodID(cls, "<init>", "([D[[DZJIDDDZZ)V");
            mids$[mid_getAdjustedRSquared_9981f74b2d109da6] = env->getMethodID(cls, "getAdjustedRSquared", "()D");
            mids$[mid_getCovarianceOfParameters_6d920aab27f0a3d2] = env->getMethodID(cls, "getCovarianceOfParameters", "(II)D");
            mids$[mid_getErrorSumSquares_9981f74b2d109da6] = env->getMethodID(cls, "getErrorSumSquares", "()D");
            mids$[mid_getMeanSquareError_9981f74b2d109da6] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getNumberOfParameters_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfParameters", "()I");
            mids$[mid_getParameterEstimate_ce4c02d583456bc9] = env->getMethodID(cls, "getParameterEstimate", "(I)D");
            mids$[mid_getParameterEstimates_be783177b060994b] = env->getMethodID(cls, "getParameterEstimates", "()[D");
            mids$[mid_getRSquared_9981f74b2d109da6] = env->getMethodID(cls, "getRSquared", "()D");
            mids$[mid_getRegressionSumSquares_9981f74b2d109da6] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getStdErrorOfEstimate_ce4c02d583456bc9] = env->getMethodID(cls, "getStdErrorOfEstimate", "(I)D");
            mids$[mid_getStdErrorOfEstimates_be783177b060994b] = env->getMethodID(cls, "getStdErrorOfEstimates", "()[D");
            mids$[mid_getTotalSumSquares_9981f74b2d109da6] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_hasIntercept_eee3de00fe971136] = env->getMethodID(cls, "hasIntercept", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegressionResults::RegressionResults(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jboolean a2, jlong a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jboolean a8, jboolean a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89d75cd07da19c78, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        jdouble RegressionResults::getAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAdjustedRSquared_9981f74b2d109da6]);
        }

        jdouble RegressionResults::getCovarianceOfParameters(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovarianceOfParameters_6d920aab27f0a3d2], a0, a1);
        }

        jdouble RegressionResults::getErrorSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getErrorSumSquares_9981f74b2d109da6]);
        }

        jdouble RegressionResults::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_9981f74b2d109da6]);
        }

        jlong RegressionResults::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        jint RegressionResults::getNumberOfParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfParameters_d6ab429752e7c267]);
        }

        jdouble RegressionResults::getParameterEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getParameterEstimate_ce4c02d583456bc9], a0);
        }

        JArray< jdouble > RegressionResults::getParameterEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterEstimates_be783177b060994b]));
        }

        jdouble RegressionResults::getRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquared_9981f74b2d109da6]);
        }

        jdouble RegressionResults::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_9981f74b2d109da6]);
        }

        jdouble RegressionResults::getStdErrorOfEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStdErrorOfEstimate_ce4c02d583456bc9], a0);
        }

        JArray< jdouble > RegressionResults::getStdErrorOfEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStdErrorOfEstimates_be783177b060994b]));
        }

        jdouble RegressionResults::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_9981f74b2d109da6]);
        }

        jboolean RegressionResults::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_eee3de00fe971136]);
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
      namespace regression {
        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args);
        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getN(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self);
        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data);
        static PyGetSetDef t_RegressionResults__fields_[] = {
          DECLARE_GET_FIELD(t_RegressionResults, adjustedRSquared),
          DECLARE_GET_FIELD(t_RegressionResults, errorSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, meanSquareError),
          DECLARE_GET_FIELD(t_RegressionResults, n),
          DECLARE_GET_FIELD(t_RegressionResults, numberOfParameters),
          DECLARE_GET_FIELD(t_RegressionResults, parameterEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, rSquared),
          DECLARE_GET_FIELD(t_RegressionResults, regressionSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, stdErrorOfEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, totalSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegressionResults__methods_[] = {
          DECLARE_METHOD(t_RegressionResults, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, getAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getCovarianceOfParameters, METH_VARARGS),
          DECLARE_METHOD(t_RegressionResults, getErrorSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getN, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getNumberOfParameters, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, hasIntercept, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegressionResults)[] = {
          { Py_tp_methods, t_RegressionResults__methods_ },
          { Py_tp_init, (void *) t_RegressionResults_init_ },
          { Py_tp_getset, t_RegressionResults__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegressionResults)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegressionResults, t_RegressionResults, RegressionResults);

        void t_RegressionResults::install(PyObject *module)
        {
          installType(&PY_TYPE(RegressionResults), &PY_TYPE_DEF(RegressionResults), module, "RegressionResults", 0);
        }

        void t_RegressionResults::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "class_", make_descriptor(RegressionResults::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "wrapfn_", make_descriptor(t_RegressionResults::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegressionResults::initializeClass, 1)))
            return NULL;
          return t_RegressionResults::wrap_Object(RegressionResults(((t_RegressionResults *) arg)->object.this$));
        }
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegressionResults::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          jboolean a2;
          jlong a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jboolean a8;
          jboolean a9;
          RegressionResults object((jobject) NULL);

          if (!parseArgs(args, "[D[[DZJIDDDZZ", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = RegressionResults(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovarianceOfParameters(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovarianceOfParameters", args);
          return NULL;
        }

        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getN(t_RegressionResults *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getParameterEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParameterEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStdErrorOfEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStdErrorOfEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStdErrorOfEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParameterEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStdErrorOfEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Utils.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Utils::class$ = NULL;
        jmethodID *SP3Utils::mids$ = NULL;
        bool SP3Utils::live$ = false;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_RATE_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::CLOCK_UNIT = NULL;
        jdouble SP3Utils::DEFAULT_CLOCK_RATE_VALUE = (jdouble) 0;
        jdouble SP3Utils::DEFAULT_CLOCK_VALUE = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::POSITION_UNIT = NULL;
        jdouble SP3Utils::POS_VEL_BASE_ACCURACY = (jdouble) 0;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_ACCURACY_UNIT = NULL;
        ::org::orekit::utils::units::Unit *SP3Utils::VELOCITY_UNIT = NULL;

        jclass SP3Utils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Utils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_indexAccuracy_9cfad3e6c59fc7b3] = env->getStaticMethodID(cls, "indexAccuracy", "(Lorg/orekit/utils/units/Unit;DD)I");
            mids$[mid_siAccuracy_c9a09b7292346dba] = env->getStaticMethodID(cls, "siAccuracy", "(Lorg/orekit/utils/units/Unit;DI)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_RATE_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_RATE_UNIT", "Lorg/orekit/utils/units/Unit;"));
            CLOCK_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "CLOCK_UNIT", "Lorg/orekit/utils/units/Unit;"));
            DEFAULT_CLOCK_RATE_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_RATE_VALUE");
            DEFAULT_CLOCK_VALUE = env->getStaticDoubleField(cls, "DEFAULT_CLOCK_VALUE");
            POSITION_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POSITION_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "POSITION_UNIT", "Lorg/orekit/utils/units/Unit;"));
            POS_VEL_BASE_ACCURACY = env->getStaticDoubleField(cls, "POS_VEL_BASE_ACCURACY");
            VELOCITY_ACCURACY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_ACCURACY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VELOCITY_UNIT = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "VELOCITY_UNIT", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint SP3Utils::indexAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticIntMethod(cls, mids$[mid_indexAccuracy_9cfad3e6c59fc7b3], a0.this$, a1, a2);
        }

        jdouble SP3Utils::siAccuracy(const ::org::orekit::utils::units::Unit & a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_siAccuracy_c9a09b7292346dba], a0.this$, a1, a2);
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
      namespace sp3 {
        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_SP3Utils__methods_[] = {
          DECLARE_METHOD(t_SP3Utils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, indexAccuracy, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3Utils, siAccuracy, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Utils)[] = {
          { Py_tp_methods, t_SP3Utils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Utils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Utils, t_SP3Utils, SP3Utils);

        void t_SP3Utils::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Utils), &PY_TYPE_DEF(SP3Utils), module, "SP3Utils", 0);
        }

        void t_SP3Utils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "class_", make_descriptor(SP3Utils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "wrapfn_", make_descriptor(t_SP3Utils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Utils::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_RATE_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_RATE_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "CLOCK_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::CLOCK_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_RATE_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_RATE_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "DEFAULT_CLOCK_VALUE", make_descriptor(SP3Utils::DEFAULT_CLOCK_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POSITION_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::POSITION_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "POS_VEL_BASE_ACCURACY", make_descriptor(SP3Utils::POS_VEL_BASE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_ACCURACY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_ACCURACY_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Utils), "VELOCITY_UNIT", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*SP3Utils::VELOCITY_UNIT)));
        }

        static PyObject *t_SP3Utils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Utils::initializeClass, 1)))
            return NULL;
          return t_SP3Utils::wrap_Object(SP3Utils(((t_SP3Utils *) arg)->object.this$));
        }
        static PyObject *t_SP3Utils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Utils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3Utils_indexAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint result;

          if (!parseArgs(args, "kDD", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::indexAccuracy(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError(type, "indexAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Utils_siAccuracy(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "kDI", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3Utils::siAccuracy(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "siAccuracy", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/SpacecraftStateInterpolator.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "java/util/Optional.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftStateInterpolator::class$ = NULL;
      jmethodID *SpacecraftStateInterpolator::mids$ = NULL;
      bool SpacecraftStateInterpolator::live$ = false;

      jclass SpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b744963488fb11c5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b764253cc264c047] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_1567a5431e11bb91] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_0aad11dd3e2442fe] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_282bf014460f9257] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_init$_f652be66d2f5064d] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_checkSampleAndInterpolatorConsistency_e03750a959d556e9] = env->getStaticMethodID(cls, "checkSampleAndInterpolatorConsistency", "(Ljava/util/List;ZZ)V");
          mids$[mid_checkStatesDefinitionsConsistency_aa335fea495d60e0] = env->getStaticMethodID(cls, "checkStatesDefinitionsConsistency", "(Ljava/util/List;)V");
          mids$[mid_getAbsPVAInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOrbitInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_cb151471db4570f0] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_d751c1a57012b438] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_be02af4cea5d51b2] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_interpolate_f2e8566a577b7b64] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b744963488fb11c5, a0, a1.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b764253cc264c047, a0, a1.this$, a2.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1567a5431e11bb91, a0, a1, a2.this$, a3.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0aad11dd3e2442fe, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::time::TimeInterpolator & a4, const ::org::orekit::time::TimeInterpolator & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_282bf014460f9257, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::time::TimeInterpolator & a4, const ::org::orekit::time::TimeInterpolator & a5, const ::org::orekit::time::TimeInterpolator & a6, const ::org::orekit::time::TimeInterpolator & a7) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f652be66d2f5064d, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      void SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(const ::java::util::List & a0, jboolean a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSampleAndInterpolatorConsistency_e03750a959d556e9], a0.this$, a1, a2);
      }

      void SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkStatesDefinitionsConsistency_aa335fea495d60e0], a0.this$);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_aa56605e3771f379]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_aa56605e3771f379]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_aa56605e3771f379]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_aa56605e3771f379]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_aa56605e3771f379]));
      }

      ::org::orekit::frames::Frame SpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_cb151471db4570f0]));
      }

      ::java::util::List SpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_d751c1a57012b438]));
      }

      ::org::orekit::propagation::SpacecraftState SpacecraftStateInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_be02af4cea5d51b2], a0.this$, a1.this$));
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
      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args);
      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_SpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_SpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkSampleAndInterpolatorConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkStatesDefinitionsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_SpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_SpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_SpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(SpacecraftStateInterpolator, t_SpacecraftStateInterpolator, SpacecraftStateInterpolator);
      PyObject *t_SpacecraftStateInterpolator::wrap_Object(const SpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftStateInterpolator), &PY_TYPE_DEF(SpacecraftStateInterpolator), module, "SpacecraftStateInterpolator", 0);
      }

      void t_SpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "class_", make_descriptor(SpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_SpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_SpacecraftStateInterpolator::wrap_Object(SpacecraftStateInterpolator(((t_SpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::TimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::TimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_TimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_TimeInterpolator::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 8:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::TimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::TimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::time::TimeInterpolator a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::time::TimeInterpolator a7((jobject) NULL);
            PyTypeObject **p7;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_TimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_TimeInterpolator::parameters_, &a6, &p6, ::org::orekit::time::t_TimeInterpolator::parameters_, &a7, &p7, ::org::orekit::time::t_TimeInterpolator::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
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

      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        jboolean a2;

        if (!parseArgs(args, "KZZ", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSampleAndInterpolatorConsistency", args);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkStatesDefinitionsConsistency", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/annotation/DefaultDataContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace annotation {

      ::java::lang::Class *DefaultDataContext::class$ = NULL;
      jmethodID *DefaultDataContext::mids$ = NULL;
      bool DefaultDataContext::live$ = false;

      jclass DefaultDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/annotation/DefaultDataContext");

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
  namespace orekit {
    namespace annotation {
      static PyObject *t_DefaultDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultDataContext_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DefaultDataContext__methods_[] = {
        DECLARE_METHOD(t_DefaultDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultDataContext, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultDataContext)[] = {
        { Py_tp_methods, t_DefaultDataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultDataContext, t_DefaultDataContext, DefaultDataContext);

      void t_DefaultDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultDataContext), &PY_TYPE_DEF(DefaultDataContext), module, "DefaultDataContext", 0);
      }

      void t_DefaultDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "class_", make_descriptor(DefaultDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "wrapfn_", make_descriptor(t_DefaultDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultDataContext::initializeClass, 1)))
          return NULL;
        return t_DefaultDataContext::wrap_Object(DefaultDataContext(((t_DefaultDataContext *) arg)->object.this$));
      }
      static PyObject *t_DefaultDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "java/util/List.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/util/Pair.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *AbstractBatchLSModel::class$ = NULL;
        jmethodID *AbstractBatchLSModel::mids$ = NULL;
        bool AbstractBatchLSModel::live$ = false;

        jclass AbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/AbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f278310556712c73] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_createPropagators_8b118ba88c8efb0c] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_fetchEvaluatedMeasurement_80131b0affbf5420] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_getEvaluationsCount_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_d6ab429752e7c267] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedOrbitalParametersDriversForBuilder_9ad7d1bd3e8916dc] = env->getMethodID(cls, "getSelectedOrbitalParametersDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedPropagationDriversForBuilder_9ad7d1bd3e8916dc] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_eee3de00fe971136] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_setEvaluationsCounter_98cb188ac0868226] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_98cb188ac0868226] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_f5f9cd0684e2ab5e] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");
            mids$[mid_configureHarvester_1a5b9825e639ffce] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_88ee223eb65bb3ed] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractBatchLSModel::AbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f278310556712c73, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::Propagator > AbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_createPropagators_8b118ba88c8efb0c], a0.this$));
        }

        void AbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fetchEvaluatedMeasurement_80131b0affbf5420], a0, a1.this$);
        }

        jint AbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_d6ab429752e7c267]);
        }

        jint AbstractBatchLSModel::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_d6ab429752e7c267]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedOrbitalParametersDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedOrbitalParametersDriversForBuilder_9ad7d1bd3e8916dc], a0));
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedPropagationDriversForBuilder_9ad7d1bd3e8916dc], a0));
        }

        jboolean AbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForwardPropagation_eee3de00fe971136]);
        }

        void AbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEvaluationsCounter_98cb188ac0868226], a0.this$);
        }

        void AbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIterationsCounter_98cb188ac0868226], a0.this$);
        }

        ::org::hipparchus::util::Pair AbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_f5f9cd0684e2ab5e], a0.this$));
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
      namespace leastsquares {
        static PyObject *t_AbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractBatchLSModel_init_(t_AbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractBatchLSModel_createPropagators(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_fetchEvaluatedMeasurement(t_AbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_AbstractBatchLSModel_getEvaluationsCount(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_getIterationsCount(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_getSelectedOrbitalParametersDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_isForwardPropagation(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_setEvaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_setIterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_value(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_get__evaluationsCount(t_AbstractBatchLSModel *self, void *data);
        static int t_AbstractBatchLSModel_set__evaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data);
        static PyObject *t_AbstractBatchLSModel_get__forwardPropagation(t_AbstractBatchLSModel *self, void *data);
        static PyObject *t_AbstractBatchLSModel_get__iterationsCount(t_AbstractBatchLSModel *self, void *data);
        static int t_AbstractBatchLSModel_set__iterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, evaluationsCount),
          DECLARE_SET_FIELD(t_AbstractBatchLSModel, evaluationsCounter),
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, forwardPropagation),
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, iterationsCount),
          DECLARE_SET_FIELD(t_AbstractBatchLSModel, iterationsCounter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_AbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractBatchLSModel, createPropagators, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getSelectedOrbitalParametersDriversForBuilder, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, isForwardPropagation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, setEvaluationsCounter, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, setIterationsCounter, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractBatchLSModel)[] = {
          { Py_tp_methods, t_AbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_AbstractBatchLSModel_init_ },
          { Py_tp_getset, t_AbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractBatchLSModel, t_AbstractBatchLSModel, AbstractBatchLSModel);

        void t_AbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractBatchLSModel), &PY_TYPE_DEF(AbstractBatchLSModel), module, "AbstractBatchLSModel", 0);
        }

        void t_AbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "class_", make_descriptor(AbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "wrapfn_", make_descriptor(t_AbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_AbstractBatchLSModel::wrap_Object(AbstractBatchLSModel(((t_AbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractBatchLSModel_init_(t_AbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          AbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = AbstractBatchLSModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractBatchLSModel_createPropagators(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "createPropagators", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_fetchEvaluatedMeasurement(t_AbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "fetchEvaluatedMeasurement", args);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_getEvaluationsCount(t_AbstractBatchLSModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractBatchLSModel_getIterationsCount(t_AbstractBatchLSModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractBatchLSModel_getSelectedOrbitalParametersDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedOrbitalParametersDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSelectedOrbitalParametersDriversForBuilder", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSelectedPropagationDriversForBuilder", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_isForwardPropagation(t_AbstractBatchLSModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForwardPropagation());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractBatchLSModel_setEvaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEvaluationsCounter", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_setIterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIterationsCounter", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_value(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_get__evaluationsCount(t_AbstractBatchLSModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static int t_AbstractBatchLSModel_set__evaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::util::Incrementor value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &value))
            {
              INT_CALL(self->object.setEvaluationsCounter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "evaluationsCounter", arg);
          return -1;
        }

        static PyObject *t_AbstractBatchLSModel_get__forwardPropagation(t_AbstractBatchLSModel *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForwardPropagation());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractBatchLSModel_get__iterationsCount(t_AbstractBatchLSModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static int t_AbstractBatchLSModel_set__iterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::util::Incrementor value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &value))
            {
              INT_CALL(self->object.setIterationsCounter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iterationsCounter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonAbstractKalmanEstimator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractKalmanEstimator::class$ = NULL;
        jmethodID *PythonAbstractKalmanEstimator::mids$ = NULL;
        bool PythonAbstractKalmanEstimator::live$ = false;

        jclass PythonAbstractKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getKalmanEstimation_e73dd18a212e3cd0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractKalmanEstimator::PythonAbstractKalmanEstimator(const ::java::util::List & a0) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

        void PythonAbstractKalmanEstimator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractKalmanEstimator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractKalmanEstimator::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonAbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractKalmanEstimator_init_(t_PythonAbstractKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractKalmanEstimator_finalize(t_PythonAbstractKalmanEstimator *self);
        static PyObject *t_PythonAbstractKalmanEstimator_pythonExtension(t_PythonAbstractKalmanEstimator *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractKalmanEstimator_getKalmanEstimation0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractKalmanEstimator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractKalmanEstimator_get__self(t_PythonAbstractKalmanEstimator *self, void *data);
        static PyGetSetDef t_PythonAbstractKalmanEstimator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractKalmanEstimator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractKalmanEstimator)[] = {
          { Py_tp_methods, t_PythonAbstractKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractKalmanEstimator_init_ },
          { Py_tp_getset, t_PythonAbstractKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractKalmanEstimator, t_PythonAbstractKalmanEstimator, PythonAbstractKalmanEstimator);

        void t_PythonAbstractKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractKalmanEstimator), &PY_TYPE_DEF(PythonAbstractKalmanEstimator), module, "PythonAbstractKalmanEstimator", 1);
        }

        void t_PythonAbstractKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "class_", make_descriptor(PythonAbstractKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "wrapfn_", make_descriptor(t_PythonAbstractKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractKalmanEstimator::initializeClass);
          JNINativeMethod methods[] = {
            { "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;", (void *) t_PythonAbstractKalmanEstimator_getKalmanEstimation0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractKalmanEstimator_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractKalmanEstimator::wrap_Object(PythonAbstractKalmanEstimator(((t_PythonAbstractKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractKalmanEstimator_init_(t_PythonAbstractKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          PythonAbstractKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractKalmanEstimator(a0));
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

        static PyObject *t_PythonAbstractKalmanEstimator_finalize(t_PythonAbstractKalmanEstimator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractKalmanEstimator_pythonExtension(t_PythonAbstractKalmanEstimator *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractKalmanEstimator_getKalmanEstimation0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanEstimation value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getKalmanEstimation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanEstimation::initializeClass, &value))
          {
            throwTypeError("getKalmanEstimation", result);
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

        static void JNICALL t_PythonAbstractKalmanEstimator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractKalmanEstimator_get__self(t_PythonAbstractKalmanEstimator *self, void *data)
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
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEFixedStepHandler::class$ = NULL;
        jmethodID *ODEFixedStepHandler::mids$ = NULL;
        bool ODEFixedStepHandler::live$ = false;

        jclass ODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_4ae4daaf78487fa9] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)V");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_4ae4daaf78487fa9], a0.this$, a1);
        }

        void ODEFixedStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
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
        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_ODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEFixedStepHandler)[] = {
          { Py_tp_methods, t_ODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEFixedStepHandler, t_ODEFixedStepHandler, ODEFixedStepHandler);

        void t_ODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEFixedStepHandler), &PY_TYPE_DEF(ODEFixedStepHandler), module, "ODEFixedStepHandler", 0);
        }

        void t_ODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "class_", make_descriptor(ODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "wrapfn_", make_descriptor(t_ODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEFixedStepHandler::wrap_Object(ODEFixedStepHandler(((t_ODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
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
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceChecker::class$ = NULL;
      jmethodID *ConvergenceChecker::mids$ = NULL;
      bool ConvergenceChecker::live$ = false;

      jclass ConvergenceChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_converged_cb974f0dd5d76f8e] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_cb974f0dd5d76f8e], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceChecker_of_(t_ConvergenceChecker *self, PyObject *args);
      static PyObject *t_ConvergenceChecker_converged(t_ConvergenceChecker *self, PyObject *args);
      static PyObject *t_ConvergenceChecker_get__parameters_(t_ConvergenceChecker *self, void *data);
      static PyGetSetDef t_ConvergenceChecker__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceChecker__methods_[] = {
        DECLARE_METHOD(t_ConvergenceChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceChecker)[] = {
        { Py_tp_methods, t_ConvergenceChecker__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ConvergenceChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceChecker)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceChecker, t_ConvergenceChecker, ConvergenceChecker);
      PyObject *t_ConvergenceChecker::wrap_Object(const ConvergenceChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceChecker *self = (t_ConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceChecker *self = (t_ConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceChecker), &PY_TYPE_DEF(ConvergenceChecker), module, "ConvergenceChecker", 0);
      }

      void t_ConvergenceChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "class_", make_descriptor(ConvergenceChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "wrapfn_", make_descriptor(t_ConvergenceChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceChecker::initializeClass, 1)))
          return NULL;
        return t_ConvergenceChecker::wrap_Object(ConvergenceChecker(((t_ConvergenceChecker *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceChecker_of_(t_ConvergenceChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ConvergenceChecker_converged(t_ConvergenceChecker *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceChecker_get__parameters_(t_ConvergenceChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UnitSphereRandomVectorGenerator::class$ = NULL;
      jmethodID *UnitSphereRandomVectorGenerator::mids$ = NULL;
      bool UnitSphereRandomVectorGenerator::live$ = false;

      jclass UnitSphereRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UnitSphereRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_1c7be4615a4e46b1] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextVector_be783177b060994b] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c7be4615a4e46b1, a0, a1.this$)) {}

      JArray< jdouble > UnitSphereRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_be783177b060994b]));
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
      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self);

      static PyMethodDef t_UnitSphereRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnitSphereRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UnitSphereRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UnitSphereRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnitSphereRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnitSphereRandomVectorGenerator, t_UnitSphereRandomVectorGenerator, UnitSphereRandomVectorGenerator);

      void t_UnitSphereRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UnitSphereRandomVectorGenerator), &PY_TYPE_DEF(UnitSphereRandomVectorGenerator), module, "UnitSphereRandomVectorGenerator", 0);
      }

      void t_UnitSphereRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "class_", make_descriptor(UnitSphereRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "wrapfn_", make_descriptor(t_UnitSphereRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UnitSphereRandomVectorGenerator::wrap_Object(UnitSphereRandomVectorGenerator(((t_UnitSphereRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0, a1));
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

      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBDGIMMessage::class$ = NULL;
          jmethodID *IonosphereBDGIMMessage::mids$ = NULL;
          bool IonosphereBDGIMMessage::live$ = false;

          jclass IonosphereBDGIMMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBDGIMMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96a1aa7c5f1486f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_be783177b060994b] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_setAlphaI_4320462275d66e78] = env->getMethodID(cls, "setAlphaI", "(ID)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBDGIMMessage::IonosphereBDGIMMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_96a1aa7c5f1486f9, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereBDGIMMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_be783177b060994b]));
          }

          void IonosphereBDGIMMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_4320462275d66e78], a0, a1);
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
          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self);
          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args);
          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data);
          static PyGetSetDef t_IonosphereBDGIMMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereBDGIMMessage, alpha),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBDGIMMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBDGIMMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBDGIMMessage, setAlphaI, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBDGIMMessage)[] = {
            { Py_tp_methods, t_IonosphereBDGIMMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBDGIMMessage_init_ },
            { Py_tp_getset, t_IonosphereBDGIMMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBDGIMMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBDGIMMessage, t_IonosphereBDGIMMessage, IonosphereBDGIMMessage);

          void t_IonosphereBDGIMMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBDGIMMessage), &PY_TYPE_DEF(IonosphereBDGIMMessage), module, "IonosphereBDGIMMessage", 0);
          }

          void t_IonosphereBDGIMMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "class_", make_descriptor(IonosphereBDGIMMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "wrapfn_", make_descriptor(t_IonosphereBDGIMMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBDGIMMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBDGIMMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBDGIMMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBDGIMMessage::wrap_Object(IonosphereBDGIMMessage(((t_IonosphereBDGIMMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBDGIMMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBDGIMMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBDGIMMessage_init_(t_IonosphereBDGIMMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBDGIMMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBDGIMMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBDGIMMessage_getAlpha(t_IonosphereBDGIMMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereBDGIMMessage_setAlphaI(t_IonosphereBDGIMMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereBDGIMMessage_get__alpha(t_IonosphereBDGIMMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealMatrix::class$ = NULL;
      jmethodID *SparseRealMatrix::mids$ = NULL;
      bool SparseRealMatrix::live$ = false;

      jclass SparseRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealMatrix");

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
    namespace linear {
      static PyObject *t_SparseRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealMatrix_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_SparseRealMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealMatrix, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealMatrix)[] = {
        { Py_tp_methods, t_SparseRealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealMatrix),
        NULL
      };

      DEFINE_TYPE(SparseRealMatrix, t_SparseRealMatrix, SparseRealMatrix);

      void t_SparseRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealMatrix), &PY_TYPE_DEF(SparseRealMatrix), module, "SparseRealMatrix", 0);
      }

      void t_SparseRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "class_", make_descriptor(SparseRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "wrapfn_", make_descriptor(t_SparseRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseRealMatrix::wrap_Object(SparseRealMatrix(((t_SparseRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/LOFType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceKeplerianHermiteInterpolator::class$ = NULL;
      jmethodID *StateCovarianceKeplerianHermiteInterpolator::mids$ = NULL;
      bool StateCovarianceKeplerianHermiteInterpolator::live$ = false;

      jclass StateCovarianceKeplerianHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1f9c67e42ec14a98] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_2f765a260665fc14] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_f8dfe9f683392148] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_a355ad1fc47021f5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_d04f735801af5eaa] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_fe5f6631276ef5cd] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_1524a08be5e589f6] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_64bef94f5d72746a] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_e7868f37b0ca6b84] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::LOFType & a1) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1f9c67e42ec14a98, a0.this$, a1.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2f765a260665fc14, a0, a1.this$, a2.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f8dfe9f683392148, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a355ad1fc47021f5, a0, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d04f735801af5eaa, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::LOFType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_fe5f6631276ef5cd, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1524a08be5e589f6, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::Frame & a4, const ::org::orekit::orbits::OrbitType & a5, const ::org::orekit::orbits::PositionAngleType & a6) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_64bef94f5d72746a, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter StateCovarianceKeplerianHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_b9dfc27d8c56b5de]));
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
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args);
      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyGetSetDef t_StateCovarianceKeplerianHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceKeplerianHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceKeplerianHermiteInterpolator)[] = {
        { Py_tp_methods, t_StateCovarianceKeplerianHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceKeplerianHermiteInterpolator_init_ },
        { Py_tp_getset, t_StateCovarianceKeplerianHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceKeplerianHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractStateCovarianceInterpolator),
        NULL
      };

      DEFINE_TYPE(StateCovarianceKeplerianHermiteInterpolator, t_StateCovarianceKeplerianHermiteInterpolator, StateCovarianceKeplerianHermiteInterpolator);
      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(const StateCovarianceKeplerianHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), &PY_TYPE_DEF(StateCovarianceKeplerianHermiteInterpolator), module, "StateCovarianceKeplerianHermiteInterpolator", 0);
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "class_", make_descriptor(StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "wrapfn_", make_descriptor(t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(StateCovarianceKeplerianHermiteInterpolator(((t_StateCovarianceKeplerianHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOFType a2((jobject) NULL);
            PyTypeObject **p2;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::orbits::OrbitType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::LOFType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::Frame a4((jobject) NULL);
            ::org::orekit::orbits::OrbitType a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &a5, &p5, ::org::orekit::orbits::t_OrbitType::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *EvaluationRmsChecker::class$ = NULL;
            jmethodID *EvaluationRmsChecker::mids$ = NULL;
            bool EvaluationRmsChecker::live$ = false;

            jclass EvaluationRmsChecker::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_converged_fc5b21e64e255559] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

            jboolean EvaluationRmsChecker::converged(jint a0, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_converged_fc5b21e64e255559], a0, a1.this$, a2.this$);
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
            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg);
            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds);
            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args);

            static PyMethodDef t_EvaluationRmsChecker__methods_[] = {
              DECLARE_METHOD(t_EvaluationRmsChecker, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, converged, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(EvaluationRmsChecker)[] = {
              { Py_tp_methods, t_EvaluationRmsChecker__methods_ },
              { Py_tp_init, (void *) t_EvaluationRmsChecker_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(EvaluationRmsChecker)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(EvaluationRmsChecker, t_EvaluationRmsChecker, EvaluationRmsChecker);

            void t_EvaluationRmsChecker::install(PyObject *module)
            {
              installType(&PY_TYPE(EvaluationRmsChecker), &PY_TYPE_DEF(EvaluationRmsChecker), module, "EvaluationRmsChecker", 0);
            }

            void t_EvaluationRmsChecker::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "class_", make_descriptor(EvaluationRmsChecker::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "wrapfn_", make_descriptor(t_EvaluationRmsChecker::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, EvaluationRmsChecker::initializeClass, 1)))
                return NULL;
              return t_EvaluationRmsChecker::wrap_Object(EvaluationRmsChecker(((t_EvaluationRmsChecker *) arg)->object.this$));
            }
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, EvaluationRmsChecker::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0, a1));
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

            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args)
            {
              jint a0;
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.converged(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "converged", args);
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
#include "org/orekit/geometry/fov/PolygonalFieldOfView.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView::class$ = NULL;
        jmethodID *PolygonalFieldOfView::mids$ = NULL;
        bool PolygonalFieldOfView::live$ = false;

        jclass PolygonalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_15e7df17631cc5b4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_23ec91195dfbe60f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
            mids$[mid_getFootprint_0ed2f5155c3855f6] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getZone_17b2f5c9c3ed683f] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_53c542efd8574582] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_15e7df17631cc5b4, a0.this$, a1)) {}

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jint a4, jdouble a5) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_23ec91195dfbe60f, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

        ::java::util::List PolygonalFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_0ed2f5155c3855f6], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet PolygonalFieldOfView::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_17b2f5c9c3ed683f]));
        }

        jdouble PolygonalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolygonalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_53c542efd8574582], a0.this$));
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
        static PyObject *t_PolygonalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolygonalFieldOfView_init_(t_PolygonalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolygonalFieldOfView_getFootprint(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_getZone(t_PolygonalFieldOfView *self);
        static PyObject *t_PolygonalFieldOfView_offsetFromBoundary(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_projectToBoundary(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_get__zone(t_PolygonalFieldOfView *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView, zone),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, getZone, METH_NOARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PolygonalFieldOfView_init_ },
          { Py_tp_getset, t_PolygonalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView, t_PolygonalFieldOfView, PolygonalFieldOfView);

        void t_PolygonalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView), &PY_TYPE_DEF(PolygonalFieldOfView), module, "PolygonalFieldOfView", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "DefiningConeType", make_descriptor(&PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType)));
        }

        void t_PolygonalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "class_", make_descriptor(PolygonalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "wrapfn_", make_descriptor(t_PolygonalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolygonalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView::wrap_Object(PolygonalFieldOfView(((t_PolygonalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolygonalFieldOfView_init_(t_PolygonalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              PolygonalFieldOfView object((jobject) NULL);

              if (!parseArgs(args, "KD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1))
              {
                INT_CALL(object = PolygonalFieldOfView(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              jint a4;
              jdouble a5;
              PolygonalFieldOfView object((jobject) NULL);

              if (!parseArgs(args, "kKkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::geometry::fov::t_PolygonalFieldOfView$DefiningConeType::parameters_, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PolygonalFieldOfView(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PolygonalFieldOfView_getFootprint(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_getZone(t_PolygonalFieldOfView *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_PolygonalFieldOfView_offsetFromBoundary(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_projectToBoundary(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_get__zone(t_PolygonalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatFixedStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatFixedStepHandler::mids$ = NULL;
        bool PythonMultiSatFixedStepHandler::live$ = false;

        jclass PythonMultiSatFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_aa335fea495d60e0] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_aa335fea495d60e0] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_1dffd31e5a3fd8a1] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatFixedStepHandler::PythonMultiSatFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonMultiSatFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonMultiSatFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonMultiSatFixedStepHandler::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self);
        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatFixedStepHandler, t_PythonMultiSatFixedStepHandler, PythonMultiSatFixedStepHandler);

        void t_PythonMultiSatFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatFixedStepHandler), &PY_TYPE_DEF(PythonMultiSatFixedStepHandler), module, "PythonMultiSatFixedStepHandler", 1);
        }

        void t_PythonMultiSatFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "class_", make_descriptor(PythonMultiSatFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonMultiSatFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatFixedStepHandler::wrap_Object(PythonMultiSatFixedStepHandler(((t_PythonMultiSatFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
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
          namespace generation {

            ::java::lang::Class *Generator::class$ = NULL;
            jmethodID *Generator::mids$ = NULL;
            bool Generator::live$ = false;

            jclass Generator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/Generator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_3a84e25c986c6ee9] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_3a84e25c986c6ee9] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_4b7bd88ca2c9af4f] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_e3ac8af686594d08] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_105e1eadb709d9ac] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_105e1eadb709d9ac] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_d2c8eb4129821f0e] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_d2c8eb4129821f0e] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_ff7cb6c242604316] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_95277969d373e11f] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_04f72a78f21743a7] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_fb05e7322a967ef4] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_aa335fea495d60e0] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_fbddb446f588d87c] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_9720630430a2c97a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_7c6becc5014ffb9d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_23006b59d2886732] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_5a370e95f6df4f1f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_dbec4ebd43084884] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_c56f62b126843856] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_3276450880246d77] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_e8d07df586815a42] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_b81bfb528ebad57a] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void Generator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
            }

            ::java::lang::String Generator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_3a84e25c986c6ee9], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_3a84e25c986c6ee9], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_4b7bd88ca2c9af4f], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String Generator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_e3ac8af686594d08], a0));
            }

            void Generator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_105e1eadb709d9ac], a0.this$);
            }

            void Generator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_105e1eadb709d9ac], a0.this$);
            }

            ::java::lang::String Generator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat Generator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_49975b0867f6c97c]));
            }

            ::java::lang::String Generator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_d2c8eb4129821f0e]));
            }

            void Generator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_ff7cb6c242604316]);
            }

            ::java::lang::String Generator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_95277969d373e11f], a0.this$));
            }

            void Generator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_04f72a78f21743a7], a0.this$, a1.this$, a2);
            }

            ::java::lang::String Generator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_fb05e7322a967ef4], a0.this$));
            }

            void Generator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_aa335fea495d60e0], a0.this$);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_fbddb446f588d87c], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_9720630430a2c97a], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_7c6becc5014ffb9d], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_23006b59d2886732], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_5a370e95f6df4f1f], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_dbec4ebd43084884], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_c56f62b126843856], a0.this$, a1, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_3276450880246d77], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void Generator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_e8d07df586815a42], a0);
            }

            void Generator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_b81bfb528ebad57a], a0.this$);
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
          namespace generation {
            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_close(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_exitSection(t_Generator *self);
            static PyObject *t_Generator_getFormat(t_Generator *self);
            static PyObject *t_Generator_getOutputName(t_Generator *self);
            static PyObject *t_Generator_newLine(t_Generator *self);
            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_get__format(t_Generator *self, void *data);
            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data);
            static PyGetSetDef t_Generator__fields_[] = {
              DECLARE_GET_FIELD(t_Generator, format),
              DECLARE_GET_FIELD(t_Generator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Generator__methods_[] = {
              DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, close, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, doubleToString, METH_O),
              DECLARE_METHOD(t_Generator, endMessage, METH_O),
              DECLARE_METHOD(t_Generator, enterSection, METH_O),
              DECLARE_METHOD(t_Generator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getFormat, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_Generator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_Generator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_Generator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_Generator, unitsListToString, METH_O),
              DECLARE_METHOD(t_Generator, writeComments, METH_O),
              DECLARE_METHOD(t_Generator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_Generator, writeRawData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
              { Py_tp_methods, t_Generator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Generator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Generator)[] = {
              &PY_TYPE_DEF(::java::lang::AutoCloseable),
              NULL
            };

            DEFINE_TYPE(Generator, t_Generator, Generator);

            void t_Generator::install(PyObject *module)
            {
              installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
            }

            void t_Generator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
                return NULL;
              return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
            }
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Generator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Generator_close(t_Generator *self, PyObject *args)
            {

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(Generator), (PyObject *) self, "close", args, 2);
            }

            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "endMessage", arg);
              return NULL;
            }

            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_Generator_exitSection(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_Generator_getFormat(t_Generator *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_Generator_getOutputName(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_Generator_newLine(t_Generator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "startMessage", args);
              return NULL;
            }

            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeComments", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sskZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_Generator_get__format(t_Generator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/BinomialTest.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *BinomialTest::class$ = NULL;
        jmethodID *BinomialTest::mids$ = NULL;
        bool BinomialTest::live$ = false;

        jclass BinomialTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/BinomialTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_binomialTest_baece8c1af9c0ccd] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;)D");
            mids$[mid_binomialTest_4b81208de9d7b33c] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialTest::BinomialTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_binomialTest_baece8c1af9c0ccd], a0, a1, a2, a3.this$);
        }

        jboolean BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3, jdouble a4) const
        {
          return env->callBooleanMethod(this$, mids$[mid_binomialTest_4b81208de9d7b33c], a0, a1, a2, a3.this$, a4);
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
        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args);

        static PyMethodDef t_BinomialTest__methods_[] = {
          DECLARE_METHOD(t_BinomialTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, binomialTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialTest)[] = {
          { Py_tp_methods, t_BinomialTest__methods_ },
          { Py_tp_init, (void *) t_BinomialTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialTest, t_BinomialTest, BinomialTest);

        void t_BinomialTest::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialTest), &PY_TYPE_DEF(BinomialTest), module, "BinomialTest", 0);
        }

        void t_BinomialTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "class_", make_descriptor(BinomialTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "wrapfn_", make_descriptor(t_BinomialTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialTest::initializeClass, 1)))
            return NULL;
          return t_BinomialTest::wrap_Object(BinomialTest(((t_BinomialTest *) arg)->object.this$));
        }
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds)
        {
          BinomialTest object((jobject) NULL);

          INT_CALL(object = BinomialTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble result;

              if (!parseArgs(args, "IIDK", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jboolean result;

              if (!parseArgs(args, "IIDKD", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "binomialTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonGenerator.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonGenerator::class$ = NULL;
            jmethodID *PythonGenerator::mids$ = NULL;
            bool PythonGenerator::live$ = false;

            jclass PythonGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_3a84e25c986c6ee9] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_3a84e25c986c6ee9] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_4b7bd88ca2c9af4f] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_e3ac8af686594d08] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_105e1eadb709d9ac] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_105e1eadb709d9ac] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_d2c8eb4129821f0e] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_d2c8eb4129821f0e] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_ff7cb6c242604316] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_siToCcsdsName_95277969d373e11f] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_04f72a78f21743a7] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_fb05e7322a967ef4] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_aa335fea495d60e0] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_fbddb446f588d87c] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_9720630430a2c97a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_7c6becc5014ffb9d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_23006b59d2886732] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_5a370e95f6df4f1f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_dbec4ebd43084884] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_c56f62b126843856] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_3276450880246d77] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_e8d07df586815a42] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_b81bfb528ebad57a] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonGenerator::PythonGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonGenerator::pythonExtension(jlong a0) const
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
          namespace generation {
            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self);
            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args);
            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5);
            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0);
            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4);
            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0);
            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data);
            static PyGetSetDef t_PythonGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonGenerator)[] = {
              { Py_tp_methods, t_PythonGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonGenerator_init_ },
              { Py_tp_getset, t_PythonGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonGenerator, t_PythonGenerator, PythonGenerator);

            void t_PythonGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonGenerator), &PY_TYPE_DEF(PythonGenerator), module, "PythonGenerator", 1);
            }

            void t_PythonGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "class_", make_descriptor(PythonGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "wrapfn_", make_descriptor(t_PythonGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "close", "()V", (void *) t_PythonGenerator_close0 },
                { "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToCalendarString1 },
                { "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString2 },
                { "dateToString", "(IIIIID)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString3 },
                { "doubleToString", "(D)Ljava/lang/String;", (void *) t_PythonGenerator_doubleToString4 },
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_endMessage5 },
                { "enterSection", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_enterSection6 },
                { "exitSection", "()Ljava/lang/String;", (void *) t_PythonGenerator_exitSection7 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonGenerator_getFormat8 },
                { "getOutputName", "()Ljava/lang/String;", (void *) t_PythonGenerator_getOutputName9 },
                { "newLine", "()V", (void *) t_PythonGenerator_newLine10 },
                { "pythonDecRef", "()V", (void *) t_PythonGenerator_pythonDecRef11 },
                { "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;", (void *) t_PythonGenerator_siToCcsdsName12 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonGenerator_startMessage13 },
                { "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;", (void *) t_PythonGenerator_unitsListToString14 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonGenerator_writeComments15 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V", (void *) t_PythonGenerator_writeEntry16 },
                { "writeEntry", "(Ljava/lang/String;CZ)V", (void *) t_PythonGenerator_writeEntry17 },
                { "writeEntry", "(Ljava/lang/String;IZ)V", (void *) t_PythonGenerator_writeEntry18 },
                { "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V", (void *) t_PythonGenerator_writeEntry19 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry20 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry21 },
                { "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry22 },
                { "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V", (void *) t_PythonGenerator_writeEntry23 },
                { "writeRawData", "(C)V", (void *) t_PythonGenerator_writeRawData24 },
                { "writeRawData", "(Ljava/lang/CharSequence;)V", (void *) t_PythonGenerator_writeRawData25 },
              };
              env->registerNatives(cls, methods, 26);
            }

            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonGenerator::wrap_Object(PythonGenerator(((t_PythonGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds)
            {
              PythonGenerator object((jobject) NULL);

              INT_CALL(object = PythonGenerator());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "close", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToCalendarString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToCalendarString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "iiiiid", (int) a0, (int) a1, (int) a2, (int) a3, (int) a4, (double) a5);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "doubleToString", "d", (double) a0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("doubleToString", result);
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

            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "enterSection", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "exitSection", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("exitSection", result);
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

            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getOutputName", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getOutputName", result);
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

            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "newLine", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "siToCcsdsName", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("siToCcsdsName", result);
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

            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "unitsListToString", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("unitsListToString", result);
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

            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Enum::wrap_Object(::java::lang::Enum(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = c2p(a1);;
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OiO", o0, (int) a1, o2);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Double::wrap_Object(::java::lang::Double(a1));
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OdOO", o0, (double) a1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a1));
              PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *o4 = (a4 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOOO", o0, o1, o2, o3, o4);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = c2p(a0);;
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::lang::t_CharSequence::wrap_Object(::java::lang::CharSequence(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data)
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
