#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Transform.h"
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
            mids$[mid_init$_ba1ca34937b5839e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_67789161e23865e3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
            mids$[mid_getFootprint_260aa711ad5a5b78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getZone_b554ba4417ec0cb0] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_afd63a09f6d01e4c] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_ba1ca34937b5839e, a0.this$, a1)) {}

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jint a4, jdouble a5) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_67789161e23865e3, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

        ::java::util::List PolygonalFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_260aa711ad5a5b78], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet PolygonalFieldOfView::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_b554ba4417ec0cb0]));
        }

        jdouble PolygonalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolygonalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_afd63a09f6d01e4c], a0.this$));
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
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessageType::class$ = NULL;
          jmethodID *RtcmMessageType::mids$ = NULL;
          bool RtcmMessageType::live$ = false;
          RtcmMessageType *RtcmMessageType::RTCM_1019 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1020 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1042 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1044 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1045 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1057 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1058 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1060 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1063 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1064 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1066 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1240 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1241 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1243 = NULL;

          jclass RtcmMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_17061eea11f24b03] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_valueOf_17061eea11f24b03] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_values_0da16c5abdfcee5f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              RTCM_1019 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1019", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1020 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1020", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1042 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1042", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1044 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1044", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1045 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1045", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1057 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1057", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1058 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1058", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1060 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1060", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1063 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1063", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1064 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1064", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1066 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1066", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1240 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1240", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1241 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1241", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1243 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1243", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessageType RtcmMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_17061eea11f24b03], a0.this$));
          }

          RtcmMessageType RtcmMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_17061eea11f24b03], a0.this$));
          }

          JArray< RtcmMessageType > RtcmMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_0da16c5abdfcee5f]));
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
          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args);
          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmMessageType_values(PyTypeObject *type);
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data);
          static PyGetSetDef t_RtcmMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmMessageType__methods_[] = {
            DECLARE_METHOD(t_RtcmMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessageType)[] = {
            { Py_tp_methods, t_RtcmMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmMessageType, t_RtcmMessageType, RtcmMessageType);
          PyObject *t_RtcmMessageType::wrap_Object(const RtcmMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessageType), &PY_TYPE_DEF(RtcmMessageType), module, "RtcmMessageType", 0);
          }

          void t_RtcmMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "class_", make_descriptor(RtcmMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "wrapfn_", make_descriptor(t_RtcmMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1019", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1020", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1042", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1042)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1044", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1044)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1045", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1045)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1057", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1057)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1058", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1058)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1060", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1060)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1063", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1063)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1064", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1064)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1066", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1066)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1240", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1240)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1241", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1241)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1243", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1243)));
          }

          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessageType::initializeClass, 1)))
              return NULL;
            return t_RtcmMessageType::wrap_Object(RtcmMessageType(((t_RtcmMessageType *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::getMessageType(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::valueOf(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmMessageType_values(PyTypeObject *type)
          {
            JArray< RtcmMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmMessageType::wrap_jobject);
          }
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data)
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
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *StandardDeviation::class$ = NULL;
          jmethodID *StandardDeviation::mids$ = NULL;
          bool StandardDeviation::live$ = false;

          jclass StandardDeviation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/StandardDeviation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_98e08a33c6fbb84a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_eb21d3f0d574510d] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_2f34c84b343f1c2a] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");
              mids$[mid_evaluate_926a8b9763aa0b21] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_431214b6e4f01f3c] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_e470b6d9e0d979db] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_2d720e64fc1348c5] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StandardDeviation::StandardDeviation() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          StandardDeviation::StandardDeviation(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_98e08a33c6fbb84a, a0.this$)) {}

          StandardDeviation::StandardDeviation(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

          StandardDeviation::StandardDeviation(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_eb21d3f0d574510d, a0, a1.this$)) {}

          void StandardDeviation::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          StandardDeviation StandardDeviation::copy() const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_copy_2f34c84b343f1c2a]));
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_926a8b9763aa0b21], a0.this$, a1);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_431214b6e4f01f3c], a0.this$, a1, a2, a3);
          }

          jlong StandardDeviation::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble StandardDeviation::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void StandardDeviation::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
          }

          jboolean StandardDeviation::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_e470b6d9e0d979db]);
          }

          StandardDeviation StandardDeviation::withBiasCorrection(jboolean a0) const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_2d720e64fc1348c5], a0));
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
          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self);
          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg);
          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data);
          static PyGetSetDef t_StandardDeviation__fields_[] = {
            DECLARE_GET_FIELD(t_StandardDeviation, biasCorrected),
            DECLARE_GET_FIELD(t_StandardDeviation, n),
            DECLARE_GET_FIELD(t_StandardDeviation, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StandardDeviation__methods_[] = {
            DECLARE_METHOD(t_StandardDeviation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, clear, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, copy, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getN, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getResult, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, increment, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_StandardDeviation, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StandardDeviation)[] = {
            { Py_tp_methods, t_StandardDeviation__methods_ },
            { Py_tp_init, (void *) t_StandardDeviation_init_ },
            { Py_tp_getset, t_StandardDeviation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StandardDeviation)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(StandardDeviation, t_StandardDeviation, StandardDeviation);

          void t_StandardDeviation::install(PyObject *module)
          {
            installType(&PY_TYPE(StandardDeviation), &PY_TYPE_DEF(StandardDeviation), module, "StandardDeviation", 0);
          }

          void t_StandardDeviation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "class_", make_descriptor(StandardDeviation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "wrapfn_", make_descriptor(t_StandardDeviation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StandardDeviation::initializeClass, 1)))
              return NULL;
            return t_StandardDeviation::wrap_Object(StandardDeviation(((t_StandardDeviation *) arg)->object.this$));
          }
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StandardDeviation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                StandardDeviation object((jobject) NULL);

                INT_CALL(object = StandardDeviation());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = StandardDeviation(a0, a1));
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

          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args)
          {
            StandardDeviation result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_StandardDeviation::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
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
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg)
          {
            jboolean a0;
            StandardDeviation result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_StandardDeviation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data)
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
#include "org/orekit/propagation/integration/PythonStateMapper.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonStateMapper::class$ = NULL;
        jmethodID *PythonStateMapper::mids$ = NULL;
        bool PythonStateMapper::live$ = false;

        jclass PythonStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d148623dabbb09f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_4ca0807e8dab0b83] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapStateToArray_32d762d958cb6960] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonStateMapper::PythonStateMapper(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::StateMapper(env->newObject(initializeClass, &mids$, mid_init$_d148623dabbb09f7, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonStateMapper::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self);
        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data);
        static PyGetSetDef t_PythonStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonStateMapper, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonStateMapper)[] = {
          { Py_tp_methods, t_PythonStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonStateMapper_init_ },
          { Py_tp_getset, t_PythonStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::StateMapper),
          NULL
        };

        DEFINE_TYPE(PythonStateMapper, t_PythonStateMapper, PythonStateMapper);

        void t_PythonStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonStateMapper), &PY_TYPE_DEF(PythonStateMapper), module, "PythonStateMapper", 1);
        }

        void t_PythonStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "class_", make_descriptor(PythonStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "wrapfn_", make_descriptor(t_PythonStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonStateMapper::wrap_Object(PythonStateMapper(((t_PythonStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonStateMapper object((jobject) NULL);

          if (!parseArgs(args, "kDKKkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonStateMapper(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args)
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

        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
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

        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data)
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
#include "org/orekit/errors/FrameAncestorException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
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
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAncestorException::FrameAncestorException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}
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
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffectGradient::class$ = NULL;
          jmethodID *PythonParametricModelEffectGradient::mids$ = NULL;
          bool PythonParametricModelEffectGradient::live$ = false;

          jclass PythonParametricModelEffectGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_ad7e9246d8119323] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffectGradient::PythonParametricModelEffectGradient() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonParametricModelEffectGradient::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonParametricModelEffectGradient::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonParametricModelEffectGradient::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self);
          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args);
          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffectGradient__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffectGradient, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffectGradient__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffectGradient)[] = {
            { Py_tp_methods, t_PythonParametricModelEffectGradient__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffectGradient_init_ },
            { Py_tp_getset, t_PythonParametricModelEffectGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffectGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffectGradient, t_PythonParametricModelEffectGradient, PythonParametricModelEffectGradient);

          void t_PythonParametricModelEffectGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffectGradient), &PY_TYPE_DEF(PythonParametricModelEffectGradient), module, "PythonParametricModelEffectGradient", 1);
          }

          void t_PythonParametricModelEffectGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "class_", make_descriptor(PythonParametricModelEffectGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "wrapfn_", make_descriptor(t_PythonParametricModelEffectGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffectGradient::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;", (void *) t_PythonParametricModelEffectGradient_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffectGradient_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffectGradient::wrap_Object(PythonParametricModelEffectGradient(((t_PythonParametricModelEffectGradient *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffectGradient object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffectGradient());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args)
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

          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &value))
            {
              throwTypeError("evaluate", result);
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

          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateTroposphericDelayModifier::mids$ = NULL;
          bool RangeRateTroposphericDelayModifier::live$ = false;

          jclass RangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e094ffa5f08c38aa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;Z)V");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorTroposphericModel_79833a4daf329f8b] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_452a588415b00924] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateTroposphericDelayModifier::RangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0, jboolean a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_e094ffa5f08c38aa, a0.this$, a1)) {}

          void RangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void RangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
          }

          jdouble RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_79833a4daf329f8b], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_452a588415b00924], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args);

          static PyMethodDef t_RangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateTroposphericDelayModifier, t_RangeRateTroposphericDelayModifier, RangeRateTroposphericDelayModifier);

          void t_RangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateTroposphericDelayModifier), &PY_TYPE_DEF(RangeRateTroposphericDelayModifier), module, "RangeRateTroposphericDelayModifier", 0);
          }

          void t_RangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "class_", make_descriptor(RangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateTroposphericDelayModifier::wrap_Object(RangeRateTroposphericDelayModifier(((t_RangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            jboolean a1;
            RangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeRateTroposphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(RangeRateTroposphericDelayModifier), (PyObject *) self, "rangeRateErrorTroposphericModel", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitEphemerisSegment::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitEphemerisSegment::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitEphemerisSegment::live$ = false;

        jclass OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2702e879e387a120] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/frames/Frame;DI)V");
            mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_a6156df500549a58] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitEphemerisSegment::OrekitEphemerisFile$OrekitEphemerisSegment(const ::java::util::List & a0, const ::org::orekit::frames::Frame & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2702e879e387a120, a0.this$, a1.this$, a2, a3)) {}

        ::org::orekit::utils::CartesianDerivativesFilter OrekitEphemerisFile$OrekitEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
        }

        ::java::util::List OrekitEphemerisFile$OrekitEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_a6156df500549a58]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_c8fe21bcdac65bf6]));
        }

        jint OrekitEphemerisFile$OrekitEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
        }

        jdouble OrekitEphemerisFile$OrekitEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitEphemerisSegment_init_(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getAvailableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getCoordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInterpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getMu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStart(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__availableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__coordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__frame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__inertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__interpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__mu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__start(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__stop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, inertialFrame),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitEphemerisSegment)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitEphemerisSegment_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment, t_OrekitEphemerisFile$OrekitEphemerisSegment, OrekitEphemerisFile$OrekitEphemerisSegment);

        void t_OrekitEphemerisFile$OrekitEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment), module, "OrekitEphemerisFile$OrekitEphemerisSegment", 0);
        }

        void t_OrekitEphemerisFile$OrekitEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "class_", make_descriptor(OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(OrekitEphemerisFile$OrekitEphemerisSegment(((t_OrekitEphemerisFile$OrekitEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitEphemerisSegment_init_(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jdouble a2;
          jint a3;
          OrekitEphemerisFile$OrekitEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "KkDI", ::java::util::List::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitEphemerisSegment(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getAvailableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getCoordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInterpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getMu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStart(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__availableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__coordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__frame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__inertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__interpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__mu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__start(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__stop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
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
#include "org/orekit/errors/PythonLocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *PythonLocalizedException::class$ = NULL;
      jmethodID *PythonLocalizedException::mids$ = NULL;
      bool PythonLocalizedException::live$ = false;

      jclass PythonLocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/PythonLocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLocalizedException::PythonLocalizedException() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonLocalizedException::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonLocalizedException::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonLocalizedException::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonLocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLocalizedException_init_(t_PythonLocalizedException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLocalizedException_finalize(t_PythonLocalizedException *self);
      static PyObject *t_PythonLocalizedException_pythonExtension(t_PythonLocalizedException *self, PyObject *args);
      static jobject JNICALL t_PythonLocalizedException_getMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonLocalizedException_getParts1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLocalizedException_getSpecifier2(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLocalizedException_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLocalizedException_get__self(t_PythonLocalizedException *self, void *data);
      static PyGetSetDef t_PythonLocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLocalizedException, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLocalizedException__methods_[] = {
        DECLARE_METHOD(t_PythonLocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLocalizedException, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLocalizedException, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLocalizedException)[] = {
        { Py_tp_methods, t_PythonLocalizedException__methods_ },
        { Py_tp_init, (void *) t_PythonLocalizedException_init_ },
        { Py_tp_getset, t_PythonLocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLocalizedException, t_PythonLocalizedException, PythonLocalizedException);

      void t_PythonLocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLocalizedException), &PY_TYPE_DEF(PythonLocalizedException), module, "PythonLocalizedException", 1);
      }

      void t_PythonLocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "class_", make_descriptor(PythonLocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "wrapfn_", make_descriptor(t_PythonLocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLocalizedException::initializeClass);
        JNINativeMethod methods[] = {
          { "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;", (void *) t_PythonLocalizedException_getMessage0 },
          { "getParts", "()[Ljava/lang/Object;", (void *) t_PythonLocalizedException_getParts1 },
          { "getSpecifier", "()Lorg/hipparchus/exception/Localizable;", (void *) t_PythonLocalizedException_getSpecifier2 },
          { "pythonDecRef", "()V", (void *) t_PythonLocalizedException_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLocalizedException::initializeClass, 1)))
          return NULL;
        return t_PythonLocalizedException::wrap_Object(PythonLocalizedException(((t_PythonLocalizedException *) arg)->object.this$));
      }
      static PyObject *t_PythonLocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLocalizedException_init_(t_PythonLocalizedException *self, PyObject *args, PyObject *kwds)
      {
        PythonLocalizedException object((jobject) NULL);

        INT_CALL(object = PythonLocalizedException());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLocalizedException_finalize(t_PythonLocalizedException *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLocalizedException_pythonExtension(t_PythonLocalizedException *self, PyObject *args)
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

      static jobject JNICALL t_PythonLocalizedException_getMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::util::t_Locale::wrap_Object(::java::util::Locale(a0));
        PyObject *result = PyObject_CallMethod(obj, "getMessage", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getMessage", result);
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

      static jobject JNICALL t_PythonLocalizedException_getParts1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::Object > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParts", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[o", &value))
        {
          throwTypeError("getParts", result);
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

      static jobject JNICALL t_PythonLocalizedException_getSpecifier2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSpecifier", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::exception::Localizable::initializeClass, &value))
        {
          throwTypeError("getSpecifier", result);
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

      static void JNICALL t_PythonLocalizedException_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLocalizedException_get__self(t_PythonLocalizedException *self, void *data)
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
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FactoryManagedFrame::class$ = NULL;
      jmethodID *FactoryManagedFrame::mids$ = NULL;
      bool FactoryManagedFrame::live$ = false;

      jclass FactoryManagedFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FactoryManagedFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9cdbb1e40e0834cf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;ZLorg/orekit/frames/Predefined;)V");
          mids$[mid_getFactoryKey_14c41082d9708ed7] = env->getMethodID(cls, "getFactoryKey", "()Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FactoryManagedFrame::FactoryManagedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2, const ::org::orekit::frames::Predefined & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_9cdbb1e40e0834cf, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::orekit::frames::Predefined FactoryManagedFrame::getFactoryKey() const
      {
        return ::org::orekit::frames::Predefined(env->callObjectMethod(this$, mids$[mid_getFactoryKey_14c41082d9708ed7]));
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
      static PyObject *t_FactoryManagedFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FactoryManagedFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FactoryManagedFrame_init_(t_FactoryManagedFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FactoryManagedFrame_getFactoryKey(t_FactoryManagedFrame *self);
      static PyObject *t_FactoryManagedFrame_get__factoryKey(t_FactoryManagedFrame *self, void *data);
      static PyGetSetDef t_FactoryManagedFrame__fields_[] = {
        DECLARE_GET_FIELD(t_FactoryManagedFrame, factoryKey),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FactoryManagedFrame__methods_[] = {
        DECLARE_METHOD(t_FactoryManagedFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FactoryManagedFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FactoryManagedFrame, getFactoryKey, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FactoryManagedFrame)[] = {
        { Py_tp_methods, t_FactoryManagedFrame__methods_ },
        { Py_tp_init, (void *) t_FactoryManagedFrame_init_ },
        { Py_tp_getset, t_FactoryManagedFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FactoryManagedFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(FactoryManagedFrame, t_FactoryManagedFrame, FactoryManagedFrame);

      void t_FactoryManagedFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(FactoryManagedFrame), &PY_TYPE_DEF(FactoryManagedFrame), module, "FactoryManagedFrame", 0);
      }

      void t_FactoryManagedFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "class_", make_descriptor(FactoryManagedFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "wrapfn_", make_descriptor(t_FactoryManagedFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FactoryManagedFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FactoryManagedFrame::initializeClass, 1)))
          return NULL;
        return t_FactoryManagedFrame::wrap_Object(FactoryManagedFrame(((t_FactoryManagedFrame *) arg)->object.this$));
      }
      static PyObject *t_FactoryManagedFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FactoryManagedFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FactoryManagedFrame_init_(t_FactoryManagedFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::frames::Predefined a3((jobject) NULL);
        PyTypeObject **p3;
        FactoryManagedFrame object((jobject) NULL);

        if (!parseArgs(args, "kkZK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::Predefined::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::frames::t_Predefined::parameters_))
        {
          INT_CALL(object = FactoryManagedFrame(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FactoryManagedFrame_getFactoryKey(t_FactoryManagedFrame *self)
      {
        ::org::orekit::frames::Predefined result((jobject) NULL);
        OBJ_CALL(result = self->object.getFactoryKey());
        return ::org::orekit::frames::t_Predefined::wrap_Object(result);
      }

      static PyObject *t_FactoryManagedFrame_get__factoryKey(t_FactoryManagedFrame *self, void *data)
      {
        ::org::orekit::frames::Predefined value((jobject) NULL);
        OBJ_CALL(value = self->object.getFactoryKey());
        return ::org::orekit::frames::t_Predefined::wrap_Object(value);
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
                mids$[mid_reducePoints_5c0bbab57d449f37] = env->getStaticMethodID(cls, "reducePoints", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Collection AklToussaintHeuristic::reducePoints(const ::java::util::Collection & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_reducePoints_5c0bbab57d449f37], a0.this$));
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
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GNSSAttitudeProvider::class$ = NULL;
        jmethodID *GNSSAttitudeProvider::mids$ = NULL;
        bool GNSSAttitudeProvider::live$ = false;

        jclass GNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_validityEnd_aaa854c403487cf3] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_aaa854c403487cf3] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_aaa854c403487cf3]));
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
      namespace attitude {
        static PyObject *t_GNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GNSSAttitudeProvider_validityEnd(t_GNSSAttitudeProvider *self);
        static PyObject *t_GNSSAttitudeProvider_validityStart(t_GNSSAttitudeProvider *self);

        static PyMethodDef t_GNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_GNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_GNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GNSSAttitudeProvider, t_GNSSAttitudeProvider, GNSSAttitudeProvider);

        void t_GNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(GNSSAttitudeProvider), &PY_TYPE_DEF(GNSSAttitudeProvider), module, "GNSSAttitudeProvider", 0);
        }

        void t_GNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "class_", make_descriptor(GNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "wrapfn_", make_descriptor(t_GNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_GNSSAttitudeProvider::wrap_Object(GNSSAttitudeProvider(((t_GNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_GNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GNSSAttitudeProvider_validityEnd(t_GNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_GNSSAttitudeProvider_validityStart(t_GNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonMessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonMessageParser::class$ = NULL;
            jmethodID *PythonMessageParser::mids$ = NULL;
            bool PythonMessageParser::live$ = false;

            jclass PythonMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_dfd7647d9110ac9f] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFileFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_0090f7797e403f43] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_691778b38b11996d] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_9b91a684064d0956] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageParser::PythonMessageParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonMessageParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args);
            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self);
            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data);
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data);
            static PyGetSetDef t_PythonMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageParser, self),
              DECLARE_GET_FIELD(t_PythonMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageParser)[] = {
              { Py_tp_methods, t_PythonMessageParser__methods_ },
              { Py_tp_init, (void *) t_PythonMessageParser_init_ },
              { Py_tp_getset, t_PythonMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageParser, t_PythonMessageParser, PythonMessageParser);
            PyObject *t_PythonMessageParser::wrap_Object(const PythonMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageParser), &PY_TYPE_DEF(PythonMessageParser), module, "PythonMessageParser", 1);
            }

            void t_PythonMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "class_", make_descriptor(PythonMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "wrapfn_", make_descriptor(t_PythonMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonMessageParser_build0 },
                { "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonMessageParser_getFileFormat1 },
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageParser_getFormatVersionKey2 },
                { "getSpecialXmlElementsBuilders", "()Ljava/util/Map;", (void *) t_PythonMessageParser_getSpecialXmlElementsBuilders3 },
                { "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;", (void *) t_PythonMessageParser_parseMessage4 },
                { "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V", (void *) t_PythonMessageParser_process5 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageParser_pythonDecRef6 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonMessageParser_reset7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonMessageParser::wrap_Object(PythonMessageParser(((t_PythonMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageParser object((jobject) NULL);

              INT_CALL(object = PythonMessageParser());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
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

            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFileFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFileFormat", result);
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

            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getSpecialXmlElementsBuilders", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getSpecialXmlElementsBuilders", result);
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

            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
              PyObject *result = PyObject_CallMethod(obj, "parseMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("parseMessage", result);
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

            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "process", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
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

            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data)
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
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonFieldOrekitStepInterpolator::mids$ = NULL;
        bool PythonFieldOrekitStepInterpolator::live$ = false;

        jclass PythonFieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_a553824829fc2514] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_85b5a3e9101d7c1f] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPreviousState_a553824829fc2514] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_c7ca73d5105d6a36] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepInterpolator::PythonFieldOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldOrekitStepInterpolator::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self);
        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepInterpolator, t_PythonFieldOrekitStepInterpolator, PythonFieldOrekitStepInterpolator);
        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_Object(const PythonFieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepInterpolator), &PY_TYPE_DEF(PythonFieldOrekitStepInterpolator), module, "PythonFieldOrekitStepInterpolator", 1);
        }

        void t_PythonFieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "class_", make_descriptor(PythonFieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getPreviousState2 },
            { "isForward", "()Z", (void *) t_PythonFieldOrekitStepInterpolator_isForward3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepInterpolator_pythonDecRef4 },
            { "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;", (void *) t_PythonFieldOrekitStepInterpolator_restrictStep5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepInterpolator::wrap_Object(PythonFieldOrekitStepInterpolator(((t_PythonFieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
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

        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
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

        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUp::class$ = NULL;
          jmethodID *InterSatellitesWindUp::mids$ = NULL;
          bool InterSatellitesWindUp::live$ = false;

          jclass InterSatellitesWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_emitterToInert_fd1bf64855bd2d79] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_fd1bf64855bd2d79] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

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

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args);
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data);
          static PyGetSetDef t_InterSatellitesWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesWindUp__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUp)[] = {
            { Py_tp_methods, t_InterSatellitesWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_InterSatellitesWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUp, t_InterSatellitesWindUp, InterSatellitesWindUp);
          PyObject *t_InterSatellitesWindUp::wrap_Object(const InterSatellitesWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUp), &PY_TYPE_DEF(InterSatellitesWindUp), module, "InterSatellitesWindUp", 0);
          }

          void t_InterSatellitesWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "class_", make_descriptor(InterSatellitesWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "wrapfn_", make_descriptor(t_InterSatellitesWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUp::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUp::wrap_Object(InterSatellitesWindUp(((t_InterSatellitesWindUp *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration::mids$ = NULL;
        bool CRDConfiguration::live$ = false;

        jclass CRDConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addConfigurationRecord_43bce5c3c245d674] = env->getMethodID(cls, "addConfigurationRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;)V");
            mids$[mid_getCalibrationTargetRecord_d46fcb0e2c08e5e6] = env->getMethodID(cls, "getCalibrationTargetRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getCalibrationTargetRecord_2e4eeb0bce6218e5] = env->getMethodID(cls, "getCalibrationTargetRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getConfigurationRecord_d08231771b05f006] = env->getMethodID(cls, "getConfigurationRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;");
            mids$[mid_getConfigurationRecordMap_d6753b7055940a54] = env->getMethodID(cls, "getConfigurationRecordMap", "()Ljava/util/Map;");
            mids$[mid_getDetectorRecord_79c23328a6086e61] = env->getMethodID(cls, "getDetectorRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getDetectorRecord_7c33dc2714e034d3] = env->getMethodID(cls, "getDetectorRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getLaserRecord_196962bc7339c5e1] = env->getMethodID(cls, "getLaserRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLaserRecord_8cf14eea7e190019] = env->getMethodID(cls, "getLaserRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLastSystemRecord_828d49b4ed6324e0] = env->getMethodID(cls, "getLastSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getMeteorologicalRecord_c1ce446adb70c413] = env->getMethodID(cls, "getMeteorologicalRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getMeteorologicalRecord_b5ed8cba9094b0a2] = env->getMethodID(cls, "getMeteorologicalRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getSoftwareRecord_8613c1e2be43317c] = env->getMethodID(cls, "getSoftwareRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSoftwareRecord_64fcb6bbee2d58d6] = env->getMethodID(cls, "getSoftwareRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSystemConfigurationIds_e9e1a6780fe94297] = env->getMethodID(cls, "getSystemConfigurationIds", "()Ljava/util/Set;");
            mids$[mid_getSystemConfigurationRecords_a6156df500549a58] = env->getMethodID(cls, "getSystemConfigurationRecords", "()Ljava/util/List;");
            mids$[mid_getSystemRecord_828d49b4ed6324e0] = env->getMethodID(cls, "getSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getSystemRecord_2662eb82a9f4a14d] = env->getMethodID(cls, "getSystemRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getTimingRecord_1c6190f91b1ddeec] = env->getMethodID(cls, "getTimingRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTimingRecord_8275c3cbe919ac21] = env->getMethodID(cls, "getTimingRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTransponderRecord_fe34e3b193be0757] = env->getMethodID(cls, "getTransponderRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");
            mids$[mid_getTransponderRecord_0b6199f6050cc84b] = env->getMethodID(cls, "getTransponderRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration::CRDConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void CRDConfiguration::addConfigurationRecord(const ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addConfigurationRecord_43bce5c3c245d674], a0.this$);
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_d46fcb0e2c08e5e6]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_2e4eeb0bce6218e5], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration CRDConfiguration::getConfigurationRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecord_d08231771b05f006], a0.this$));
        }

        ::java::util::Map CRDConfiguration::getConfigurationRecordMap() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getConfigurationRecordMap_d6753b7055940a54]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_79c23328a6086e61]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_7c33dc2714e034d3], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_196962bc7339c5e1]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_8cf14eea7e190019], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getLastSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getLastSystemRecord_828d49b4ed6324e0]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_c1ce446adb70c413]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_b5ed8cba9094b0a2], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_8613c1e2be43317c]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_64fcb6bbee2d58d6], a0.this$));
        }

        ::java::util::Set CRDConfiguration::getSystemConfigurationIds() const
        {
          return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationIds_e9e1a6780fe94297]));
        }

        ::java::util::List CRDConfiguration::getSystemConfigurationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationRecords_a6156df500549a58]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_828d49b4ed6324e0]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_2662eb82a9f4a14d], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_1c6190f91b1ddeec]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_8275c3cbe919ac21], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_fe34e3b193be0757]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_0b6199f6050cc84b], a0.this$));
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
        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data);
        static PyGetSetDef t_CRDConfiguration__fields_[] = {
          DECLARE_GET_FIELD(t_CRDConfiguration, calibrationTargetRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, configurationRecordMap),
          DECLARE_GET_FIELD(t_CRDConfiguration, detectorRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, laserRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, lastSystemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, meteorologicalRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, softwareRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationIds),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationRecords),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, timingRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, transponderRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, addConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getCalibrationTargetRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecordMap, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getDetectorRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLaserRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLastSystemRecord, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getMeteorologicalRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSoftwareRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationIds, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTimingRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTransponderRecord, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration, t_CRDConfiguration, CRDConfiguration);

        void t_CRDConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration), &PY_TYPE_DEF(CRDConfiguration), module, "CRDConfiguration", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "CalibrationTargetConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "MeteorologicalConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SoftwareConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TransponderConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TimingSystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "DetectorConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "LaserConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$LaserConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "BaseConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$BaseConfiguration)));
        }

        void t_CRDConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "class_", make_descriptor(CRDConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration::wrap_Object(CRDConfiguration(((t_CRDConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addConfigurationRecord(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationTargetRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationTargetRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationTargetRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getConfigurationRecord(a0));
            return ::org::orekit::files::ilrs::t_CRDConfiguration$BaseConfiguration::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$BaseConfiguration));
        }

        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getDetectorRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDetectorRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDetectorRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaserRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLaserRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLaserRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeteorologicalRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeteorologicalRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteorologicalRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSoftwareRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getSoftwareRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSoftwareRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self)
        {
          ::java::util::Set result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$SystemConfiguration));
        }

        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSystemRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSystemRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSystemRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimingRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTimingRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTimingRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransponderRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTransponderRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransponderRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationTargetRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Set value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimingRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages::class$ = NULL;
      jmethodID *OrekitMessages::mids$ = NULL;
      bool OrekitMessages::live$ = false;
      OrekitMessages *OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE = NULL;
      OrekitMessages *OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALMOST_EQUATORIAL_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD = NULL;
      OrekitMessages *OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED = NULL;
      OrekitMessages *OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE = NULL;
      OrekitMessages *OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN = NULL;
      OrekitMessages *OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = NULL;
      OrekitMessages *OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_SOURCETABLE = NULL;
      OrekitMessages *OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPLETE_DATA = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_FRAME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_MISSING_TIME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_SENSOR_INDEX = NULL;
      OrekitMessages *OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNEXPECTED_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_GM = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = NULL;
      OrekitMessages *OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::CONNECTION_ERROR = NULL;
      OrekitMessages *OrekitMessages::CORRUPTED_FILE = NULL;
      OrekitMessages *OrekitMessages::CPF_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::CRD_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = NULL;
      OrekitMessages *OrekitMessages::DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH = NULL;
      OrekitMessages *OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = NULL;
      OrekitMessages *OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION = NULL;
      OrekitMessages *OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT = NULL;
      OrekitMessages *OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS = NULL;
      OrekitMessages *OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::END_OF_ENCODED_MESSAGE = NULL;
      OrekitMessages *OrekitMessages::EVENT_DATE_TOO_CLOSE = NULL;
      OrekitMessages *OrekitMessages::EXCEPTIONAL_DATA_CONTEXT = NULL;
      OrekitMessages *OrekitMessages::FAILED_AUTHENTICATION = NULL;
      OrekitMessages *OrekitMessages::FIND_ROOT = NULL;
      OrekitMessages *OrekitMessages::FRAMES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::FRAME_ALREADY_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME = NULL;
      OrekitMessages *OrekitMessages::FRAME_NOT_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_NO_NTH_ANCESTOR = NULL;
      OrekitMessages *OrekitMessages::FUNCTION_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::GNSS_PARITY_ERROR = NULL;
      OrekitMessages *OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = NULL;
      OrekitMessages *OrekitMessages::HEADER_ALREADY_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HEADER_NOT_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FRAMES = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_UNITS = NULL;
      OrekitMessages *OrekitMessages::INCOMPLETE_HEADER = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_SATS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SAMPLING_DATE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SELECTION = NULL;
      OrekitMessages *OrekitMessages::INERTIAL_FORCE_MODEL_MISSING = NULL;
      OrekitMessages *OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = NULL;
      OrekitMessages *OrekitMessages::INTERNAL_ERROR = NULL;
      OrekitMessages *OrekitMessages::INVALID_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INVALID_PARAMETER_RANGE = NULL;
      OrekitMessages *OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_ID = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INVALID_TYPE_FOR_FUNCTION = NULL;
      OrekitMessages *OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID = NULL;
      OrekitMessages *OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = NULL;
      OrekitMessages *OrekitMessages::MISMATCHED_FREQUENCIES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = NULL;
      OrekitMessages *OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_HEADER = NULL;
      OrekitMessages *OrekitMessages::MISSING_SECOND_TLE_LINE = NULL;
      OrekitMessages *OrekitMessages::MISSING_SERIE_J_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH = NULL;
      OrekitMessages *OrekitMessages::MISSING_VELOCITY = NULL;
      OrekitMessages *OrekitMessages::MODIP_GRID_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::MOUNPOINT_ALREADY_CONNECTED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_INTERPOLATOR_USED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED = NULL;
      OrekitMessages *OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = NULL;
      OrekitMessages *OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NON_COPLANAR_POINTS = NULL;
      OrekitMessages *OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_HMS_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_MONTH = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_WEEK_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = NULL;
      OrekitMessages *OrekitMessages::NON_RESETABLE_STATE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_DIRECTORY = NULL;
      OrekitMessages *OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_DATA = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_PROPAGATORS = NULL;
      OrekitMessages *OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::NOT_STRICTLY_POSITIVE = NULL;
      OrekitMessages *OrekitMessages::NOT_TLE_LINES = NULL;
      OrekitMessages *OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR = NULL;
      OrekitMessages *OrekitMessages::NO_CACHED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_GENERATED = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_EPOCH_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = NULL;
      OrekitMessages *OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_PROPAGATOR_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::NO_SEM_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_SUCH_ITRF_FRAME = NULL;
      OrekitMessages *OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_DATA_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_OBJECT = NULL;
      OrekitMessages *OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NULL_ARGUMENT = NULL;
      OrekitMessages *OrekitMessages::NULL_PARENT_FOR_FRAME = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = NULL;
      OrekitMessages *OrekitMessages::ORBITS_MUS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_TYPE_NOT_ALLOWED = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_NOT_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = NULL;
      OrekitMessages *OrekitMessages::POINT_INSIDE_ELLIPSOID = NULL;
      OrekitMessages *OrekitMessages::POLAR_TRAJECTORY = NULL;
      OrekitMessages *OrekitMessages::POSITIVE_FLOW_RATE = NULL;
      OrekitMessages *OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET = NULL;
      OrekitMessages *OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = NULL;
      OrekitMessages *OrekitMessages::SOURCETABLE_PARSE_ERROR = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA = NULL;
      OrekitMessages *OrekitMessages::SP3_INVALID_HEADER_ENTRY = NULL;
      OrekitMessages *OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION = NULL;
      OrekitMessages *OrekitMessages::SP3_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_6X6 = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED = NULL;
      OrekitMessages *OrekitMessages::STATION_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE = NULL;
      OrekitMessages *OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STK_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STREAM_REQUIRES_NMEA_FIX = NULL;
      OrekitMessages *OrekitMessages::TLE_CHECKSUM_ERROR = NULL;
      OrekitMessages *OrekitMessages::TLE_INVALID_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = NULL;
      OrekitMessages *OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_TLE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_RESOURCE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_READ_JPL_HEADER = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_CONTENT_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = NULL;
      OrekitMessages *OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ADDITIONAL_STATE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_DATA_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_HOST = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_MONTH = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_RINEX_FREQUENCY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_TIME_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UNIT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UTC_ID = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_PARAMETER_NAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::VALUE_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::WRONG_COLUMNS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::WRONG_DEGREE_OR_ORDER = NULL;
      OrekitMessages *OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE = NULL;
      OrekitMessages *OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = NULL;
      OrekitMessages *OrekitMessages::WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE = NULL;
      OrekitMessages *OrekitMessages::WRONG_PARSING_TYPE = NULL;

      jclass OrekitMessages::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_b2403a9fc6183395] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/errors/OrekitMessages;");
          mids$[mid_values_5596e855fb4dc890] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/errors/OrekitMessages;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIONAL_STATE_NAME_ALREADY_IN_USE = new OrekitMessages(env->getStaticObjectField(cls, "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_CRITICALLY_INCLINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_CRITICALLY_INCLINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_EQUATORIAL_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_EQUATORIAL_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALTITUDE_BELOW_ALLOWED_THRESHOLD = new OrekitMessages(env->getStaticObjectField(cls, "ALTITUDE_BELOW_ALLOWED_THRESHOLD", "Lorg/orekit/errors/OrekitMessages;"));
          ANGLE_TYPE_NOT_SUPPORTED = new OrekitMessages(env->getStaticObjectField(cls, "ANGLE_TYPE_NOT_SUPPORTED", "Lorg/orekit/errors/OrekitMessages;"));
          ATTEMPT_TO_GENERATE_MALFORMED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "ATTEMPT_TO_GENERATE_MALFORMED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = new OrekitMessages(env->getStaticObjectField(cls, "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_LAGRANGIAN = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_LAGRANGIAN", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_FIND_SATELLITE_IN_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_FIND_SATELLITE_IN_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_BOTH_TAU_AND_GAMMA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_SOURCETABLE = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_SOURCETABLE", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_START_PROPAGATION_FROM_INFINITY = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_START_PROPAGATION_FROM_INFINITY", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_PREAMBLE_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_PREAMBLE_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_MISSING_AGENCY_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_MISSING_AGENCY_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DIFFERENT_LVLH_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DIFFERENT_LVLH_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPLETE_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPLETE_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_TIME_SYSTEMS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_TIME_SYSTEMS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_ROTATION_SEQUENCE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_ROTATION_SEQUENCE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_MISSING_TIME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_MISSING_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_SENSOR_INDEX = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_SENSOR_INDEX", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_SENSOR_INDEX_ALREADY_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_SENSOR_INDEX_ALREADY_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_KEYWORD_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_KEYWORD_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_READ_YET = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_READ_YET", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNEXPECTED_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNEXPECTED_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_ATTITUDE_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_ATTITUDE_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_CONVENTIONS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_CONVENTIONS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_GM = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_GM", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", "Lorg/orekit/errors/OrekitMessages;"));
          CLOCK_FILE_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CLOCK_FILE_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CONNECTION_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "CONNECTION_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          CORRUPTED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CORRUPTED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CPF_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CPF_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CRD_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CRD_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = new OrekitMessages(env->getStaticObjectField(cls, "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", "Lorg/orekit/errors/OrekitMessages;"));
          DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_TIME_OF_CLOSEST_APPROACH = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_TIME_OF_CLOSEST_APPROACH", "Lorg/orekit/errors/OrekitMessages;"));
          DIMENSION_INCONSISTENT_WITH_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "DIMENSION_INCONSISTENT_WITH_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_NEWCOMB_OPERATORS_COMPUTATION = new OrekitMessages(env->getStaticObjectField(cls, "DSST_NEWCOMB_OPERATORS_COMPUTATION", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_SPR_SHADOW_INCONSISTENT = new OrekitMessages(env->getStaticObjectField(cls, "DSST_SPR_SHADOW_INCONSISTENT", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_VMNS_COEFFICIENT_ERROR_MS = new OrekitMessages(env->getStaticObjectField(cls, "DSST_VMNS_COEFFICIENT_ERROR_MS", "Lorg/orekit/errors/OrekitMessages;"));
          DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          END_OF_ENCODED_MESSAGE = new OrekitMessages(env->getStaticObjectField(cls, "END_OF_ENCODED_MESSAGE", "Lorg/orekit/errors/OrekitMessages;"));
          EVENT_DATE_TOO_CLOSE = new OrekitMessages(env->getStaticObjectField(cls, "EVENT_DATE_TOO_CLOSE", "Lorg/orekit/errors/OrekitMessages;"));
          EXCEPTIONAL_DATA_CONTEXT = new OrekitMessages(env->getStaticObjectField(cls, "EXCEPTIONAL_DATA_CONTEXT", "Lorg/orekit/errors/OrekitMessages;"));
          FAILED_AUTHENTICATION = new OrekitMessages(env->getStaticObjectField(cls, "FAILED_AUTHENTICATION", "Lorg/orekit/errors/OrekitMessages;"));
          FIND_ROOT = new OrekitMessages(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/orekit/errors/OrekitMessages;"));
          FRAMES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ALREADY_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ALREADY_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_BOTH_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_BOTH_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_NEITHER_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_NEITHER_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NOT_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NOT_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NO_NTH_ANCESTOR = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NO_NTH_ANCESTOR", "Lorg/orekit/errors/OrekitMessages;"));
          FUNCTION_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "FUNCTION_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          GNSS_PARITY_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "GNSS_PARITY_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = new OrekitMessages(env->getStaticObjectField(cls, "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_ALREADY_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_ALREADY_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_NOT_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_NOT_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HYPERBOLIC_ORBIT_NOT_HANDLED_AS = new OrekitMessages(env->getStaticObjectField(cls, "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_UNITS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_UNITS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPLETE_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPLETE_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_DATES_IN_IERS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_DATES_IN_IERS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_ELEMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_ELEMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_SATS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_SATS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SAMPLING_DATE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SAMPLING_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SELECTION = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SELECTION", "Lorg/orekit/errors/OrekitMessages;"));
          INERTIAL_FORCE_MODEL_MISSING = new OrekitMessages(env->getStaticObjectField(cls, "INERTIAL_FORCE_MODEL_MISSING", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", "Lorg/orekit/errors/OrekitMessages;"));
          INTERNAL_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_PARAMETER_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_PARAMETER_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_RANGE_INDICATOR_IN_CRD_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_RANGE_INDICATOR_IN_CRD_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_ID = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_ID", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_TYPE_FOR_FUNCTION = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_TYPE_FOR_FUNCTION", "Lorg/orekit/errors/OrekitMessages;"));
          IRREGULAR_OR_INCOMPLETE_GRID = new OrekitMessages(env->getStaticObjectField(cls, "IRREGULAR_OR_INCOMPLETE_GRID", "Lorg/orekit/errors/OrekitMessages;"));
          ITRF_VERSIONS_PREFIX_ONLY = new OrekitMessages(env->getStaticObjectField(cls, "ITRF_VERSIONS_PREFIX_ONLY", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          MISMATCHED_FREQUENCIES = new OrekitMessages(env->getStaticObjectField(cls, "MISMATCHED_FREQUENCIES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SECOND_TLE_LINE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SECOND_TLE_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SERIE_J_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SERIE_J_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_STATION_DATA_FOR_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_STATION_DATA_FOR_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_VELOCITY = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_VELOCITY", "Lorg/orekit/errors/OrekitMessages;"));
          MODIP_GRID_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "MODIP_GRID_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          MOUNPOINT_ALREADY_CONNECTED = new OrekitMessages(env->getStaticObjectField(cls, "MOUNPOINT_ALREADY_CONNECTED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_INTERPOLATOR_USED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_INTERPOLATOR_USED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_SHOOTING_UNDERCONSTRAINED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_SHOOTING_UNDERCONSTRAINED", "Lorg/orekit/errors/OrekitMessages;"));
          NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = new OrekitMessages(env->getStaticObjectField(cls, "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", "Lorg/orekit/errors/OrekitMessages;"));
          NEQUICK_F2_FM3_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NEQUICK_F2_FM3_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICALLY_SORTED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICALLY_SORTED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_COPLANAR_POINTS = new OrekitMessages(env->getStaticObjectField(cls, "NON_COPLANAR_POINTS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_DIFFERENT_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DAY_NUMBER_IN_YEAR = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DAY_NUMBER_IN_YEAR", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_GEOMAGNETIC_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_GEOMAGNETIC_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_HMS_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_HMS_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_WEEK_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_WEEK_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_YEAR_MONTH_DAY = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_YEAR_MONTH_DAY", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_RESETABLE_STATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_RESETABLE_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_DIRECTORY = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_DIRECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_JPL_EPHEMERIDES_BINARY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_IERS_DATA_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_IERS_DATA_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_SEM_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_ATTITUDE_PROVIDERS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_ATTITUDE_PROVIDERS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_CACHED_NEIGHBORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_CACHED_NEIGHBORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_DATA = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_GNSS_FOR_DOP = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_GNSS_FOR_DOP", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_PROPAGATORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_PROPAGATORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_POSITIVE_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_POSITIVE_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_STRICTLY_POSITIVE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_STRICTLY_POSITIVE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_TLE_LINES = new OrekitMessages(env->getStaticObjectField(cls, "NOT_TLE_LINES", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_VALID_INTERNATIONAL_DESIGNATOR = new OrekitMessages(env->getStaticObjectField(cls, "NOT_VALID_INTERNATIONAL_DESIGNATOR", "Lorg/orekit/errors/OrekitMessages;"));
          NO_CACHED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NO_CACHED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_GENERATED = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_GENERATED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_LOADED_FOR_CELESTIAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_LOADED_FOR_CELESTIAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EPOCH_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_EPOCH_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_GRAVITY_FIELD_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_GRAVITY_FIELD_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_INTERPOLATOR_FOR_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "NO_INTERPOLATOR_FOR_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_OCEAN_TIDE_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_OCEAN_TIDE_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_PROPAGATOR_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_PROPAGATOR_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_REFERENCE_DATE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "NO_REFERENCE_DATE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SEM_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SEM_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SOLAR_ACTIVITY_AT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SOLAR_ACTIVITY_AT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SUCH_ITRF_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NO_SUCH_ITRF_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TEC_DATA_IN_FILES_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TEC_DATA_IN_FILES_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_DATA_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_DATA_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          NO_UNSCENTED_TRANSFORM_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_UNSCENTED_TRANSFORM_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_YUMA_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_YUMA_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_ARGUMENT = new OrekitMessages(env->getStaticObjectField(cls, "NULL_ARGUMENT", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_PARENT_FOR_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NULL_PARENT_FOR_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          ORBITS_MUS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBITS_MUS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_AND_ATTITUDE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_AND_ATTITUDE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_TYPE_NOT_ALLOWED = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_TYPE_NOT_ALLOWED", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DERIVATION_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DERIVATION_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_NOT_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_NOT_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", "Lorg/orekit/errors/OrekitMessages;"));
          POINT_INSIDE_ELLIPSOID = new OrekitMessages(env->getStaticObjectField(cls, "POINT_INSIDE_ELLIPSOID", "Lorg/orekit/errors/OrekitMessages;"));
          POLAR_TRAJECTORY = new OrekitMessages(env->getStaticObjectField(cls, "POLAR_TRAJECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          POSITIVE_FLOW_RATE = new OrekitMessages(env->getStaticObjectField(cls, "POSITIVE_FLOW_RATE", "Lorg/orekit/errors/OrekitMessages;"));
          SATELLITE_COLLIDED_WITH_TARGET = new OrekitMessages(env->getStaticObjectField(cls, "SATELLITE_COLLIDED_WITH_TARGET", "Lorg/orekit/errors/OrekitMessages;"));
          SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          SOURCETABLE_PARSE_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "SOURCETABLE_PARSE_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_FILE_METADATA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_FILE_METADATA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_SATELLITE_MEDATADA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INVALID_HEADER_ENTRY = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INVALID_HEADER_ENTRY", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_NUMBER_OF_EPOCH_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "SP3_NUMBER_OF_EPOCH_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_TOO_MANY_SATELLITES_FOR_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_TOO_MANY_SATELLITES_FOR_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_COVARIANCE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_COVARIANCE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_6X6 = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_6X6", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_INITIALIZED = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_INITIALIZED", "Lorg/orekit/errors/OrekitMessages;"));
          STATION_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "STATION_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          STEC_INTEGRATION_DID_NOT_CONVERGE = new OrekitMessages(env->getStaticObjectField(cls, "STEC_INTEGRATION_DID_NOT_CONVERGE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNMAPPED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNMAPPED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STREAM_REQUIRES_NMEA_FIX = new OrekitMessages(env->getStaticObjectField(cls, "STREAM_REQUIRES_NMEA_FIX", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_CHECKSUM_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "TLE_CHECKSUM_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_INVALID_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TLE_INVALID_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SMALL_SCALE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SMALL_SCALE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_NOT_CROSSING_XZPLANE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_NOT_CROSSING_XZPLANE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_TLE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_TLE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_RESOURCE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_RESOURCE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_ELEMENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_ELEMENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_READ_JPL_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_READ_JPL_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ABSOLUTE_PVCOORDINATES = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ABSOLUTE_PVCOORDINATES", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_CONTENT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_CONTENT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AFTER_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AT_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AT_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE_AFTER_LINE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE_AFTER_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FORMAT_FOR_ILRS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FORMAT_FOR_ILRS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNINITIALIZED_VALUE_FOR_KEY = new OrekitMessages(env->getStaticObjectField(cls, "UNINITIALIZED_VALUE_FOR_KEY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ADDITIONAL_STATE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ADDITIONAL_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_AUTHENTICATION_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_AUTHENTICATION_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CARRIER_PHASE_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CARRIER_PHASE_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CLOCK_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CLOCK_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_DATA_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_DATA_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ENCODED_MESSAGE_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ENCODED_MESSAGE_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_HOST = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_HOST", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_NAVIGATION_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_NAVIGATION_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_RINEX_FREQUENCY = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_RINEX_FREQUENCY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_ANTENNA_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_ANTENNA_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_TIME_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_TIME_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UNIT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UNIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UTC_ID = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UTC_ID", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FREQUENCY_FOR_ANTENNA = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_LOCAL_ORBITAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_LOCAL_ORBITAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_PARAMETER_NAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_PARAMETER_NAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          VALUE_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "VALUE_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_COLUMNS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_COLUMNS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_DEGREE_OR_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_DEGREE_OR_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_EOP_INTERPOLATION_DEGREE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_EOP_INTERPOLATION_DEGREE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_ORBIT_PARAMETERS_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_ORBIT_PARAMETERS_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_PARSING_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_PARSING_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String OrekitMessages::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
      }

      ::java::lang::String OrekitMessages::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
      }

      OrekitMessages OrekitMessages::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b2403a9fc6183395], a0.this$));
      }

      JArray< OrekitMessages > OrekitMessages::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrekitMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_5596e855fb4dc890]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args);
      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg);
      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self);
      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrekitMessages_values(PyTypeObject *type);
      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data);
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data);
      static PyGetSetDef t_OrekitMessages__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages, sourceString),
        DECLARE_GET_FIELD(t_OrekitMessages, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages, getLocalizedString, METH_O),
        DECLARE_METHOD(t_OrekitMessages, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_OrekitMessages, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages)[] = {
        { Py_tp_methods, t_OrekitMessages__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitMessages__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrekitMessages, t_OrekitMessages, OrekitMessages);
      PyObject *t_OrekitMessages::wrap_Object(const OrekitMessages& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages), &PY_TYPE_DEF(OrekitMessages), module, "OrekitMessages", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(OrekitMessages$UTF8Control)));
      }

      void t_OrekitMessages::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "class_", make_descriptor(OrekitMessages::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "wrapfn_", make_descriptor(t_OrekitMessages::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrekitMessages::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_CRITICALLY_INCLINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_EQUATORIAL_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_EQUATORIAL_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALTITUDE_BELOW_ALLOWED_THRESHOLD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ANGLE_TYPE_NOT_SUPPORTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTEMPT_TO_GENERATE_MALFORMED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_LAGRANGIAN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_FIND_SATELLITE_IN_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_SOURCETABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_SOURCETABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_START_PROPAGATION_FROM_INFINITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_PREAMBLE_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_MISSING_AGENCY_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DIFFERENT_LVLH_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPLETE_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPLETE_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_TIME_SYSTEMS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_ROTATION_SEQUENCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_MISSING_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_MISSING_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_SENSOR_INDEX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_SENSOR_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_SENSOR_INDEX_ALREADY_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_KEYWORD_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_READ_YET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNEXPECTED_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNEXPECTED_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_ATTITUDE_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_CONVENTIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_GM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_GM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CLOCK_FILE_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CONNECTION_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CONNECTION_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CORRUPTED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CORRUPTED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CPF_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CPF_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CRD_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CRD_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_TIME_OF_CLOSEST_APPROACH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIMENSION_INCONSISTENT_WITH_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_NEWCOMB_OPERATORS_COMPUTATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_SPR_SHADOW_INCONSISTENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_VMNS_COEFFICIENT_ERROR_MS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "END_OF_ENCODED_MESSAGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::END_OF_ENCODED_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EVENT_DATE_TOO_CLOSE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EVENT_DATE_TOO_CLOSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EXCEPTIONAL_DATA_CONTEXT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EXCEPTIONAL_DATA_CONTEXT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FAILED_AUTHENTICATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FAILED_AUTHENTICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FIND_ROOT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAMES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAMES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ALREADY_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ALREADY_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_BOTH_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_NEITHER_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NOT_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NOT_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NO_NTH_ANCESTOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NO_NTH_ANCESTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FUNCTION_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FUNCTION_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GNSS_PARITY_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GNSS_PARITY_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_ALREADY_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_ALREADY_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_NOT_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_NOT_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_UNITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPLETE_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPLETE_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_DATES_IN_IERS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_ELEMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_SATS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_SATS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SAMPLING_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SAMPLING_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SELECTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SELECTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INERTIAL_FORCE_MODEL_MISSING", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INERTIAL_FORCE_MODEL_MISSING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INTERNAL_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_PARAMETER_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_PARAMETER_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_RANGE_INDICATOR_IN_CRD_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_TYPE_FOR_FUNCTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_TYPE_FOR_FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "IRREGULAR_OR_INCOMPLETE_GRID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ITRF_VERSIONS_PREFIX_ONLY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISMATCHED_FREQUENCIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISMATCHED_FREQUENCIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SECOND_TLE_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SECOND_TLE_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SERIE_J_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SERIE_J_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_STATION_DATA_FOR_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_VELOCITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MODIP_GRID_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MODIP_GRID_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MOUNPOINT_ALREADY_CONNECTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MOUNPOINT_ALREADY_CONNECTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_INTERPOLATOR_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_INTERPOLATOR_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_SHOOTING_UNDERCONSTRAINED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEQUICK_F2_FM3_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICALLY_SORTED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_COPLANAR_POINTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_COPLANAR_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DAY_NUMBER_IN_YEAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_GEOMAGNETIC_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_HMS_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_HMS_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_WEEK_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_WEEK_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_YEAR_MONTH_DAY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_RESETABLE_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_RESETABLE_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_DIRECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_DIRECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_IERS_DATA_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_ATTITUDE_PROVIDERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_CACHED_NEIGHBORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_GNSS_FOR_DOP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_PROPAGATORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_PROPAGATORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_POSITIVE_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_STRICTLY_POSITIVE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_STRICTLY_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_TLE_LINES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_TLE_LINES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_VALID_INTERNATIONAL_DESIGNATOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_CACHED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_CACHED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_GENERATED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_GENERATED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_LOADED_FOR_CELESTIAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EPOCH_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EPOCH_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_GRAVITY_FIELD_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_INTERPOLATOR_FOR_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_OCEAN_TIDE_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_PROPAGATOR_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_PROPAGATOR_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_REFERENCE_DATE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SEM_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SEM_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SOLAR_ACTIVITY_AT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SUCH_ITRF_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SUCH_ITRF_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TEC_DATA_IN_FILES_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_DATA_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_DATA_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_UNSCENTED_TRANSFORM_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_YUMA_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_ARGUMENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_PARENT_FOR_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_PARENT_FOR_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBITS_MUS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBITS_MUS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_AND_ATTITUDE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_TYPE_NOT_ALLOWED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_TYPE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DERIVATION_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_NOT_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_NOT_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POINT_INSIDE_ELLIPSOID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POINT_INSIDE_ELLIPSOID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POLAR_TRAJECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POLAR_TRAJECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POSITIVE_FLOW_RATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POSITIVE_FLOW_RATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SATELLITE_COLLIDED_WITH_TARGET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SOURCETABLE_PARSE_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SOURCETABLE_PARSE_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_FILE_METADATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INVALID_HEADER_ENTRY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INVALID_HEADER_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_NUMBER_OF_EPOCH_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_TOO_MANY_SATELLITES_FOR_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_COVARIANCE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_6X6", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_6X6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_INITIALIZED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATION_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATION_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STEC_INTEGRATION_DID_NOT_CONVERGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNMAPPED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STREAM_REQUIRES_NMEA_FIX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STREAM_REQUIRES_NMEA_FIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_CHECKSUM_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_CHECKSUM_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_INVALID_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_INVALID_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SMALL_SCALE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_NOT_CROSSING_XZPLANE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_TLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_TLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_RESOURCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_RESOURCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_ELEMENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_READ_JPL_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_READ_JPL_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ABSOLUTE_PVCOORDINATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_CONTENT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_CONTENT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AT_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE_AFTER_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FORMAT_FOR_ILRS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNINITIALIZED_VALUE_FOR_KEY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ADDITIONAL_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ADDITIONAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_AUTHENTICATION_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CARRIER_PHASE_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CLOCK_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_DATA_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_DATA_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ENCODED_MESSAGE_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_HOST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_HOST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_NAVIGATION_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_RINEX_FREQUENCY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_RINEX_FREQUENCY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_ANTENNA_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_TIME_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_TIME_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UNIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UNIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UTC_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UTC_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_LOCAL_ORBITAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_PARAMETER_NAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_PARAMETER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VALUE_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VALUE_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_COLUMNS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_COLUMNS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_DEGREE_OR_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_DEGREE_OR_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_EOP_INTERPOLATION_DEGREE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_ORBIT_PARAMETERS_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_PARSING_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_PARSING_TYPE)));
      }

      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages::wrap_Object(OrekitMessages(((t_OrekitMessages *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg)
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

      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrekitMessages result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::valueOf(a0));
          return t_OrekitMessages::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrekitMessages_values(PyTypeObject *type)
      {
        JArray< OrekitMessages > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::values());
        return JArray<jobject>(result.this$).wrap(t_OrekitMessages::wrap_jobject);
      }
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/PythonScheduler.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonScheduler::class$ = NULL;
          jmethodID *PythonScheduler::mids$ = NULL;
          bool PythonScheduler::live$ = false;

          jclass PythonScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_generate_22733af3de6e4c17] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_f2ad316b33dc9e1f] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonScheduler::PythonScheduler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonScheduler::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args);
          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self);
          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args);
          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data);
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data);
          static PyGetSetDef t_PythonScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonScheduler, self),
            DECLARE_GET_FIELD(t_PythonScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonScheduler)[] = {
            { Py_tp_methods, t_PythonScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonScheduler_init_ },
            { Py_tp_getset, t_PythonScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonScheduler, t_PythonScheduler, PythonScheduler);
          PyObject *t_PythonScheduler::wrap_Object(const PythonScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonScheduler), &PY_TYPE_DEF(PythonScheduler), module, "PythonScheduler", 1);
          }

          void t_PythonScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "class_", make_descriptor(PythonScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "wrapfn_", make_descriptor(t_PythonScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;", (void *) t_PythonScheduler_generate0 },
              { "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;", (void *) t_PythonScheduler_getBuilder1 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonScheduler_init2 },
              { "pythonDecRef", "()V", (void *) t_PythonScheduler_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonScheduler::wrap_Object(PythonScheduler(((t_PythonScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds)
          {
            PythonScheduler object((jobject) NULL);

            INT_CALL(object = PythonScheduler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args)
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

          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::SortedSet value((jobject) NULL);
            PyObject *o0 = ::java::util::t_Map::wrap_Object(::java::util::Map(a0));
            PyObject *result = PyObject_CallMethod(obj, "generate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::SortedSet::initializeClass, &value))
            {
              throwTypeError("generate", result);
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

          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getBuilder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, &value))
            {
              throwTypeError("getBuilder", result);
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

          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data)
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
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data)
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
#include "org/orekit/orbits/HaloOrbit.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *HaloOrbit::class$ = NULL;
      jmethodID *HaloOrbit::mids$ = NULL;
      bool HaloOrbit::live$ = false;

      jclass HaloOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/HaloOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_939971c9f89cad62] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;DLorg/orekit/orbits/LibrationOrbitFamily;)V");
          mids$[mid_init$_76483bf6754c478b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_b7336fc2717b0a2c] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaloOrbit::HaloOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1, const ::org::orekit::orbits::LibrationOrbitFamily & a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_939971c9f89cad62, a0.this$, a1, a2.this$)) {}

      HaloOrbit::HaloOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_76483bf6754c478b, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_HaloOrbit__methods_[] = {
        DECLARE_METHOD(t_HaloOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaloOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaloOrbit)[] = {
        { Py_tp_methods, t_HaloOrbit__methods_ },
        { Py_tp_init, (void *) t_HaloOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaloOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(HaloOrbit, t_HaloOrbit, HaloOrbit);

      void t_HaloOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(HaloOrbit), &PY_TYPE_DEF(HaloOrbit), module, "HaloOrbit", 0);
      }

      void t_HaloOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "class_", make_descriptor(HaloOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "wrapfn_", make_descriptor(t_HaloOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaloOrbit::initializeClass, 1)))
          return NULL;
        return t_HaloOrbit::wrap_Object(HaloOrbit(((t_HaloOrbit *) arg)->object.this$));
      }
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaloOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::orbits::LibrationOrbitFamily a2((jobject) NULL);
            PyTypeObject **p2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::orbits::RichardsonExpansion::initializeClass, ::org::orekit::orbits::LibrationOrbitFamily::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_LibrationOrbitFamily::parameters_))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeCrossingDetector::class$ = NULL;
        jmethodID *LatitudeCrossingDetector::mids$ = NULL;
        bool LatitudeCrossingDetector::live$ = false;

        jclass LatitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6e31a3b5da8ff979] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_167b63432f87d193] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_940814a1dcab100a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_316a77137cf8faef] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeCrossingDetector::LatitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6e31a3b5da8ff979, a0.this$, a1)) {}

        LatitudeCrossingDetector::LatitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_167b63432f87d193, a0, a1, a2.this$, a3)) {}

        jdouble LatitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_940814a1dcab100a]));
        }

        jdouble LatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_456d9a2f64d6b28d]);
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
        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args);
        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LatitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, latitude),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getLatitude, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LatitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LatitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeCrossingDetector, t_LatitudeCrossingDetector, LatitudeCrossingDetector);
        PyObject *t_LatitudeCrossingDetector::wrap_Object(const LatitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeCrossingDetector), &PY_TYPE_DEF(LatitudeCrossingDetector), module, "LatitudeCrossingDetector", 0);
        }

        void t_LatitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "class_", make_descriptor(LatitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "wrapfn_", make_descriptor(t_LatitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeCrossingDetector::wrap_Object(LatitudeCrossingDetector(((t_LatitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
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

        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitude());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLEPropagator::class$ = NULL;
          jmethodID *FieldTLEPropagator::mids$ = NULL;
          bool FieldTLEPropagator::live$ = false;

          jclass FieldTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_456d9a2f64d6b28d] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_63e06c42f7e5a37c] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTLE_d4ac4bf5ebf13f8b] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_propagateOrbit_edf76d94987be4ff] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
              mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_selectExtrapolator_e4f800c7abd087d8] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_ece2b47b3bab7200] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_8efdc38299d5a549] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_59dbb519b052f24e] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_getMass_7bc0fd76ee915b72] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sxpInitialize_4c337e4c1ec6f647] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_ef0bb554ba052051] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_resetIntermediateState_c76342d42407aa3d] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame FieldTLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          jdouble FieldTLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_456d9a2f64d6b28d]);
          }

          ::org::orekit::utils::FieldPVCoordinates FieldTLEPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_63e06c42f7e5a37c], a0.this$, a1.this$));
          }

          ::java::util::List FieldTLEPropagator::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::orekit::propagation::analytical::tle::FieldTLE FieldTLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_getTLE_d4ac4bf5ebf13f8b]));
          }

          ::org::orekit::orbits::FieldOrbit FieldTLEPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_edf76d94987be4ff], a0.this$, a1.this$));
          }

          void FieldTLEPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_e4f800c7abd087d8], a0.this$, a1.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::frames::Frame & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_ece2b47b3bab7200], a0.this$, a1.this$, a2.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_8efdc38299d5a549], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_59dbb519b052f24e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
          static PyObject *t_FieldTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLEPropagator_of_(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getFrame(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_FieldTLEPropagator_getPVCoordinates(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getParametersDrivers(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getTLE(t_FieldTLEPropagator *self);
          static PyObject *t_FieldTLEPropagator_propagateOrbit(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_resetInitialState(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLEPropagator_get__frame(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__mU(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__parametersDrivers(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__tLE(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__parameters_(t_FieldTLEPropagator *self, void *data);
          static PyGetSetDef t_FieldTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLEPropagator, frame),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, mU),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, tLE),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_FieldTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, propagateOrbit, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLEPropagator)[] = {
            { Py_tp_methods, t_FieldTLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(FieldTLEPropagator, t_FieldTLEPropagator, FieldTLEPropagator);
          PyObject *t_FieldTLEPropagator::wrap_Object(const FieldTLEPropagator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLEPropagator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLEPropagator *self = (t_FieldTLEPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLEPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLEPropagator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLEPropagator *self = (t_FieldTLEPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLEPropagator), &PY_TYPE_DEF(FieldTLEPropagator), module, "FieldTLEPropagator", 0);
          }

          void t_FieldTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "class_", make_descriptor(FieldTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "wrapfn_", make_descriptor(t_FieldTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_FieldTLEPropagator::wrap_Object(FieldTLEPropagator(((t_FieldTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_FieldTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLEPropagator_of_(t_FieldTLEPropagator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTLEPropagator_getFrame(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLEPropagator_getPVCoordinates(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getParametersDrivers(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getTLE(t_FieldTLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLEPropagator_propagateOrbit(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
            return NULL;
          }

          static PyObject *t_FieldTLEPropagator_resetInitialState(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::Frame a1((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2, a3, a4));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }
          static PyObject *t_FieldTLEPropagator_get__parameters_(t_FieldTLEPropagator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLEPropagator_get__frame(t_FieldTLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_FieldTLEPropagator_get__mU(t_FieldTLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLEPropagator_get__parametersDrivers(t_FieldTLEPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLEPropagator_get__tLE(t_FieldTLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnitsConverter::class$ = NULL;
            jmethodID *RangeUnitsConverter::mids$ = NULL;
            bool RangeUnitsConverter::live$ = false;

            jclass RangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_metersToRu_84fe3cf394b0532d] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_84fe3cf394b0532d] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble RangeUnitsConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_84fe3cf394b0532d], a0.this$, a1.this$, a2);
            }

            jdouble RangeUnitsConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_84fe3cf394b0532d], a0.this$, a1.this$, a2);
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
            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args);
            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args);

            static PyMethodDef t_RangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_RangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnitsConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnitsConverter)[] = {
              { Py_tp_methods, t_RangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RangeUnitsConverter, t_RangeUnitsConverter, RangeUnitsConverter);

            void t_RangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnitsConverter), &PY_TYPE_DEF(RangeUnitsConverter), module, "RangeUnitsConverter", 0);
            }

            void t_RangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "class_", make_descriptor(RangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "wrapfn_", make_descriptor(t_RangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_RangeUnitsConverter::wrap_Object(RangeUnitsConverter(((t_RangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
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
#include "org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GradientMultivariateOptimizer::class$ = NULL;
          jmethodID *GradientMultivariateOptimizer::mids$ = NULL;
          bool GradientMultivariateOptimizer::live$ = false;

          jclass GradientMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_optimize_02ecb87ce66bcfc1] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
              mids$[mid_computeObjectiveGradient_4b742fe429c22ba8] = env->getMethodID(cls, "computeObjectiveGradient", "([D)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::optim::PointValuePair GradientMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_02ecb87ce66bcfc1], a0.this$));
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
        namespace scalar {
          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_GradientMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_GradientMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GradientMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_GradientMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GradientMultivariateOptimizer)[] = {
            { Py_tp_methods, t_GradientMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GradientMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GradientMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(GradientMultivariateOptimizer, t_GradientMultivariateOptimizer, GradientMultivariateOptimizer);
          PyObject *t_GradientMultivariateOptimizer::wrap_Object(const GradientMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GradientMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GradientMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(GradientMultivariateOptimizer), &PY_TYPE_DEF(GradientMultivariateOptimizer), module, "GradientMultivariateOptimizer", 0);
          }

          void t_GradientMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "class_", make_descriptor(GradientMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "wrapfn_", make_descriptor(t_GradientMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GradientMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_GradientMultivariateOptimizer::wrap_Object(GradientMultivariateOptimizer(((t_GradientMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GradientMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GradientMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data)
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
#include "java/lang/Long.h"
#include "java/lang/Comparable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Long::class$ = NULL;
    jmethodID *Long::mids$ = NULL;
    bool Long::live$ = false;
    jint Long::BYTES = (jint) 0;
    jlong Long::MAX_VALUE = (jlong) 0;
    jlong Long::MIN_VALUE = (jlong) 0;
    jint Long::SIZE = (jint) 0;
    ::java::lang::Class *Long::TYPE = NULL;

    jclass Long::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Long");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_bitCount_81b31113dbb4e784] = env->getStaticMethodID(cls, "bitCount", "(J)I");
        mids$[mid_byteValue_1d06dd1980a98d13] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_ca2a0e372d8357f3] = env->getStaticMethodID(cls, "compare", "(JJ)I");
        mids$[mid_compareTo_b5753ce4b4fd5563] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Long;)I");
        mids$[mid_compareUnsigned_ca2a0e372d8357f3] = env->getStaticMethodID(cls, "compareUnsigned", "(JJ)I");
        mids$[mid_decode_743f11a4f4a49d3e] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_divideUnsigned_8f974216cbe53aea] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
        mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getLong_743f11a4f4a49d3e] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_getLong_dd5aad86b6ec92f4] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;");
        mids$[mid_getLong_564f79cb8465e383] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;J)Ljava/lang/Long;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_81b31113dbb4e784] = env->getStaticMethodID(cls, "hashCode", "(J)I");
        mids$[mid_highestOneBit_955f7541fca701ab] = env->getStaticMethodID(cls, "highestOneBit", "(J)J");
        mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_955f7541fca701ab] = env->getStaticMethodID(cls, "lowestOneBit", "(J)J");
        mids$[mid_max_8f974216cbe53aea] = env->getStaticMethodID(cls, "max", "(JJ)J");
        mids$[mid_min_8f974216cbe53aea] = env->getStaticMethodID(cls, "min", "(JJ)J");
        mids$[mid_numberOfLeadingZeros_81b31113dbb4e784] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(J)I");
        mids$[mid_numberOfTrailingZeros_81b31113dbb4e784] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(J)I");
        mids$[mid_parseLong_cd11fe529eef6ae9] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;)J");
        mids$[mid_parseLong_18c5cb7968e2fe7c] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseLong_73809afe8eb8756d] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_parseUnsignedLong_cd11fe529eef6ae9] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;)J");
        mids$[mid_parseUnsignedLong_18c5cb7968e2fe7c] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseUnsignedLong_73809afe8eb8756d] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_remainderUnsigned_8f974216cbe53aea] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
        mids$[mid_reverse_955f7541fca701ab] = env->getStaticMethodID(cls, "reverse", "(J)J");
        mids$[mid_reverseBytes_955f7541fca701ab] = env->getStaticMethodID(cls, "reverseBytes", "(J)J");
        mids$[mid_rotateLeft_1672c32325bd5d4a] = env->getStaticMethodID(cls, "rotateLeft", "(JI)J");
        mids$[mid_rotateRight_1672c32325bd5d4a] = env->getStaticMethodID(cls, "rotateRight", "(JI)J");
        mids$[mid_shortValue_f89720844d790ad7] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_81b31113dbb4e784] = env->getStaticMethodID(cls, "signum", "(J)I");
        mids$[mid_sum_8f974216cbe53aea] = env->getStaticMethodID(cls, "sum", "(JJ)J");
        mids$[mid_toBinaryString_8da367bd62adf91c] = env->getStaticMethodID(cls, "toBinaryString", "(J)Ljava/lang/String;");
        mids$[mid_toHexString_8da367bd62adf91c] = env->getStaticMethodID(cls, "toHexString", "(J)Ljava/lang/String;");
        mids$[mid_toOctalString_8da367bd62adf91c] = env->getStaticMethodID(cls, "toOctalString", "(J)Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_8da367bd62adf91c] = env->getStaticMethodID(cls, "toString", "(J)Ljava/lang/String;");
        mids$[mid_toString_36324403461d7e32] = env->getStaticMethodID(cls, "toString", "(JI)Ljava/lang/String;");
        mids$[mid_toUnsignedString_8da367bd62adf91c] = env->getStaticMethodID(cls, "toUnsignedString", "(J)Ljava/lang/String;");
        mids$[mid_toUnsignedString_36324403461d7e32] = env->getStaticMethodID(cls, "toUnsignedString", "(JI)Ljava/lang/String;");
        mids$[mid_valueOf_743f11a4f4a49d3e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_valueOf_0097ea5d7f3125d1] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/Long;");
        mids$[mid_valueOf_c70eb1f50fb9ea56] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Long;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticLongField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticLongField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Long::Long(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Long::Long(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

    jint Long::bitCount(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_81b31113dbb4e784], a0);
    }

    jbyte Long::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_1d06dd1980a98d13]);
    }

    jint Long::compare(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_ca2a0e372d8357f3], a0, a1);
    }

    jint Long::compareTo(const Long & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_b5753ce4b4fd5563], a0.this$);
    }

    jint Long::compareUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_ca2a0e372d8357f3], a0, a1);
    }

    Long Long::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_decode_743f11a4f4a49d3e], a0.this$));
    }

    jlong Long::divideUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_8f974216cbe53aea], a0, a1);
    }

    jdouble Long::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
    }

    jboolean Long::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jfloat Long::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
    }

    Long Long::getLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_743f11a4f4a49d3e], a0.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, const Long & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_dd5aad86b6ec92f4], a0.this$, a1.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_564f79cb8465e383], a0.this$, a1));
    }

    jint Long::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint Long::hashCode(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_81b31113dbb4e784], a0);
    }

    jlong Long::highestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_highestOneBit_955f7541fca701ab], a0);
    }

    jint Long::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
    }

    jlong Long::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
    }

    jlong Long::lowestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_lowestOneBit_955f7541fca701ab], a0);
    }

    jlong Long::max$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_max_8f974216cbe53aea], a0, a1);
    }

    jlong Long::min$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_min_8f974216cbe53aea], a0, a1);
    }

    jint Long::numberOfLeadingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_81b31113dbb4e784], a0);
    }

    jint Long::numberOfTrailingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_81b31113dbb4e784], a0);
    }

    jlong Long::parseLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_cd11fe529eef6ae9], a0.this$);
    }

    jlong Long::parseLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_18c5cb7968e2fe7c], a0.this$, a1);
    }

    jlong Long::parseLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_73809afe8eb8756d], a0.this$, a1, a2, a3);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_cd11fe529eef6ae9], a0.this$);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_18c5cb7968e2fe7c], a0.this$, a1);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_73809afe8eb8756d], a0.this$, a1, a2, a3);
    }

    jlong Long::remainderUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_8f974216cbe53aea], a0, a1);
    }

    jlong Long::reverse(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverse_955f7541fca701ab], a0);
    }

    jlong Long::reverseBytes(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverseBytes_955f7541fca701ab], a0);
    }

    jlong Long::rotateLeft(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateLeft_1672c32325bd5d4a], a0, a1);
    }

    jlong Long::rotateRight(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateRight_1672c32325bd5d4a], a0, a1);
    }

    jshort Long::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_f89720844d790ad7]);
    }

    jint Long::signum(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_81b31113dbb4e784], a0);
    }

    jlong Long::sum(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_sum_8f974216cbe53aea], a0, a1);
    }

    ::java::lang::String Long::toBinaryString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_8da367bd62adf91c], a0));
    }

    ::java::lang::String Long::toHexString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_8da367bd62adf91c], a0));
    }

    ::java::lang::String Long::toOctalString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_8da367bd62adf91c], a0));
    }

    ::java::lang::String Long::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::lang::String Long::toString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_8da367bd62adf91c], a0));
    }

    ::java::lang::String Long::toString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_36324403461d7e32], a0, a1));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_8da367bd62adf91c], a0));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_36324403461d7e32], a0, a1));
    }

    Long Long::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_743f11a4f4a49d3e], a0.this$));
    }

    Long Long::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0097ea5d7f3125d1], a0));
    }

    Long Long::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c70eb1f50fb9ea56], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg);
    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_equals(t_Long *self, PyObject *args);
    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args);
    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_intValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_longValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toString(t_Long *self, PyObject *args);
    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Long__methods_[] = {
      DECLARE_METHOD(t_Long, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, bitCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, compareTo, METH_O),
      DECLARE_METHOD(t_Long, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, divideUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, equals, METH_VARARGS),
      DECLARE_METHOD(t_Long, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, getLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Long, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, highestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, lowestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfLeadingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfTrailingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, parseLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, parseUnsignedLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, remainderUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateLeft, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateRight, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, signum, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toBinaryString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toOctalString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toString, METH_VARARGS),
      DECLARE_METHOD(t_Long, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toUnsignedString, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Long)[] = {
      { Py_tp_methods, t_Long__methods_ },
      { Py_tp_init, (void *) t_Long_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Long)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Long, t_Long, Long);

    void t_Long::install(PyObject *module)
    {
      installType(&PY_TYPE(Long), &PY_TYPE_DEF(Long), module, "Long", 0);
    }

    void t_Long::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "class_", make_descriptor(Long::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "wrapfn_", make_descriptor(unboxLong));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "boxfn_", make_descriptor(boxLong));
      env->getClass(Long::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "BYTES", make_descriptor(Long::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MAX_VALUE", make_descriptor(Long::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MIN_VALUE", make_descriptor(Long::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "SIZE", make_descriptor(Long::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Long::TYPE)));
    }

    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Long::initializeClass, 1)))
        return NULL;
      return t_Long::wrap_Object(Long(((t_Long *) arg)->object.this$));
    }
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Long::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Long(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Long object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Long(a0));
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

    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::bitCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "bitCount", arg);
      return NULL;
    }

    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg)
    {
      Long a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Long), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Long result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::decode(a0));
        return t_Long::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::divideUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "divideUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Long_equals(t_Long *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Long a1((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "sO", ::java::lang::PY_TYPE(Long), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLong", args);
      return NULL;
    }

    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::highestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "highestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_intValue(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Long_longValue(t_Long *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::lowestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "lowestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::max$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::min$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfLeadingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfLeadingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfTrailingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfTrailingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseLong", args);
      return NULL;
    }

    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseUnsignedLong", args);
      return NULL;
    }

    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::remainderUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "remainderUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverseBytes(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateLeft(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateLeft", args);
      return NULL;
    }

    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateRight(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateRight", args);
      return NULL;
    }

    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::signum(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "signum", arg);
      return NULL;
    }

    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::sum(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toBinaryString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toBinaryString", arg);
      return NULL;
    }

    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toOctalString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toOctalString", arg);
      return NULL;
    }

    static PyObject *t_Long_toString(t_Long *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUnsignedString", args);
      return NULL;
    }

    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        {
          jlong a0;
          Long result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_eb797cf50ec4b2c4] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_2b88003f931f70a7], a0.this$);
        }

        void OrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_eb797cf50ec4b2c4], a0.this$);
        }

        void OrekitStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderProcessingState::class$ = NULL;
            jmethodID *CdmHeaderProcessingState::mids$ = NULL;
            bool CdmHeaderProcessingState::live$ = false;

            jclass CdmHeaderProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f75f6785318254a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)V");
                mids$[mid_processToken_aa256c47fb7b26f1] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeaderProcessingState::CdmHeaderProcessingState(const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f75f6785318254a8, a0.this$)) {}

            jboolean CdmHeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_aa256c47fb7b26f1], a0.this$);
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
            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg);

            static PyMethodDef t_CdmHeaderProcessingState__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderProcessingState)[] = {
              { Py_tp_methods, t_CdmHeaderProcessingState__methods_ },
              { Py_tp_init, (void *) t_CdmHeaderProcessingState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmHeaderProcessingState, t_CdmHeaderProcessingState, CdmHeaderProcessingState);

            void t_CdmHeaderProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderProcessingState), &PY_TYPE_DEF(CdmHeaderProcessingState), module, "CdmHeaderProcessingState", 0);
            }

            void t_CdmHeaderProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "class_", make_descriptor(CdmHeaderProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "wrapfn_", make_descriptor(t_CdmHeaderProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderProcessingState::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderProcessingState::wrap_Object(CdmHeaderProcessingState(((t_CdmHeaderProcessingState *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a0((jobject) NULL);
              PyTypeObject **p0;
              CdmHeaderProcessingState object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                INT_CALL(object = CdmHeaderProcessingState(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
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
#include "org/orekit/utils/ParameterObserver.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterObserver::class$ = NULL;
      jmethodID *ParameterObserver::mids$ = NULL;
      bool ParameterObserver::live$ = false;

      jclass ParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_estimationTypeChanged_aa2456410c9edfed] = env->getMethodID(cls, "estimationTypeChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_maxValueChanged_8bad56a4adb01d6f] = env->getMethodID(cls, "maxValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_minValueChanged_8bad56a4adb01d6f] = env->getMethodID(cls, "minValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_nameChanged_8306c9e30f20d9eb] = env->getMethodID(cls, "nameChanged", "(Ljava/lang/String;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceDateChanged_9d84e904439808dd] = env->getMethodID(cls, "referenceDateChanged", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceValueChanged_8bad56a4adb01d6f] = env->getMethodID(cls, "referenceValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_scaleChanged_8bad56a4adb01d6f] = env->getMethodID(cls, "scaleChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_selectionChanged_aa2456410c9edfed] = env->getMethodID(cls, "selectionChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_valueChanged_25a9530287ebc441] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_dc11aff94465299a] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ParameterObserver::estimationTypeChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_estimationTypeChanged_aa2456410c9edfed], a0, a1.this$);
      }

      void ParameterObserver::maxValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_maxValueChanged_8bad56a4adb01d6f], a0, a1.this$);
      }

      void ParameterObserver::minValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_minValueChanged_8bad56a4adb01d6f], a0, a1.this$);
      }

      void ParameterObserver::nameChanged(const ::java::lang::String & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_nameChanged_8306c9e30f20d9eb], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceDateChanged(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceDateChanged_9d84e904439808dd], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceValueChanged_8bad56a4adb01d6f], a0, a1.this$);
      }

      void ParameterObserver::scaleChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaleChanged_8bad56a4adb01d6f], a0, a1.this$);
      }

      void ParameterObserver::selectionChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_selectionChanged_aa2456410c9edfed], a0, a1.this$);
      }

      void ParameterObserver::valueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_valueChanged_25a9530287ebc441], a0, a1.this$, a2.this$);
      }

      void ParameterObserver::valueSpanMapChanged(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_valueSpanMapChanged_dc11aff94465299a], a0.this$, a1.this$);
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
      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args);

      static PyMethodDef t_ParameterObserver__methods_[] = {
        DECLARE_METHOD(t_ParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, estimationTypeChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, maxValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, minValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, nameChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceDateChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, scaleChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, selectionChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueSpanMapChanged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterObserver)[] = {
        { Py_tp_methods, t_ParameterObserver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterObserver, t_ParameterObserver, ParameterObserver);

      void t_ParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterObserver), &PY_TYPE_DEF(ParameterObserver), module, "ParameterObserver", 0);
      }

      void t_ParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "class_", make_descriptor(ParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "wrapfn_", make_descriptor(t_ParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterObserver::initializeClass, 1)))
          return NULL;
        return t_ParameterObserver::wrap_Object(ParameterObserver(((t_ParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.estimationTypeChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "estimationTypeChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.maxValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "maxValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.minValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "minValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.nameChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "nameChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceDateChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceDateChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaleChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaleChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.selectionChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "selectionChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.valueChanged(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1))
        {
          OBJ_CALL(self->object.valueSpanMapChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueSpanMapChanged", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEIntegrator::class$ = NULL;
      jmethodID *FieldODEIntegrator::mids$ = NULL;
      bool FieldODEIntegrator::live$ = false;

      jclass FieldODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_51c8f19515e56fc6] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_08e1e17c6db119ef] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_d88adba4c2bf364d] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_e6d4d3215c30992a] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_a6156df500549a58] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_a6156df500549a58] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_a6156df500549a58] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_f1f1c5e26e98a1d9] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_integrate_668e072c435ebb6b] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_51c8f19515e56fc6], a0.this$);
      }

      void FieldODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_08e1e17c6db119ef], a0.this$);
      }

      void FieldODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_d88adba4c2bf364d], a0.this$);
      }

      void FieldODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_7ae3461a92a43152]);
      }

      void FieldODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_7ae3461a92a43152]);
      }

      void FieldODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_7ae3461a92a43152]);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_e6d4d3215c30992a]));
      }

      jint FieldODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
      }

      ::java::util::List FieldODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a6156df500549a58]));
      }

      jint FieldODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_f2f64475e4580546]);
      }

      ::java::lang::String FieldODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::java::util::List FieldODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_a6156df500549a58]));
      }

      ::java::util::List FieldODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_a6156df500549a58]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_f1f1c5e26e98a1d9]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_668e072c435ebb6b], a0.this$, a1.this$, a2.this$));
      }

      void FieldODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_0a2a1ac2721c0336], a0);
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
      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data);
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data);
      static PyGetSetDef t_FieldODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_FieldODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, name),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepStart),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegrator)[] = {
        { Py_tp_methods, t_FieldODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEIntegrator, t_FieldODEIntegrator, FieldODEIntegrator);
      PyObject *t_FieldODEIntegrator::wrap_Object(const FieldODEIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEIntegrator), &PY_TYPE_DEF(FieldODEIntegrator), module, "FieldODEIntegrator", 0);
      }

      void t_FieldODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "class_", make_descriptor(FieldODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "wrapfn_", make_descriptor(t_FieldODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldODEIntegrator::wrap_Object(FieldODEIntegrator(((t_FieldODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well1024a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well1024a::class$ = NULL;
      jmethodID *Well1024a::mids$ = NULL;
      bool Well1024a::live$ = false;

      jclass Well1024a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well1024a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well1024a::Well1024a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Well1024a::Well1024a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      Well1024a::Well1024a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      Well1024a::Well1024a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jint Well1024a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
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
      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args);

      static PyMethodDef t_Well1024a__methods_[] = {
        DECLARE_METHOD(t_Well1024a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well1024a)[] = {
        { Py_tp_methods, t_Well1024a__methods_ },
        { Py_tp_init, (void *) t_Well1024a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well1024a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well1024a, t_Well1024a, Well1024a);

      void t_Well1024a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well1024a), &PY_TYPE_DEF(Well1024a), module, "Well1024a", 0);
      }

      void t_Well1024a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "class_", make_descriptor(Well1024a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "wrapfn_", make_descriptor(t_Well1024a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well1024a::initializeClass, 1)))
          return NULL;
        return t_Well1024a::wrap_Object(Well1024a(((t_Well1024a *) arg)->object.this$));
      }
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well1024a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well1024a object((jobject) NULL);

            INT_CALL(object = Well1024a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well1024a(a0));
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

      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well1024a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
