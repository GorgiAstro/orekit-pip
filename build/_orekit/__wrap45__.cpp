#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *PolygonsSet::class$ = NULL;
          jmethodID *PolygonsSet::mids$ = NULL;
          bool PolygonsSet::live$ = false;

          jclass PolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/PolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_13c8781402997e7b] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_83911a7bf86bdb7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_457d0c956b0d24c0] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_edc3692668d70430] = env->getMethodID(cls, "<init>", "(DDDDD)V");
              mids$[mid_buildNew_d65d8015a754d547] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");
              mids$[mid_getVertices_3148fb2528a2077d] = env->getMethodID(cls, "getVertices", "()[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_computeGeometricalProperties_ff7cb6c242604316] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolygonsSet::PolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          PolygonsSet::PolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_13c8781402997e7b, a0, a1.this$)) {}

          PolygonsSet::PolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_83911a7bf86bdb7d, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_457d0c956b0d24c0, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_edc3692668d70430, a0, a1, a2, a3, a4)) {}

          PolygonsSet PolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_d65d8015a754d547], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > PolygonsSet::getVertices() const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getVertices_3148fb2528a2077d]));
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
          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args);
          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args);
          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self);
          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data);
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data);
          static PyGetSetDef t_PolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolygonsSet, vertices),
            DECLARE_GET_FIELD(t_PolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolygonsSet__methods_[] = {
            DECLARE_METHOD(t_PolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolygonsSet)[] = {
            { Py_tp_methods, t_PolygonsSet__methods_ },
            { Py_tp_init, (void *) t_PolygonsSet_init_ },
            { Py_tp_getset, t_PolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolygonsSet, t_PolygonsSet, PolygonsSet);
          PyObject *t_PolygonsSet::wrap_Object(const PolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolygonsSet), &PY_TYPE_DEF(PolygonsSet), module, "PolygonsSet", 0);
          }

          void t_PolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "class_", make_descriptor(PolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "wrapfn_", make_descriptor(t_PolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolygonsSet::initializeClass, 1)))
              return NULL;
            return t_PolygonsSet::wrap_Object(PolygonsSet(((t_PolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a1((jobject) NULL);
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = PolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(NULL);
          }
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventEnablingPredicateFilter::class$ = NULL;
        jmethodID *EventEnablingPredicateFilter::mids$ = NULL;
        bool EventEnablingPredicateFilter::live$ = false;

        jclass EventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_916ffefa53023657] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/EnablingPredicate;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_ebd847a60689999d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_cbc41ee6a4e00390] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventEnablingPredicateFilter::EventEnablingPredicateFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::EnablingPredicate & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_916ffefa53023657, a0.this$, a1.this$)) {}

        jdouble EventEnablingPredicateFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_ebd847a60689999d]));
        }

        void EventEnablingPredicateFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args);
        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self);
        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data);
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_EventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_EventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_EventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_EventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_EventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventEnablingPredicateFilter, t_EventEnablingPredicateFilter, EventEnablingPredicateFilter);
        PyObject *t_EventEnablingPredicateFilter::wrap_Object(const EventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventEnablingPredicateFilter), &PY_TYPE_DEF(EventEnablingPredicateFilter), module, "EventEnablingPredicateFilter", 0);
        }

        void t_EventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "class_", make_descriptor(EventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_EventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_EventEnablingPredicateFilter::wrap_Object(EventEnablingPredicateFilter(((t_EventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EnablingPredicate a1((jobject) NULL);
          EventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::EnablingPredicate::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EventEnablingPredicateFilter(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventEnablingPredicateFilter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *AdMethodType::class$ = NULL;
          jmethodID *AdMethodType::mids$ = NULL;
          bool AdMethodType::live$ = false;
          AdMethodType *AdMethodType::BATCH = NULL;
          AdMethodType *AdMethodType::EKF = NULL;
          AdMethodType *AdMethodType::FILTER_SMOOTHER = NULL;
          AdMethodType *AdMethodType::QUEST = NULL;
          AdMethodType *AdMethodType::Q_METHOD = NULL;
          AdMethodType *AdMethodType::TRIAD = NULL;

          jclass AdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/AdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_1202a3f3424f940f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/AdMethodType;");
              mids$[mid_values_54a2fc92157a5b12] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/AdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BATCH = new AdMethodType(env->getStaticObjectField(cls, "BATCH", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              EKF = new AdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              FILTER_SMOOTHER = new AdMethodType(env->getStaticObjectField(cls, "FILTER_SMOOTHER", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              QUEST = new AdMethodType(env->getStaticObjectField(cls, "QUEST", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              Q_METHOD = new AdMethodType(env->getStaticObjectField(cls, "Q_METHOD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              TRIAD = new AdMethodType(env->getStaticObjectField(cls, "TRIAD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AdMethodType AdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return AdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1202a3f3424f940f], a0.this$));
          }

          JArray< AdMethodType > AdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< AdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_54a2fc92157a5b12]));
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
          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args);
          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_AdMethodType_values(PyTypeObject *type);
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data);
          static PyGetSetDef t_AdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_AdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AdMethodType__methods_[] = {
            DECLARE_METHOD(t_AdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_AdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AdMethodType)[] = {
            { Py_tp_methods, t_AdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(AdMethodType, t_AdMethodType, AdMethodType);
          PyObject *t_AdMethodType::wrap_Object(const AdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(AdMethodType), &PY_TYPE_DEF(AdMethodType), module, "AdMethodType", 0);
          }

          void t_AdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "class_", make_descriptor(AdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "wrapfn_", make_descriptor(t_AdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(AdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "BATCH", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::BATCH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "EKF", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "FILTER_SMOOTHER", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::FILTER_SMOOTHER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "QUEST", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::QUEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "Q_METHOD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::Q_METHOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "TRIAD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::TRIAD)));
          }

          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AdMethodType::initializeClass, 1)))
              return NULL;
            return t_AdMethodType::wrap_Object(AdMethodType(((t_AdMethodType *) arg)->object.this$));
          }
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            AdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::valueOf(a0));
              return t_AdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_AdMethodType_values(PyTypeObject *type)
          {
            JArray< AdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_AdMethodType::wrap_jobject);
          }
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data)
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
#include "java/io/StringReader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringReader::class$ = NULL;
    jmethodID *StringReader::mids$ = NULL;
    bool StringReader::live$ = false;

    jclass StringReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_8fd427ab23829bf5] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_eee3de00fe971136] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_1f255a7d724a5165] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_eee3de00fe971136] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_ff7cb6c242604316] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_1eaf6eb0a3f3163f] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringReader::StringReader(const ::java::lang::String & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    void StringReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void StringReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_8fd427ab23829bf5], a0);
    }

    jboolean StringReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_eee3de00fe971136]);
    }

    jint StringReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
    }

    jint StringReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_1f255a7d724a5165], a0.this$, a1, a2);
    }

    jboolean StringReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_eee3de00fe971136]);
    }

    void StringReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_ff7cb6c242604316]);
    }

    jlong StringReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_1eaf6eb0a3f3163f], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args);

    static PyMethodDef t_StringReader__methods_[] = {
      DECLARE_METHOD(t_StringReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, close, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, read, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringReader)[] = {
      { Py_tp_methods, t_StringReader__methods_ },
      { Py_tp_init, (void *) t_StringReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(StringReader, t_StringReader, StringReader);

    void t_StringReader::install(PyObject *module)
    {
      installType(&PY_TYPE(StringReader), &PY_TYPE_DEF(StringReader), module, "StringReader", 0);
    }

    void t_StringReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "class_", make_descriptor(StringReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "wrapfn_", make_descriptor(t_StringReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringReader::initializeClass, 1)))
        return NULL;
      return t_StringReader::wrap_Object(StringReader(((t_StringReader *) arg)->object.this$));
    }
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      StringReader object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = StringReader(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldEphemerisGenerator::class$ = NULL;
      jmethodID *FieldEphemerisGenerator::mids$ = NULL;
      bool FieldEphemerisGenerator::live$ = false;

      jclass FieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_8b319b33f07bd303] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::FieldBoundedPropagator FieldEphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::FieldBoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_8b319b33f07bd303]));
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
      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args);
      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self);
      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data);
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_FieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, generatedEphemeris),
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_FieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEphemerisGenerator, t_FieldEphemerisGenerator, FieldEphemerisGenerator);
      PyObject *t_FieldEphemerisGenerator::wrap_Object(const FieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEphemerisGenerator), &PY_TYPE_DEF(FieldEphemerisGenerator), module, "FieldEphemerisGenerator", 0);
      }

      void t_FieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "class_", make_descriptor(FieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "wrapfn_", make_descriptor(t_FieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldEphemerisGenerator::wrap_Object(FieldEphemerisGenerator(((t_FieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self)
      {
        ::org::orekit::propagation::FieldBoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearProcess::class$ = NULL;
          jmethodID *NonLinearProcess::mids$ = NULL;
          bool NonLinearProcess::live$ = false;

          jclass NonLinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_db6010c31167b5ac] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
              mids$[mid_getInnovation_4d7f7fbf09761390] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution NonLinearProcess::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_db6010c31167b5ac], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector NonLinearProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_4d7f7fbf09761390], a0.this$, a1.this$, a2.this$));
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
    namespace filtering {
      namespace kalman {
        namespace extended {
          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data);
          static PyGetSetDef t_NonLinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearProcess__methods_[] = {
            DECLARE_METHOD(t_NonLinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getInnovation, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearProcess)[] = {
            { Py_tp_methods, t_NonLinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NonLinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearProcess, t_NonLinearProcess, NonLinearProcess);
          PyObject *t_NonLinearProcess::wrap_Object(const NonLinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NonLinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NonLinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearProcess), &PY_TYPE_DEF(NonLinearProcess), module, "NonLinearProcess", 0);
          }

          void t_NonLinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "class_", make_descriptor(NonLinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "wrapfn_", make_descriptor(t_NonLinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearProcess::initializeClass, 1)))
              return NULL;
            return t_NonLinearProcess::wrap_Object(NonLinearProcess(((t_NonLinearProcess *) arg)->object.this$));
          }
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

            if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data)
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
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystemProvider::class$ = NULL;
          jmethodID *TideSystemProvider::mids$ = NULL;
          bool TideSystemProvider::live$ = false;

          jclass TideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::TideSystem TideSystemProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_1e0f912623cd4841]));
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
          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self);
          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data);
          static PyGetSetDef t_TideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystemProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_TideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, getTideSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystemProvider)[] = {
            { Py_tp_methods, t_TideSystemProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TideSystemProvider, t_TideSystemProvider, TideSystemProvider);

          void t_TideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystemProvider), &PY_TYPE_DEF(TideSystemProvider), module, "TideSystemProvider", 0);
          }

          void t_TideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "class_", make_descriptor(TideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "wrapfn_", make_descriptor(t_TideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_TideSystemProvider::wrap_Object(TideSystemProvider(((t_TideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonBoundedAttitudeProvider.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonBoundedAttitudeProvider::class$ = NULL;
      jmethodID *PythonBoundedAttitudeProvider::mids$ = NULL;
      bool PythonBoundedAttitudeProvider::live$ = false;

      jclass PythonBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedAttitudeProvider::PythonBoundedAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonBoundedAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonBoundedAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonBoundedAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self);
      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedAttitudeProvider, t_PythonBoundedAttitudeProvider, PythonBoundedAttitudeProvider);

      void t_PythonBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedAttitudeProvider), &PY_TYPE_DEF(PythonBoundedAttitudeProvider), module, "PythonBoundedAttitudeProvider", 1);
      }

      void t_PythonBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "class_", make_descriptor(PythonBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_PythonBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude1 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMaxDate2 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMinDate3 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedAttitudeProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedAttitudeProvider::wrap_Object(PythonBoundedAttitudeProvider(((t_PythonBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonBoundedAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data)
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
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map AttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/SimpleTile.h"
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

        ::java::lang::Class *SimpleTile::class$ = NULL;
        jmethodID *SimpleTile::mids$ = NULL;
        bool SimpleTile::live$ = false;

        jclass SimpleTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_7e043202c789e76d] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
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
            mids$[mid_setElevation_e98d7b3e971b6087] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_d690bb44b994cfa6] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");
            mids$[mid_tileUpdateCompleted_ff7cb6c242604316] = env->getMethodID(cls, "tileUpdateCompleted", "()V");
            mids$[mid_processUpdatedElevation_a71c45509eaf92d1] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint SimpleTile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_7e043202c789e76d], a0.this$, a1.this$, a2, a3));
        }

        jdouble SimpleTile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_6d920aab27f0a3d2], a0, a1);
        }

        jint SimpleTile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_9e72cb20adb363fb], a0);
        }

        jint SimpleTile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_9e72cb20adb363fb], a0);
        }

        jdouble SimpleTile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_ce4c02d583456bc9], a0);
        }

        jint SimpleTile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_d6ab429752e7c267]);
        }

        jdouble SimpleTile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_9981f74b2d109da6]);
        }

        ::org::orekit::rugged::raster::Tile$Location SimpleTile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_bb268b89f4ba5b33], a0, a1));
        }

        jdouble SimpleTile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_ce4c02d583456bc9], a0);
        }

        jint SimpleTile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_d6ab429752e7c267]);
        }

        jdouble SimpleTile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_9981f74b2d109da6]);
        }

        jdouble SimpleTile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_9981f74b2d109da6]);
        }

        jint SimpleTile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_d6ab429752e7c267]);
        }

        jint SimpleTile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_d6ab429752e7c267]);
        }

        jdouble SimpleTile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_9981f74b2d109da6]);
        }

        jdouble SimpleTile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_9981f74b2d109da6]);
        }

        jdouble SimpleTile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_9981f74b2d109da6]);
        }

        jint SimpleTile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_d6ab429752e7c267]);
        }

        jint SimpleTile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_d6ab429752e7c267]);
        }

        jdouble SimpleTile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_9981f74b2d109da6]);
        }

        jdouble SimpleTile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_9981f74b2d109da6]);
        }

        jdouble SimpleTile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_82f92590f4247da1], a0, a1);
        }

        void SimpleTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_e98d7b3e971b6087], a0, a1, a2);
        }

        void SimpleTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_d690bb44b994cfa6], a0, a1, a2, a3, a4, a5);
        }

        void SimpleTile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_ff7cb6c242604316]);
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
        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self);
        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data);
        static PyGetSetDef t_SimpleTile__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleTile, latitudeRows),
          DECLARE_GET_FIELD(t_SimpleTile, latitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeColumns),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevation),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLongitude),
          DECLARE_GET_FIELD(t_SimpleTile, minElevation),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleTile__methods_[] = {
          DECLARE_METHOD(t_SimpleTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setGeometry, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTile)[] = {
          { Py_tp_methods, t_SimpleTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SimpleTile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTile, t_SimpleTile, SimpleTile);

        void t_SimpleTile::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTile), &PY_TYPE_DEF(SimpleTile), module, "SimpleTile", 0);
        }

        void t_SimpleTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "class_", make_descriptor(SimpleTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "wrapfn_", make_descriptor(t_SimpleTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTile::initializeClass, 1)))
            return NULL;
          return t_SimpleTile::wrap_Object(SimpleTile(((t_SimpleTile *) arg)->object.this$));
        }
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkII", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.cellIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "cellIntersection", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevationAtIndices(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevationAtIndices", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLatitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLatitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLongitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLongitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLatitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLatitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLocation(a0, a1));
            return ::org::orekit::rugged::raster::t_Tile$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLongitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLongitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolateElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolateElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigation::class$ = NULL;
          jmethodID *RinexNavigation::mids$ = NULL;
          bool RinexNavigation::live$ = false;

          jclass RinexNavigation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addBDGIMMessage_6ce9686adc14557f] = env->getMethodID(cls, "addBDGIMMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereBDGIMMessage;)V");
              mids$[mid_addBeidouCivilianNavigationMessage_876f2a21eb0b6ec4] = env->getMethodID(cls, "addBeidouCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage;)V");
              mids$[mid_addBeidouLegacyNavigationMessage_2d17a52d9df6bdec] = env->getMethodID(cls, "addBeidouLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
              mids$[mid_addEarthOrientationParameter_6c5f52b4cabfc186] = env->getMethodID(cls, "addEarthOrientationParameter", "(Lorg/orekit/files/rinex/navigation/EarthOrientationParameterMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_7232c35e235089a5] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_721b6091f6242c29] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
              mids$[mid_addGalileoNavigationMessage_88a615ad5e35af17] = env->getMethodID(cls, "addGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
              mids$[mid_addGlonassNavigationMessage_7b95c4ccc6c58ac9] = env->getMethodID(cls, "addGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
              mids$[mid_addIRNSSNavigationMessage_28ac94277aa496d9] = env->getMethodID(cls, "addIRNSSNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage;)V");
              mids$[mid_addKlobucharMessage_0dbcfe8ee74f6ef7] = env->getMethodID(cls, "addKlobucharMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereKlobucharMessage;)V");
              mids$[mid_addNequickGMessage_6ae337b62ecd9dd9] = env->getMethodID(cls, "addNequickGMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereNequickGMessage;)V");
              mids$[mid_addQZSSCivilianNavigationMessage_1b7da76f5f7f28f1] = env->getMethodID(cls, "addQZSSCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage;)V");
              mids$[mid_addQZSSLegacyNavigationMessage_6f75ae7b1b0acd17] = env->getMethodID(cls, "addQZSSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
              mids$[mid_addSBASNavigationMessage_337e93bc229d00a6] = env->getMethodID(cls, "addSBASNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/SBASNavigationMessage;)V");
              mids$[mid_addSystemTimeOffset_28d8ee0ce10a3af3] = env->getMethodID(cls, "addSystemTimeOffset", "(Lorg/orekit/files/rinex/navigation/SystemTimeOffsetMessage;)V");
              mids$[mid_getBDGIMMessages_d751c1a57012b438] = env->getMethodID(cls, "getBDGIMMessages", "()Ljava/util/List;");
              mids$[mid_getBeidouCivilianNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouCivilianNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getBeidouLegacyNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouLegacyNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getEarthOrientationParameters_d751c1a57012b438] = env->getMethodID(cls, "getEarthOrientationParameters", "()Ljava/util/List;");
              mids$[mid_getGPSCivilianNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSCivilianNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGPSLegacyNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSLegacyNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGalileoNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getGalileoNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGalileoNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getGalileoNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGlonassNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getGlonassNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGlonassNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getGlonassNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getIRNSSNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getIRNSSNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getIRNSSNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getIRNSSNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getKlobucharAlpha_be783177b060994b] = env->getMethodID(cls, "getKlobucharAlpha", "()[D");
              mids$[mid_getKlobucharBeta_be783177b060994b] = env->getMethodID(cls, "getKlobucharBeta", "()[D");
              mids$[mid_getKlobucharMessages_d751c1a57012b438] = env->getMethodID(cls, "getKlobucharMessages", "()Ljava/util/List;");
              mids$[mid_getNeQuickAlpha_be783177b060994b] = env->getMethodID(cls, "getNeQuickAlpha", "()[D");
              mids$[mid_getNequickGMessages_d751c1a57012b438] = env->getMethodID(cls, "getNequickGMessages", "()Ljava/util/List;");
              mids$[mid_getQZSSCivilianNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSCivilianNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getQZSSLegacyNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSLegacyNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSBASNavigationMessages_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSBASNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getSBASNavigationMessages_7a823e7285fdf3d6] = env->getMethodID(cls, "getSBASNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSystemTimeOffsets_d751c1a57012b438] = env->getMethodID(cls, "getSystemTimeOffsets", "()Ljava/util/List;");
              mids$[mid_setKlobucharAlpha_a71c45509eaf92d1] = env->getMethodID(cls, "setKlobucharAlpha", "([D)V");
              mids$[mid_setKlobucharBeta_a71c45509eaf92d1] = env->getMethodID(cls, "setKlobucharBeta", "([D)V");
              mids$[mid_setNeQuickAlpha_a71c45509eaf92d1] = env->getMethodID(cls, "setNeQuickAlpha", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigation::RinexNavigation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void RinexNavigation::addBDGIMMessage(const ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBDGIMMessage_6ce9686adc14557f], a0.this$);
          }

          void RinexNavigation::addBeidouCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouCivilianNavigationMessage_876f2a21eb0b6ec4], a0.this$);
          }

          void RinexNavigation::addBeidouLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouLegacyNavigationMessage_2d17a52d9df6bdec], a0.this$);
          }

          void RinexNavigation::addEarthOrientationParameter(const ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addEarthOrientationParameter_6c5f52b4cabfc186], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_7232c35e235089a5], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_721b6091f6242c29], a0.this$);
          }

          void RinexNavigation::addGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGalileoNavigationMessage_88a615ad5e35af17], a0.this$);
          }

          void RinexNavigation::addGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassNavigationMessage_7b95c4ccc6c58ac9], a0.this$);
          }

          void RinexNavigation::addIRNSSNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addIRNSSNavigationMessage_28ac94277aa496d9], a0.this$);
          }

          void RinexNavigation::addKlobucharMessage(const ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addKlobucharMessage_0dbcfe8ee74f6ef7], a0.this$);
          }

          void RinexNavigation::addNequickGMessage(const ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addNequickGMessage_6ae337b62ecd9dd9], a0.this$);
          }

          void RinexNavigation::addQZSSCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSCivilianNavigationMessage_1b7da76f5f7f28f1], a0.this$);
          }

          void RinexNavigation::addQZSSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSLegacyNavigationMessage_6f75ae7b1b0acd17], a0.this$);
          }

          void RinexNavigation::addSBASNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSBASNavigationMessage_337e93bc229d00a6], a0.this$);
          }

          void RinexNavigation::addSystemTimeOffset(const ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemTimeOffset_28d8ee0ce10a3af3], a0.this$);
          }

          ::java::util::List RinexNavigation::getBDGIMMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBDGIMMessages_d751c1a57012b438]));
          }

          ::java::util::Map RinexNavigation::getBeidouCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getBeidouCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::Map RinexNavigation::getBeidouLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getBeidouLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::List RinexNavigation::getEarthOrientationParameters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEarthOrientationParameters_d751c1a57012b438]));
          }

          ::java::util::Map RinexNavigation::getGPSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getGPSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGPSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getGPSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGalileoNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getGalileoNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGlonassNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getGlonassNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::Map RinexNavigation::getIRNSSNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getIRNSSNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          JArray< jdouble > RinexNavigation::getKlobucharAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharAlpha_be783177b060994b]));
          }

          JArray< jdouble > RinexNavigation::getKlobucharBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharBeta_be783177b060994b]));
          }

          ::java::util::List RinexNavigation::getKlobucharMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getKlobucharMessages_d751c1a57012b438]));
          }

          JArray< jdouble > RinexNavigation::getNeQuickAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNeQuickAlpha_be783177b060994b]));
          }

          ::java::util::List RinexNavigation::getNequickGMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNequickGMessages_d751c1a57012b438]));
          }

          ::java::util::Map RinexNavigation::getQZSSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getQZSSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::Map RinexNavigation::getQZSSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getQZSSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::Map RinexNavigation::getSBASNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexNavigation::getSBASNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_7a823e7285fdf3d6], a0.this$));
          }

          ::java::util::List RinexNavigation::getSystemTimeOffsets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemTimeOffsets_d751c1a57012b438]));
          }

          void RinexNavigation::setKlobucharAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharAlpha_a71c45509eaf92d1], a0.this$);
          }

          void RinexNavigation::setKlobucharBeta(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharBeta_a71c45509eaf92d1], a0.this$);
          }

          void RinexNavigation::setNeQuickAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNeQuickAlpha_a71c45509eaf92d1], a0.this$);
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
          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args);
          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data);
          static PyGetSetDef t_RinexNavigation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexNavigation, bDGIMMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, earthOrientationParameters),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, galileoNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, glonassNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, iRNSSNavigationMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharAlpha),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharBeta),
            DECLARE_GET_FIELD(t_RinexNavigation, klobucharMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, neQuickAlpha),
            DECLARE_GET_FIELD(t_RinexNavigation, nequickGMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, sBASNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, systemTimeOffsets),
            DECLARE_GET_FIELD(t_RinexNavigation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigation__methods_[] = {
            DECLARE_METHOD(t_RinexNavigation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addBDGIMMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addEarthOrientationParameter, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGPSLegacyNavigationMessage, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addGalileoNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGlonassNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addIRNSSNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addKlobucharMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addNequickGMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSBASNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSystemTimeOffset, METH_O),
            DECLARE_METHOD(t_RinexNavigation, getBDGIMMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getEarthOrientationParameters, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGalileoNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGlonassNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getIRNSSNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharBeta, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNeQuickAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNequickGMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSBASNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSystemTimeOffsets, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharAlpha, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharBeta, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setNeQuickAlpha, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigation)[] = {
            { Py_tp_methods, t_RinexNavigation__methods_ },
            { Py_tp_init, (void *) t_RinexNavigation_init_ },
            { Py_tp_getset, t_RinexNavigation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexNavigation, t_RinexNavigation, RinexNavigation);
          PyObject *t_RinexNavigation::wrap_Object(const RinexNavigation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexNavigation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexNavigation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigation), &PY_TYPE_DEF(RinexNavigation), module, "RinexNavigation", 0);
          }

          void t_RinexNavigation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "class_", make_descriptor(RinexNavigation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "wrapfn_", make_descriptor(t_RinexNavigation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigation::initializeClass, 1)))
              return NULL;
            return t_RinexNavigation::wrap_Object(RinexNavigation(((t_RinexNavigation *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigation object((jobject) NULL);

            INT_CALL(object = RinexNavigation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::navigation::PY_TYPE(RinexNavigationHeader);

            return 0;
          }

          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBDGIMMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBDGIMMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addEarthOrientationParameter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addEarthOrientationParameter", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addGPSLegacyNavigationMessage", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGalileoNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGalileoNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addIRNSSNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addIRNSSNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addKlobucharMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addKlobucharMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addNequickGMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addNequickGMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSBASNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSBASNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSystemTimeOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemTimeOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereBDGIMMessage));
          }

          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(EarthOrientationParameterMessage));
          }

          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGalileoNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGalileoNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GalileoNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGlonassNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGlonassNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GLONASSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getIRNSSNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getIRNSSNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(IRNSSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIRNSSNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharBeta());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereKlobucharMessage));
          }

          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNeQuickAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereNequickGMessage));
          }

          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSBASNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getSBASNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(SBASNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getSBASNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(SystemTimeOffsetMessage));
          }

          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharAlpha", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharBeta(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharBeta", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setNeQuickAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNeQuickAlpha", arg);
            return NULL;
          }
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGalileoNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getIRNSSNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharBeta());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharBeta(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharBeta", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNeQuickAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setNeQuickAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "neQuickAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldStateCovariance::class$ = NULL;
      jmethodID *FieldStateCovariance::mids$ = NULL;
      bool FieldStateCovariance::live$ = false;

      jclass FieldStateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldStateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_88d584cdd92a3cae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_bed6ecd49df5afea] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_183f84aead5145f7] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceFrame_eaed7493158f72eb] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceType_aa46c995ef728b86] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_4b777b7213a5ce76] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_02883dbbe5db44ac] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_shiftedBy_a8b4349c52e90b99] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_toStateCovariance_50fcd7d28a171699] = env->getMethodID(cls, "toStateCovariance", "()Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88d584cdd92a3cae, a0.this$, a1.this$, a2.this$)) {}

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bed6ecd49df5afea, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_183f84aead5145f7], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_eaed7493158f72eb], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceType(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_aa46c995ef728b86], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldStateCovariance::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      ::org::orekit::frames::Frame FieldStateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::frames::LOF FieldStateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_4b777b7213a5ce76]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldStateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_02883dbbe5db44ac]));
      }

      ::org::orekit::orbits::OrbitType FieldStateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
      }

      ::org::orekit::orbits::PositionAngleType FieldStateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
      }

      FieldStateCovariance FieldStateCovariance::shiftedBy(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_a8b4349c52e90b99], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::propagation::StateCovariance FieldStateCovariance::toStateCovariance() const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_toStateCovariance_50fcd7d28a171699]));
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
      static PyObject *t_FieldStateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStateCovariance_of_(t_FieldStateCovariance *self, PyObject *args);
      static int t_FieldStateCovariance_init_(t_FieldStateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldStateCovariance_changeCovarianceFrame(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_changeCovarianceType(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_getDate(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getFrame(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getLOF(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getMatrix(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getOrbitType(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getPositionAngleType(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_shiftedBy(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_toStateCovariance(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_get__date(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__frame(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__lOF(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__matrix(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__orbitType(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__positionAngleType(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__parameters_(t_FieldStateCovariance *self, void *data);
      static PyGetSetDef t_FieldStateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_FieldStateCovariance, date),
        DECLARE_GET_FIELD(t_FieldStateCovariance, frame),
        DECLARE_GET_FIELD(t_FieldStateCovariance, lOF),
        DECLARE_GET_FIELD(t_FieldStateCovariance, matrix),
        DECLARE_GET_FIELD(t_FieldStateCovariance, orbitType),
        DECLARE_GET_FIELD(t_FieldStateCovariance, positionAngleType),
        DECLARE_GET_FIELD(t_FieldStateCovariance, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldStateCovariance__methods_[] = {
        DECLARE_METHOD(t_FieldStateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStateCovariance, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, toStateCovariance, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldStateCovariance)[] = {
        { Py_tp_methods, t_FieldStateCovariance__methods_ },
        { Py_tp_init, (void *) t_FieldStateCovariance_init_ },
        { Py_tp_getset, t_FieldStateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldStateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldStateCovariance, t_FieldStateCovariance, FieldStateCovariance);
      PyObject *t_FieldStateCovariance::wrap_Object(const FieldStateCovariance& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStateCovariance::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStateCovariance *self = (t_FieldStateCovariance *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldStateCovariance::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStateCovariance::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStateCovariance *self = (t_FieldStateCovariance *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldStateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldStateCovariance), &PY_TYPE_DEF(FieldStateCovariance), module, "FieldStateCovariance", 0);
      }

      void t_FieldStateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "class_", make_descriptor(FieldStateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "wrapfn_", make_descriptor(t_FieldStateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldStateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldStateCovariance::initializeClass, 1)))
          return NULL;
        return t_FieldStateCovariance::wrap_Object(FieldStateCovariance(((t_FieldStateCovariance *) arg)->object.this$));
      }
      static PyObject *t_FieldStateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldStateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldStateCovariance_of_(t_FieldStateCovariance *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldStateCovariance_init_(t_FieldStateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOF a2((jobject) NULL);
            FieldStateCovariance object((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              INT_CALL(object = FieldStateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            FieldStateCovariance object((jobject) NULL);

            if (!parseArgs(args, "KKkKK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = FieldStateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldStateCovariance_changeCovarianceFrame(t_FieldStateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOF a1((jobject) NULL);
            FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_changeCovarianceType(t_FieldStateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStateCovariance result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_getDate(t_FieldStateCovariance *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStateCovariance_getFrame(t_FieldStateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getLOF(t_FieldStateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getMatrix(t_FieldStateCovariance *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStateCovariance_getOrbitType(t_FieldStateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getPositionAngleType(t_FieldStateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_shiftedBy(t_FieldStateCovariance *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStateCovariance result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1, a2));
          return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_toStateCovariance(t_FieldStateCovariance *self)
      {
        ::org::orekit::propagation::StateCovariance result((jobject) NULL);
        OBJ_CALL(result = self->object.toStateCovariance());
        return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
      }
      static PyObject *t_FieldStateCovariance_get__parameters_(t_FieldStateCovariance *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldStateCovariance_get__date(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__frame(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__lOF(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__matrix(t_FieldStateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__orbitType(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__positionAngleType(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/OneDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *OneDVariation::class$ = NULL;
        jmethodID *OneDVariation::mids$ = NULL;
        bool OneDVariation::live$ = false;

        jclass OneDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/OneDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b78b9af261077d29] = env->getMethodID(cls, "<init>", "(DD[D)V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneDVariation::OneDVariation(jdouble a0, jdouble a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b78b9af261077d29, a0, a1, a2.this$)) {}

        jdouble OneDVariation::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
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
        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args);

        static PyMethodDef t_OneDVariation__methods_[] = {
          DECLARE_METHOD(t_OneDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneDVariation)[] = {
          { Py_tp_methods, t_OneDVariation__methods_ },
          { Py_tp_init, (void *) t_OneDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneDVariation, t_OneDVariation, OneDVariation);

        void t_OneDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(OneDVariation), &PY_TYPE_DEF(OneDVariation), module, "OneDVariation", 0);
        }

        void t_OneDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "class_", make_descriptor(OneDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "wrapfn_", make_descriptor(t_OneDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneDVariation::initializeClass, 1)))
            return NULL;
          return t_OneDVariation::wrap_Object(OneDVariation(((t_OneDVariation *) arg)->object.this$));
        }
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          OneDVariation object((jobject) NULL);

          if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
          {
            INT_CALL(object = OneDVariation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DPOCMethodType::class$ = NULL;
              jmethodID *ShortTermEncounter2DPOCMethodType::mids$ = NULL;
              bool ShortTermEncounter2DPOCMethodType::live$ = false;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFANO_2005 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFRIEND_1999 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::ALFRIEND_1999_MAX = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::CHAN_1997 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::LAAS_2015 = NULL;
              ShortTermEncounter2DPOCMethodType *ShortTermEncounter2DPOCMethodType::PATERA_2005 = NULL;

              jclass ShortTermEncounter2DPOCMethodType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getCCSDSType_8cc529497929859e] = env->getMethodID(cls, "getCCSDSType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
                  mids$[mid_getMethod_f8cf605406ec6a4b] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod;");
                  mids$[mid_valueOf_0e15216423e8792b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_values_eaf05542208ae035] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALFANO_2005 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  ALFRIEND_1999 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  ALFRIEND_1999_MAX = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999_MAX", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  CHAN_1997 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  LAAS_2015 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "LAAS_2015", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  PATERA_2005 = new ShortTermEncounter2DPOCMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::definitions::PocMethodType ShortTermEncounter2DPOCMethodType::getCCSDSType() const
              {
                return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getCCSDSType_8cc529497929859e]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod ShortTermEncounter2DPOCMethodType::getMethod() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod(env->callObjectMethod(this$, mids$[mid_getMethod_f8cf605406ec6a4b]));
              }

              ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethodType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShortTermEncounter2DPOCMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0e15216423e8792b], a0.this$));
              }

              JArray< ShortTermEncounter2DPOCMethodType > ShortTermEncounter2DPOCMethodType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShortTermEncounter2DPOCMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_eaf05542208ae035]));
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
              static PyObject *t_ShortTermEncounter2DPOCMethodType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_of_(t_ShortTermEncounter2DPOCMethodType *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_getCCSDSType(t_ShortTermEncounter2DPOCMethodType *self);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_getMethod(t_ShortTermEncounter2DPOCMethodType *self);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_values(PyTypeObject *type);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__cCSDSType(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__method(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__parameters_(t_ShortTermEncounter2DPOCMethodType *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DPOCMethodType__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, cCSDSType),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, method),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethodType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DPOCMethodType__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, getCCSDSType, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethodType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DPOCMethodType)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DPOCMethodType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShortTermEncounter2DPOCMethodType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DPOCMethodType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DPOCMethodType, t_ShortTermEncounter2DPOCMethodType, ShortTermEncounter2DPOCMethodType);
              PyObject *t_ShortTermEncounter2DPOCMethodType::wrap_Object(const ShortTermEncounter2DPOCMethodType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShortTermEncounter2DPOCMethodType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShortTermEncounter2DPOCMethodType *self = (t_ShortTermEncounter2DPOCMethodType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShortTermEncounter2DPOCMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShortTermEncounter2DPOCMethodType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShortTermEncounter2DPOCMethodType *self = (t_ShortTermEncounter2DPOCMethodType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShortTermEncounter2DPOCMethodType::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DPOCMethodType), &PY_TYPE_DEF(ShortTermEncounter2DPOCMethodType), module, "ShortTermEncounter2DPOCMethodType", 0);
              }

              void t_ShortTermEncounter2DPOCMethodType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "class_", make_descriptor(ShortTermEncounter2DPOCMethodType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "wrapfn_", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShortTermEncounter2DPOCMethodType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFANO_2005", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFANO_2005)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFRIEND_1999", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFRIEND_1999)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "ALFRIEND_1999_MAX", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::ALFRIEND_1999_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "CHAN_1997", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::CHAN_1997)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "LAAS_2015", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::LAAS_2015)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethodType), "PATERA_2005", make_descriptor(t_ShortTermEncounter2DPOCMethodType::wrap_Object(*ShortTermEncounter2DPOCMethodType::PATERA_2005)));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DPOCMethodType::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DPOCMethodType::wrap_Object(ShortTermEncounter2DPOCMethodType(((t_ShortTermEncounter2DPOCMethodType *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DPOCMethodType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DPOCMethodType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_of_(t_ShortTermEncounter2DPOCMethodType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_getCCSDSType(t_ShortTermEncounter2DPOCMethodType *self)
              {
                ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCCSDSType());
                return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_getMethod(t_ShortTermEncounter2DPOCMethodType *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethod::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::valueOf(a0));
                  return t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_values(PyTypeObject *type)
              {
                JArray< ShortTermEncounter2DPOCMethodType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::values());
                return JArray<jobject>(result.this$).wrap(t_ShortTermEncounter2DPOCMethodType::wrap_jobject);
              }
              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__parameters_(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__cCSDSType(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCCSDSType());
                return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethodType_get__method(t_ShortTermEncounter2DPOCMethodType *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethod::wrap_Object(value);
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
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedPVCoordinates::mids$ = NULL;
      bool TimeStampedPVCoordinates::live$ = false;

      jclass TimeStampedPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5883f20309d382ad] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_31e6f8c616daea23] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_9204f9dff7aae59d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_74a905f732d238fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_57454fa8af15e738] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_04ca53ad0bba71dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_0daba8f4c17ab86c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_60ceb85117ebbadb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_6d066b60bdb16669] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_1d2bc26bd4fe8250] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_244ea083ab9940d6] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTaylorProvider_4bf66d6d931a42d4] = env->getMethodID(cls, "toTaylorProvider", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5883f20309d382ad, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_31e6f8c616daea23, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9204f9dff7aae59d, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_74a905f732d238fd, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_57454fa8af15e738, a0.this$, a1, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_04ca53ad0bba71dc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0daba8f4c17ab86c, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_60ceb85117ebbadb, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6, jdouble a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6d066b60bdb16669, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedPVCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      TimeStampedPVCoordinates TimeStampedPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_1d2bc26bd4fe8250], a0));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_244ea083ab9940d6], a0.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider TimeStampedPVCoordinates::toTaylorProvider(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_4bf66d6d931a42d4], a0.this$));
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
      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self);
      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toTaylorProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinates, t_TimeStampedPVCoordinates, TimeStampedPVCoordinates);

      void t_TimeStampedPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinates), &PY_TYPE_DEF(TimeStampedPVCoordinates), module, "TimeStampedPVCoordinates", 0);
      }

      void t_TimeStampedPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "class_", make_descriptor(TimeStampedPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinates::wrap_Object(TimeStampedPVCoordinates(((t_TimeStampedPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            jdouble a7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toTaylorProvider(a0));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toTaylorProvider", arg);
        return NULL;
      }

      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldDeepSDP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldDeepSDP4::class$ = NULL;
          jmethodID *FieldDeepSDP4::mids$ = NULL;
          bool FieldDeepSDP4::live$ = false;

          jclass FieldDeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldDeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0b9ee8d2f12ae2a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_cb79b5ee065880cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_luniSolarTermsComputation_ff7cb6c242604316] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_f63ca9e3185c722e] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_f63ca9e3185c722e] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_0b9ee8d2f12ae2a8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_cb79b5ee065880cd, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args);
          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data);
          static PyGetSetDef t_FieldDeepSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDeepSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDeepSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldDeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDeepSDP4)[] = {
            { Py_tp_methods, t_FieldDeepSDP4__methods_ },
            { Py_tp_init, (void *) t_FieldDeepSDP4_init_ },
            { Py_tp_getset, t_FieldDeepSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(FieldDeepSDP4, t_FieldDeepSDP4, FieldDeepSDP4);
          PyObject *t_FieldDeepSDP4::wrap_Object(const FieldDeepSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDeepSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDeepSDP4), &PY_TYPE_DEF(FieldDeepSDP4), module, "FieldDeepSDP4", 0);
          }

          void t_FieldDeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "class_", make_descriptor(FieldDeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "wrapfn_", make_descriptor(t_FieldDeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDeepSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldDeepSDP4::wrap_Object(FieldDeepSDP4(((t_FieldDeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
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
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonForceModelContext::class$ = NULL;
            jmethodID *PythonForceModelContext::mids$ = NULL;
            bool PythonForceModelContext::live$ = false;

            jclass PythonForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f15beb67f8696245] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonForceModelContext::PythonForceModelContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_f15beb67f8696245, a0.this$)) {}

            void PythonForceModelContext::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonForceModelContext::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonForceModelContext::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self);
            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args);
            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data);
            static PyGetSetDef t_PythonForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_PythonForceModelContext, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonForceModelContext__methods_[] = {
              DECLARE_METHOD(t_PythonForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonForceModelContext, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonForceModelContext)[] = {
              { Py_tp_methods, t_PythonForceModelContext__methods_ },
              { Py_tp_init, (void *) t_PythonForceModelContext_init_ },
              { Py_tp_getset, t_PythonForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonForceModelContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(PythonForceModelContext, t_PythonForceModelContext, PythonForceModelContext);

            void t_PythonForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonForceModelContext), &PY_TYPE_DEF(PythonForceModelContext), module, "PythonForceModelContext", 1);
            }

            void t_PythonForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "class_", make_descriptor(PythonForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "wrapfn_", make_descriptor(t_PythonForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonForceModelContext::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonForceModelContext_pythonDecRef0 },
              };
              env->registerNatives(cls, methods, 1);
            }

            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonForceModelContext::initializeClass, 1)))
                return NULL;
              return t_PythonForceModelContext::wrap_Object(PythonForceModelContext(((t_PythonForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              PythonForceModelContext object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0))
              {
                INT_CALL(object = PythonForceModelContext(a0));
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

            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args)
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

            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data)
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
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointValuePair::class$ = NULL;
      jmethodID *PointValuePair::mids$ = NULL;
      bool PointValuePair::live$ = false;

      jclass PointValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_19a01fdb4baa56b0] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_e3635e93e84c57e0] = env->getMethodID(cls, "<init>", "([DDZ)V");
          mids$[mid_getPoint_be783177b060994b] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_be783177b060994b] = env->getMethodID(cls, "getPointRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_19a01fdb4baa56b0, a0.this$, a1)) {}

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_e3635e93e84c57e0, a0.this$, a1, a2)) {}

      JArray< jdouble > PointValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_be783177b060994b]));
      }

      JArray< jdouble > PointValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_be783177b060994b]));
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
      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args);
      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self);
      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self);
      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data);
      static PyGetSetDef t_PointValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointValuePair, point),
        DECLARE_GET_FIELD(t_PointValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointValuePair__methods_[] = {
        DECLARE_METHOD(t_PointValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointValuePair, getPointRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointValuePair)[] = {
        { Py_tp_methods, t_PointValuePair__methods_ },
        { Py_tp_init, (void *) t_PointValuePair_init_ },
        { Py_tp_getset, t_PointValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointValuePair, t_PointValuePair, PointValuePair);
      PyObject *t_PointValuePair::wrap_Object(const PointValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointValuePair), &PY_TYPE_DEF(PointValuePair), module, "PointValuePair", 0);
      }

      void t_PointValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "class_", make_descriptor(PointValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "wrapfn_", make_descriptor(t_PointValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointValuePair::initializeClass, 1)))
          return NULL;
        return t_PointValuePair::wrap_Object(PointValuePair(((t_PointValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = PointValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
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

      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLocalizedException::PythonLocalizedException() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonLocalizedException::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonLocalizedException::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonLocalizedException::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonalContext::class$ = NULL;
            jmethodID *DSSTZonalContext::mids$ = NULL;
            bool DSSTZonalContext::live$ = false;

            jclass DSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_9981f74b2d109da6] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBoA_9981f74b2d109da6] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_9981f74b2d109da6] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getCXO2N2A2_9981f74b2d109da6] = env->getMethodID(cls, "getCXO2N2A2", "()D");
                mids$[mid_getHK_9981f74b2d109da6] = env->getMethodID(cls, "getHK", "()D");
                mids$[mid_getK2MH2_9981f74b2d109da6] = env->getMethodID(cls, "getK2MH2", "()D");
                mids$[mid_getK2MH2O2_9981f74b2d109da6] = env->getMethodID(cls, "getK2MH2O2", "()D");
                mids$[mid_getM2aoA_9981f74b2d109da6] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_9981f74b2d109da6] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoa_9981f74b2d109da6] = env->getMethodID(cls, "getMuoa", "()D");
                mids$[mid_getOON2A2_9981f74b2d109da6] = env->getMethodID(cls, "getOON2A2", "()D");
                mids$[mid_getOoAB_9981f74b2d109da6] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getRoa_9981f74b2d109da6] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getX2ON2A2XP1_9981f74b2d109da6] = env->getMethodID(cls, "getX2ON2A2XP1", "()D");
                mids$[mid_getX3ON2A_9981f74b2d109da6] = env->getMethodID(cls, "getX3ON2A", "()D");
                mids$[mid_getXON2A2_9981f74b2d109da6] = env->getMethodID(cls, "getXON2A2", "()D");
                mids$[mid_getXX_9981f74b2d109da6] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getXXX_9981f74b2d109da6] = env->getMethodID(cls, "getXXX", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTZonalContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getCXO2N2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCXO2N2A2_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getHK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHK_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getK2MH2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getK2MH2O2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2O2_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getMuoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoa_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getOON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOON2A2_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getX2ON2A2XP1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX2ON2A2XP1_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getX3ON2A() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX3ON2A_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getXON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXON2A2_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_9981f74b2d109da6]);
            }

            jdouble DSSTZonalContext::getXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXXX_9981f74b2d109da6]);
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
            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data);
            static PyGetSetDef t_DSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xXX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_DSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonalContext)[] = {
              { Py_tp_methods, t_DSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTZonalContext, t_DSSTZonalContext, DSSTZonalContext);

            void t_DSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonalContext), &PY_TYPE_DEF(DSSTZonalContext), module, "DSSTZonalContext", 0);
            }

            void t_DSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "class_", make_descriptor(DSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "wrapfn_", make_descriptor(t_DSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_DSSTZonalContext::wrap_Object(DSSTZonalContext(((t_DSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXXX());
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionMessage::class$ = NULL;
              jmethodID *RtcmCorrectionMessage::mids$ = NULL;
              bool RtcmCorrectionMessage::live$ = false;

              jclass RtcmCorrectionMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_673ab50160791be9] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");
                  mids$[mid_getDataMap_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getDataMap", "()Ljava/util/Map;");
                  mids$[mid_getHeader_efa3071feaa2ce16] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;");
                  mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionMessage::RtcmCorrectionMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_673ab50160791be9, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map RtcmCorrectionMessage::getDataMap() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getDataMap_dbcb8bbac6b35e0d]));
              }

              ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader RtcmCorrectionMessage::getHeader() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->callObjectMethod(this$, mids$[mid_getHeader_efa3071feaa2ce16]));
              }

              ::org::orekit::gnss::SatelliteSystem RtcmCorrectionMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args);
              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data);
              static PyGetSetDef t_RtcmCorrectionMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, dataMap),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, header),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getDataMap, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getHeader, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionMessage)[] = {
                { Py_tp_methods, t_RtcmCorrectionMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionMessage_init_ },
                { Py_tp_getset, t_RtcmCorrectionMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionMessage, t_RtcmCorrectionMessage, RtcmCorrectionMessage);
              PyObject *t_RtcmCorrectionMessage::wrap_Object(const RtcmCorrectionMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_RtcmCorrectionMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_RtcmCorrectionMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionMessage), &PY_TYPE_DEF(RtcmCorrectionMessage), module, "RtcmCorrectionMessage", 0);
              }

              void t_RtcmCorrectionMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "class_", make_descriptor(RtcmCorrectionMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "wrapfn_", make_descriptor(t_RtcmCorrectionMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionMessage::wrap_Object(RtcmCorrectionMessage(((t_RtcmCorrectionMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                RtcmCorrectionMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RtcmCorrectionMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader result((jobject) NULL);
                OBJ_CALL(result = self->object.getHeader());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
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
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomDataGenerator::class$ = NULL;
      jmethodID *RandomDataGenerator::mids$ = NULL;
      bool RandomDataGenerator::live$ = false;

      jclass RandomDataGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomDataGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBeta_82f92590f4247da1] = env->getMethodID(cls, "nextBeta", "(DD)D");
          mids$[mid_nextDeviate_12d498467a629ebf] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/IntegerDistribution;)I");
          mids$[mid_nextDeviate_6bcd8bfbc38d21be] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/RealDistribution;)D");
          mids$[mid_nextDeviates_48e2afafdb86e68d] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/IntegerDistribution;I)[I");
          mids$[mid_nextDeviates_0feaac7130812e78] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/RealDistribution;I)[D");
          mids$[mid_nextExponential_bf28ed64d6e8576b] = env->getMethodID(cls, "nextExponential", "(D)D");
          mids$[mid_nextGamma_82f92590f4247da1] = env->getMethodID(cls, "nextGamma", "(DD)D");
          mids$[mid_nextHexString_c81987d6b0e2977a] = env->getMethodID(cls, "nextHexString", "(I)Ljava/lang/String;");
          mids$[mid_nextInt_91b9e1e34b2235d5] = env->getMethodID(cls, "nextInt", "(II)I");
          mids$[mid_nextLogNormal_82f92590f4247da1] = env->getMethodID(cls, "nextLogNormal", "(DD)D");
          mids$[mid_nextLong_7912418dc9bc44e3] = env->getMethodID(cls, "nextLong", "(JJ)J");
          mids$[mid_nextNormal_82f92590f4247da1] = env->getMethodID(cls, "nextNormal", "(DD)D");
          mids$[mid_nextPermutation_df09de71284be27f] = env->getMethodID(cls, "nextPermutation", "(II)[I");
          mids$[mid_nextPoisson_9e72cb20adb363fb] = env->getMethodID(cls, "nextPoisson", "(D)I");
          mids$[mid_nextSample_25f286641019e8d7] = env->getMethodID(cls, "nextSample", "([DI)[D");
          mids$[mid_nextSample_cd578c55e476bd8d] = env->getMethodID(cls, "nextSample", "(Ljava/util/Collection;I)[Ljava/lang/Object;");
          mids$[mid_nextSampleWithReplacement_bc8c4784b9d33efa] = env->getMethodID(cls, "nextSampleWithReplacement", "(I[D)[I");
          mids$[mid_nextUniform_82f92590f4247da1] = env->getMethodID(cls, "nextUniform", "(DD)D");
          mids$[mid_nextZipf_505fa41799a2fe2e] = env->getMethodID(cls, "nextZipf", "(ID)I");
          mids$[mid_of_3e68dc7c0bd5b8b8] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/random/RandomDataGenerator;");
          mids$[mid_delegate_8e5137c62f6fabd8] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomDataGenerator::RandomDataGenerator() : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      RandomDataGenerator::RandomDataGenerator(jlong a0) : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jdouble RandomDataGenerator::nextBeta(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextBeta_82f92590f4247da1], a0, a1);
      }

      jint RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::IntegerDistribution & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextDeviate_12d498467a629ebf], a0.this$);
      }

      jdouble RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::RealDistribution & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDeviate_6bcd8bfbc38d21be], a0.this$);
      }

      JArray< jint > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::IntegerDistribution & a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextDeviates_48e2afafdb86e68d], a0.this$, a1));
      }

      JArray< jdouble > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::RealDistribution & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextDeviates_0feaac7130812e78], a0.this$, a1));
      }

      jdouble RandomDataGenerator::nextExponential(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextExponential_bf28ed64d6e8576b], a0);
      }

      jdouble RandomDataGenerator::nextGamma(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGamma_82f92590f4247da1], a0, a1);
      }

      ::java::lang::String RandomDataGenerator::nextHexString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_nextHexString_c81987d6b0e2977a], a0));
      }

      jint RandomDataGenerator::nextInt(jint a0, jint a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_91b9e1e34b2235d5], a0, a1);
      }

      jdouble RandomDataGenerator::nextLogNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextLogNormal_82f92590f4247da1], a0, a1);
      }

      jlong RandomDataGenerator::nextLong(jlong a0, jlong a1) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_7912418dc9bc44e3], a0, a1);
      }

      jdouble RandomDataGenerator::nextNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormal_82f92590f4247da1], a0, a1);
      }

      JArray< jint > RandomDataGenerator::nextPermutation(jint a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextPermutation_df09de71284be27f], a0, a1));
      }

      jint RandomDataGenerator::nextPoisson(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextPoisson_9e72cb20adb363fb], a0);
      }

      JArray< jdouble > RandomDataGenerator::nextSample(const JArray< jdouble > & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextSample_25f286641019e8d7], a0.this$, a1));
      }

      JArray< ::java::lang::Object > RandomDataGenerator::nextSample(const ::java::util::Collection & a0, jint a1) const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_nextSample_cd578c55e476bd8d], a0.this$, a1));
      }

      JArray< jint > RandomDataGenerator::nextSampleWithReplacement(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextSampleWithReplacement_bc8c4784b9d33efa], a0, a1.this$));
      }

      jdouble RandomDataGenerator::nextUniform(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextUniform_82f92590f4247da1], a0, a1);
      }

      jint RandomDataGenerator::nextZipf(jint a0, jdouble a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextZipf_505fa41799a2fe2e], a0, a1);
      }

      RandomDataGenerator RandomDataGenerator::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RandomDataGenerator(env->callStaticObjectMethod(cls, mids$[mid_of_3e68dc7c0bd5b8b8], a0.this$));
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
      static PyObject *t_RandomDataGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomDataGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomDataGenerator_init_(t_RandomDataGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomDataGenerator_nextBeta(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextDeviate(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextDeviates(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextExponential(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextGamma(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextHexString(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextInt(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextLogNormal(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextLong(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextNormal(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextPermutation(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextPoisson(t_RandomDataGenerator *self, PyObject *arg);
      static PyObject *t_RandomDataGenerator_nextSample(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextSampleWithReplacement(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextUniform(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_nextZipf(t_RandomDataGenerator *self, PyObject *args);
      static PyObject *t_RandomDataGenerator_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_RandomDataGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomDataGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomDataGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomDataGenerator, nextBeta, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextDeviate, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextDeviates, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextExponential, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextGamma, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextHexString, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextLogNormal, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextNormal, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextPermutation, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextPoisson, METH_O),
        DECLARE_METHOD(t_RandomDataGenerator, nextSample, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextSampleWithReplacement, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextUniform, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, nextZipf, METH_VARARGS),
        DECLARE_METHOD(t_RandomDataGenerator, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomDataGenerator)[] = {
        { Py_tp_methods, t_RandomDataGenerator__methods_ },
        { Py_tp_init, (void *) t_RandomDataGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomDataGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::ForwardingRandomGenerator),
        NULL
      };

      DEFINE_TYPE(RandomDataGenerator, t_RandomDataGenerator, RandomDataGenerator);

      void t_RandomDataGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomDataGenerator), &PY_TYPE_DEF(RandomDataGenerator), module, "RandomDataGenerator", 0);
      }

      void t_RandomDataGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "class_", make_descriptor(RandomDataGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "wrapfn_", make_descriptor(t_RandomDataGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomDataGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomDataGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomDataGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomDataGenerator::wrap_Object(RandomDataGenerator(((t_RandomDataGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomDataGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomDataGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomDataGenerator_init_(t_RandomDataGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RandomDataGenerator object((jobject) NULL);

            INT_CALL(object = RandomDataGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            jlong a0;
            RandomDataGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = RandomDataGenerator(a0));
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

      static PyObject *t_RandomDataGenerator_nextBeta(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextBeta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextBeta", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextDeviate(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::distribution::IntegerDistribution a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::hipparchus::distribution::IntegerDistribution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.nextDeviate(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.nextDeviate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextDeviate", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextDeviates(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::distribution::IntegerDistribution a0((jobject) NULL);
            jint a1;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::distribution::IntegerDistribution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextDeviates(a0, a1));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
            jint a1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextDeviates(a0, a1));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextDeviates", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextExponential(t_RandomDataGenerator *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.nextExponential(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextExponential", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextGamma(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextGamma(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextGamma", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextHexString(t_RandomDataGenerator *self, PyObject *arg)
      {
        jint a0;
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nextHexString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextHexString", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextInt(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextInt(a0, a1));
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RandomDataGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomDataGenerator_nextLogNormal(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextLogNormal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextLogNormal", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextLong(t_RandomDataGenerator *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextLong(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(RandomDataGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomDataGenerator_nextNormal(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextNormal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextNormal", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextPermutation(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextPermutation(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "nextPermutation", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextPoisson(t_RandomDataGenerator *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.nextPoisson(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextPoisson", arg);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextSample(t_RandomDataGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.nextSample(a0, a1));
              return result.wrap();
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::java::lang::Object > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.nextSample(a0, a1));
              return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextSample", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextSampleWithReplacement(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextSampleWithReplacement(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "nextSampleWithReplacement", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextUniform(t_RandomDataGenerator *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextUniform(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextUniform", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_nextZipf(t_RandomDataGenerator *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jint result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.nextZipf(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextZipf", args);
        return NULL;
      }

      static PyObject *t_RandomDataGenerator_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomDataGenerator result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomDataGenerator::of(a0));
          return t_RandomDataGenerator::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedEop::class$ = NULL;
      jmethodID *LazyLoadedEop::mids$ = NULL;
      bool LazyLoadedEop::live$ = false;

      jclass LazyLoadedEop::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedEop");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f44b5b919beca6bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_cf2d09f334430f03] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_cf2d09f334430f03] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addEOPHistoryLoader_de5bd84d562632cf] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_ff7cb6c242604316] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getDataProvidersManager_f0a5ee63a7def5aa] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getEOPHistory_0876d7ae4f9b6882] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/time/TimeScales;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");
          mids$[mid_setInterpolationDegree_8fd427ab23829bf5] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedEop::LazyLoadedEop(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f44b5b919beca6bf, a0.this$)) {}

      void LazyLoadedEop::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_cf2d09f334430f03], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_cf2d09f334430f03], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_de5bd84d562632cf], a0.this$, a1.this$);
      }

      void LazyLoadedEop::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_ff7cb6c242604316]);
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedEop::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_f0a5ee63a7def5aa]));
      }

      ::org::orekit::frames::EOPHistory LazyLoadedEop::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_0876d7ae4f9b6882], a0.this$, a1, a2.this$));
      }

      void LazyLoadedEop::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_1ad26e8c8c0cd65b], a0);
      }

      void LazyLoadedEop::setInterpolationDegree(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_8fd427ab23829bf5], a0);
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
      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data);
      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedEop__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedEop, dataProvidersManager),
        DECLARE_SET_FIELD(t_LazyLoadedEop, eOPContinuityThreshold),
        DECLARE_SET_FIELD(t_LazyLoadedEop, interpolationDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedEop__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedEop, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, setEOPContinuityThreshold, METH_O),
        DECLARE_METHOD(t_LazyLoadedEop, setInterpolationDegree, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedEop)[] = {
        { Py_tp_methods, t_LazyLoadedEop__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedEop_init_ },
        { Py_tp_getset, t_LazyLoadedEop__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedEop)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedEop, t_LazyLoadedEop, LazyLoadedEop);

      void t_LazyLoadedEop::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedEop), &PY_TYPE_DEF(LazyLoadedEop), module, "LazyLoadedEop", 0);
      }

      void t_LazyLoadedEop::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "class_", make_descriptor(LazyLoadedEop::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "wrapfn_", make_descriptor(t_LazyLoadedEop::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedEop::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedEop::wrap_Object(LazyLoadedEop(((t_LazyLoadedEop *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedEop::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        LazyLoadedEop object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedEop(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(self->object.addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1, a2));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg)
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

      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/orekit/bodies/Ellipse.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipsoid::class$ = NULL;
      jmethodID *Ellipsoid::mids$ = NULL;
      bool Ellipsoid::live$ = false;

      jclass Ellipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a7d182119e533a5f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDD)V");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_9981f74b2d109da6] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getC_9981f74b2d109da6] = env->getMethodID(cls, "getC", "()D");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPlaneSection_3f2e5878904410f7] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldEllipse;");
          mids$[mid_getPlaneSection_3f5fc96ca95b9a07] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/Ellipse;");
          mids$[mid_isInside_f6d8940437db3446] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
          mids$[mid_isInside_decdc24b3aebe77a] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
          mids$[mid_pointOnLimb_1b84772486fb83f9] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointOnLimb_ff0107f3aab86815] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipsoid::Ellipsoid(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7d182119e533a5f, a0.this$, a1, a2, a3)) {}

      jdouble Ellipsoid::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
      }

      jdouble Ellipsoid::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_9981f74b2d109da6]);
      }

      jdouble Ellipsoid::getC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getC_9981f74b2d109da6]);
      }

      ::org::orekit::frames::Frame Ellipsoid::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::bodies::FieldEllipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldEllipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_3f2e5878904410f7], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::Ellipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::Ellipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_3f5fc96ca95b9a07], a0.this$, a1.this$));
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_f6d8940437db3446], a0.this$);
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_decdc24b3aebe77a], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_1b84772486fb83f9], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_ff0107f3aab86815], a0.this$, a1.this$));
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
      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data);
      static PyGetSetDef t_Ellipsoid__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipsoid, a),
        DECLARE_GET_FIELD(t_Ellipsoid, b),
        DECLARE_GET_FIELD(t_Ellipsoid, c),
        DECLARE_GET_FIELD(t_Ellipsoid, frame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipsoid__methods_[] = {
        DECLARE_METHOD(t_Ellipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getC, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getPlaneSection, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, isInside, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, pointOnLimb, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipsoid)[] = {
        { Py_tp_methods, t_Ellipsoid__methods_ },
        { Py_tp_init, (void *) t_Ellipsoid_init_ },
        { Py_tp_getset, t_Ellipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipsoid)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipsoid, t_Ellipsoid, Ellipsoid);

      void t_Ellipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipsoid), &PY_TYPE_DEF(Ellipsoid), module, "Ellipsoid", 0);
      }

      void t_Ellipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "class_", make_descriptor(Ellipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "wrapfn_", make_descriptor(t_Ellipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipsoid::initializeClass, 1)))
          return NULL;
        return t_Ellipsoid::wrap_Object(Ellipsoid(((t_Ellipsoid *) arg)->object.this$));
      }
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        Ellipsoid object((jobject) NULL);

        if (!parseArgs(args, "kDDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = Ellipsoid(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldEllipse result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_FieldEllipse::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::Ellipse result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_Ellipse::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPlaneSection", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "isInside", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pointOnLimb", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *InertiaKey::class$ = NULL;
              jmethodID *InertiaKey::mids$ = NULL;
              bool InertiaKey::live$ = false;
              InertiaKey *InertiaKey::COMMENT = NULL;
              InertiaKey *InertiaKey::I11 = NULL;
              InertiaKey *InertiaKey::I12 = NULL;
              InertiaKey *InertiaKey::I13 = NULL;
              InertiaKey *InertiaKey::I22 = NULL;
              InertiaKey *InertiaKey::I23 = NULL;
              InertiaKey *InertiaKey::I33 = NULL;
              InertiaKey *InertiaKey::INERTIA_REF_FRAME = NULL;
              InertiaKey *InertiaKey::IXX = NULL;
              InertiaKey *InertiaKey::IXY = NULL;
              InertiaKey *InertiaKey::IXZ = NULL;
              InertiaKey *InertiaKey::IYY = NULL;
              InertiaKey *InertiaKey::IYZ = NULL;
              InertiaKey *InertiaKey::IZZ = NULL;

              jclass InertiaKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/InertiaKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_bab5ab809541b999] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)Z");
                  mids$[mid_valueOf_f7c0c3c8ce0dc6af] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");
                  mids$[mid_values_d65c98c9d832a0f5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new InertiaKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I11 = new InertiaKey(env->getStaticObjectField(cls, "I11", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I12 = new InertiaKey(env->getStaticObjectField(cls, "I12", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I13 = new InertiaKey(env->getStaticObjectField(cls, "I13", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I22 = new InertiaKey(env->getStaticObjectField(cls, "I22", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I23 = new InertiaKey(env->getStaticObjectField(cls, "I23", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I33 = new InertiaKey(env->getStaticObjectField(cls, "I33", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  INERTIA_REF_FRAME = new InertiaKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXX = new InertiaKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXY = new InertiaKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXZ = new InertiaKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYY = new InertiaKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYZ = new InertiaKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IZZ = new InertiaKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean InertiaKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_bab5ab809541b999], a0.this$, a1.this$, a2.this$);
              }

              InertiaKey InertiaKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InertiaKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f7c0c3c8ce0dc6af], a0.this$));
              }

              JArray< InertiaKey > InertiaKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InertiaKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d65c98c9d832a0f5]));
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
              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InertiaKey_values(PyTypeObject *type);
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data);
              static PyGetSetDef t_InertiaKey__fields_[] = {
                DECLARE_GET_FIELD(t_InertiaKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InertiaKey__methods_[] = {
                DECLARE_METHOD(t_InertiaKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, process, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InertiaKey)[] = {
                { Py_tp_methods, t_InertiaKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InertiaKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InertiaKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InertiaKey, t_InertiaKey, InertiaKey);
              PyObject *t_InertiaKey::wrap_Object(const InertiaKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InertiaKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InertiaKey::install(PyObject *module)
              {
                installType(&PY_TYPE(InertiaKey), &PY_TYPE_DEF(InertiaKey), module, "InertiaKey", 0);
              }

              void t_InertiaKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "class_", make_descriptor(InertiaKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "wrapfn_", make_descriptor(t_InertiaKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(InertiaKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "COMMENT", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I11", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I11)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I12", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I12)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I13", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I13)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I22", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I22)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I23", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I23)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I33", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I33)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "INERTIA_REF_FRAME", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXX", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IZZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IZZ)));
              }

              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InertiaKey::initializeClass, 1)))
                  return NULL;
                return t_InertiaKey::wrap_Object(InertiaKey(((t_InertiaKey *) arg)->object.this$));
              }
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InertiaKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InertiaKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::valueOf(a0));
                  return t_InertiaKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InertiaKey_values(PyTypeObject *type)
              {
                JArray< InertiaKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::values());
                return JArray<jobject>(result.this$).wrap(t_InertiaKey::wrap_jobject);
              }
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *NewcombOperators::class$ = NULL;
            jmethodID *NewcombOperators::mids$ = NULL;
            bool NewcombOperators::live$ = false;

            jclass NewcombOperators::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_f2a615832ea428d6] = env->getStaticMethodID(cls, "getValue", "(IIII)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble NewcombOperators::getValue(jint a0, jint a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getValue_f2a615832ea428d6], a0, a1, a2, a3);
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
            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_NewcombOperators__methods_[] = {
              DECLARE_METHOD(t_NewcombOperators, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, getValue, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NewcombOperators)[] = {
              { Py_tp_methods, t_NewcombOperators__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NewcombOperators)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NewcombOperators, t_NewcombOperators, NewcombOperators);

            void t_NewcombOperators::install(PyObject *module)
            {
              installType(&PY_TYPE(NewcombOperators), &PY_TYPE_DEF(NewcombOperators), module, "NewcombOperators", 0);
            }

            void t_NewcombOperators::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "class_", make_descriptor(NewcombOperators::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "wrapfn_", make_descriptor(t_NewcombOperators::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NewcombOperators::initializeClass, 1)))
                return NULL;
              return t_NewcombOperators::wrap_Object(NewcombOperators(((t_NewcombOperators *) arg)->object.this$));
            }
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NewcombOperators::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::NewcombOperators::getValue(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getValue", args);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Data::class$ = NULL;
              jmethodID *SsrIgm05Data::mids$ = NULL;
              bool SsrIgm05Data::live$ = false;

              jclass SsrIgm05Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCodeBias_11ea247653e32ba8] = env->getMethodID(cls, "addCodeBias", "(Lorg/orekit/gnss/metric/messages/common/CodeBias;)V");
                  mids$[mid_getCodeBias_74273a2498bf7efb] = env->getMethodID(cls, "getCodeBias", "(I)Lorg/orekit/gnss/metric/messages/common/CodeBias;");
                  mids$[mid_getCodeBiases_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getCodeBiases", "()Ljava/util/Map;");
                  mids$[mid_getNumberOfBiasesProcessed_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_setNumberOfBiasesProcessed_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Data::SsrIgm05Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              void SsrIgm05Data::addCodeBias(const ::org::orekit::gnss::metric::messages::common::CodeBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCodeBias_11ea247653e32ba8], a0.this$);
              }

              ::org::orekit::gnss::metric::messages::common::CodeBias SsrIgm05Data::getCodeBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::CodeBias(env->callObjectMethod(this$, mids$[mid_getCodeBias_74273a2498bf7efb], a0));
              }

              ::java::util::Map SsrIgm05Data::getCodeBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCodeBiases_dbcb8bbac6b35e0d]));
              }

              jint SsrIgm05Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_d6ab429752e7c267]);
              }

              void SsrIgm05Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_8fd427ab23829bf5], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data);
              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data);
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm05Data__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm05Data, codeBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm05Data, numberOfBiasesProcessed),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm05Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, addCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, setNumberOfBiasesProcessed, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Data)[] = {
                { Py_tp_methods, t_SsrIgm05Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Data_init_ },
                { Py_tp_getset, t_SsrIgm05Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Data, t_SsrIgm05Data, SsrIgm05Data);

              void t_SsrIgm05Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Data), &PY_TYPE_DEF(SsrIgm05Data), module, "SsrIgm05Data", 0);
              }

              void t_SsrIgm05Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "class_", make_descriptor(SsrIgm05Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "wrapfn_", make_descriptor(t_SsrIgm05Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Data::wrap_Object(SsrIgm05Data(((t_SsrIgm05Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Data object((jobject) NULL);

                INT_CALL(object = SsrIgm05Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::CodeBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::CodeBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCodeBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::CodeBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getCodeBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_CodeBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(CodeBias));
              }

              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
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
#include "org/orekit/files/ccsds/ndm/PythonNdmConstituent.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonNdmConstituent::class$ = NULL;
          jmethodID *PythonNdmConstituent::mids$ = NULL;
          bool PythonNdmConstituent::live$ = false;

          jclass PythonNdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonNdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_78197781b814ac28] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Header;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConventions_635853a14837ea6f] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_66ee964ea58dd871] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_a5bdfcd14307795f] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_ff7cb6c242604316] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNdmConstituent::PythonNdmConstituent(const ::org::orekit::files::ccsds::section::Header & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_78197781b814ac28, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void PythonNdmConstituent::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          ::org::orekit::utils::IERSConventions PythonNdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getConventions_635853a14837ea6f]));
          }

          ::org::orekit::data::DataContext PythonNdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getDataContext_66ee964ea58dd871]));
          }

          ::org::orekit::files::ccsds::section::Header PythonNdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getHeader_a5bdfcd14307795f]));
          }

          ::java::util::List PythonNdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getSegments_d751c1a57012b438]));
          }

          jlong PythonNdmConstituent::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonNdmConstituent::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
          }

          void PythonNdmConstituent::validate() const
          {
            env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_validate_ff7cb6c242604316]);
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
          static PyObject *t_PythonNdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNdmConstituent_of_(t_PythonNdmConstituent *self, PyObject *args);
          static int t_PythonNdmConstituent_init_(t_PythonNdmConstituent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNdmConstituent_finalize(t_PythonNdmConstituent *self);
          static PyObject *t_PythonNdmConstituent_getConventions(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getDataContext(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getHeader(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getSegments(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_pythonExtension(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_validate(t_PythonNdmConstituent *self, PyObject *args);
          static jobject JNICALL t_PythonNdmConstituent_getConventions0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getDataContext1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getHeader2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getSegments3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNdmConstituent_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNdmConstituent_get__self(t_PythonNdmConstituent *self, void *data);
          static PyObject *t_PythonNdmConstituent_get__parameters_(t_PythonNdmConstituent *self, void *data);
          static PyGetSetDef t_PythonNdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNdmConstituent, self),
            DECLARE_GET_FIELD(t_PythonNdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNdmConstituent__methods_[] = {
            DECLARE_METHOD(t_PythonNdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getConventions, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getDataContext, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getHeader, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getSegments, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNdmConstituent)[] = {
            { Py_tp_methods, t_PythonNdmConstituent__methods_ },
            { Py_tp_init, (void *) t_PythonNdmConstituent_init_ },
            { Py_tp_getset, t_PythonNdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNdmConstituent)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
            NULL
          };

          DEFINE_TYPE(PythonNdmConstituent, t_PythonNdmConstituent, PythonNdmConstituent);
          PyObject *t_PythonNdmConstituent::wrap_Object(const PythonNdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonNdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonNdmConstituent *self = (t_PythonNdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonNdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonNdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonNdmConstituent *self = (t_PythonNdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonNdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNdmConstituent), &PY_TYPE_DEF(PythonNdmConstituent), module, "PythonNdmConstituent", 1);
          }

          void t_PythonNdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "class_", make_descriptor(PythonNdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "wrapfn_", make_descriptor(t_PythonNdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNdmConstituent::initializeClass);
            JNINativeMethod methods[] = {
              { "getConventions", "()Lorg/orekit/utils/IERSConventions;", (void *) t_PythonNdmConstituent_getConventions0 },
              { "getDataContext", "()Lorg/orekit/data/DataContext;", (void *) t_PythonNdmConstituent_getDataContext1 },
              { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonNdmConstituent_getHeader2 },
              { "getSegments", "()Ljava/util/List;", (void *) t_PythonNdmConstituent_getSegments3 },
              { "pythonDecRef", "()V", (void *) t_PythonNdmConstituent_pythonDecRef4 },
              { "validate", "()V", (void *) t_PythonNdmConstituent_validate5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNdmConstituent::initializeClass, 1)))
              return NULL;
            return t_PythonNdmConstituent::wrap_Object(PythonNdmConstituent(((t_PythonNdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_PythonNdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonNdmConstituent_of_(t_PythonNdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonNdmConstituent_init_(t_PythonNdmConstituent *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::IERSConventions a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            PythonNdmConstituent object((jobject) NULL);

            if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::section::Header::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
            {
              INT_CALL(object = PythonNdmConstituent(a0, a1, a2, a3));
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

          static PyObject *t_PythonNdmConstituent_finalize(t_PythonNdmConstituent *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNdmConstituent_getConventions(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getConventions", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getDataContext(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getDataContext", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getHeader(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getHeader", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getSegments(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSegments());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getSegments", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_pythonExtension(t_PythonNdmConstituent *self, PyObject *args)
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

          static PyObject *t_PythonNdmConstituent_validate(t_PythonNdmConstituent *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "validate", args, 2);
          }

          static jobject JNICALL t_PythonNdmConstituent_getConventions0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getConventions", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::utils::IERSConventions::initializeClass, &value))
            {
              throwTypeError("getConventions", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getDataContext1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::data::DataContext value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getDataContext", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::data::DataContext::initializeClass, &value))
            {
              throwTypeError("getDataContext", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getHeader2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
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

          static jobject JNICALL t_PythonNdmConstituent_getSegments3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSegments", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSegments", result);
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

          static void JNICALL t_PythonNdmConstituent_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonNdmConstituent_get__self(t_PythonNdmConstituent *self, void *data)
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
          static PyObject *t_PythonNdmConstituent_get__parameters_(t_PythonNdmConstituent *self, void *data)
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
#include "org/hipparchus/stat/fitting/MultivariateNormalMixtureExpectationMaximization.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_estimate_68121d2cf13267fb] = env->getStaticMethodID(cls, "estimate", "([[DI)Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_fit_6987ccda0777c52e] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;)V");
            mids$[mid_fit_215d2560fb032b06] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;ID)V");
            mids$[mid_getFittedModel_b9162572dc92202d] = env->getMethodID(cls, "getFittedModel", "()Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_getLogLikelihood_9981f74b2d109da6] = env->getMethodID(cls, "getLogLikelihood", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalMixtureExpectationMaximization::MultivariateNormalMixtureExpectationMaximization(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::estimate(const JArray< JArray< jdouble > > & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callStaticObjectMethod(cls, mids$[mid_estimate_68121d2cf13267fb], a0.this$, a1));
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_6987ccda0777c52e], a0.this$);
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_215d2560fb032b06], a0.this$, a1, a2);
        }

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::getFittedModel() const
        {
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callObjectMethod(this$, mids$[mid_getFittedModel_b9162572dc92202d]));
        }

        jdouble MultivariateNormalMixtureExpectationMaximization::getLogLikelihood() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLogLikelihood_9981f74b2d109da6]);
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
#include "org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialStorelessStatistic::class$ = NULL;
          jmethodID *VectorialStorelessStatistic::mids$ = NULL;
          bool VectorialStorelessStatistic::live$ = false;

          jclass VectorialStorelessStatistic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_510336e14635cde1] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_be783177b060994b] = env->getMethodID(cls, "getResult", "()[D");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_a71c45509eaf92d1] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialStorelessStatistic::VectorialStorelessStatistic(jint a0, const ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_510336e14635cde1, a0, a1.this$)) {}

          void VectorialStorelessStatistic::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          jboolean VectorialStorelessStatistic::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jint VectorialStorelessStatistic::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
          }

          jlong VectorialStorelessStatistic::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          JArray< jdouble > VectorialStorelessStatistic::getResult() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_be783177b060994b]));
          }

          jint VectorialStorelessStatistic::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          void VectorialStorelessStatistic::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_a71c45509eaf92d1], a0.this$);
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
        namespace vector {
          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data);
          static PyGetSetDef t_VectorialStorelessStatistic__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, dimension),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, n),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialStorelessStatistic__methods_[] = {
            DECLARE_METHOD(t_VectorialStorelessStatistic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialStorelessStatistic)[] = {
            { Py_tp_methods, t_VectorialStorelessStatistic__methods_ },
            { Py_tp_init, (void *) t_VectorialStorelessStatistic_init_ },
            { Py_tp_getset, t_VectorialStorelessStatistic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialStorelessStatistic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialStorelessStatistic, t_VectorialStorelessStatistic, VectorialStorelessStatistic);

          void t_VectorialStorelessStatistic::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialStorelessStatistic), &PY_TYPE_DEF(VectorialStorelessStatistic), module, "VectorialStorelessStatistic", 0);
          }

          void t_VectorialStorelessStatistic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "class_", make_descriptor(VectorialStorelessStatistic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "wrapfn_", make_descriptor(t_VectorialStorelessStatistic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialStorelessStatistic::initializeClass, 1)))
              return NULL;
            return t_VectorialStorelessStatistic::wrap_Object(VectorialStorelessStatistic(((t_VectorialStorelessStatistic *) arg)->object.this$));
          }
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialStorelessStatistic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic a1((jobject) NULL);
            VectorialStorelessStatistic object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VectorialStorelessStatistic(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return result.wrap();
          }

          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg)
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

          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/MersenneTwister.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *MersenneTwister::class$ = NULL;
      jmethodID *MersenneTwister::mids$ = NULL;
      bool MersenneTwister::live$ = false;

      jclass MersenneTwister::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/MersenneTwister");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_d43202153dd284f7] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_8fd427ab23829bf5] = env->getMethodID(cls, "setSeed", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MersenneTwister::MersenneTwister() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      MersenneTwister::MersenneTwister(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      MersenneTwister::MersenneTwister(jint a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      MersenneTwister::MersenneTwister(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jint MersenneTwister::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
      }

      void MersenneTwister::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d43202153dd284f7], a0.this$);
      }

      void MersenneTwister::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_8fd427ab23829bf5], a0);
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
      static PyObject *t_MersenneTwister_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MersenneTwister_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MersenneTwister_init_(t_MersenneTwister *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MersenneTwister_nextInt(t_MersenneTwister *self, PyObject *args);
      static PyObject *t_MersenneTwister_setSeed(t_MersenneTwister *self, PyObject *args);
      static int t_MersenneTwister_set__seed(t_MersenneTwister *self, PyObject *arg, void *data);
      static PyGetSetDef t_MersenneTwister__fields_[] = {
        DECLARE_SET_FIELD(t_MersenneTwister, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MersenneTwister__methods_[] = {
        DECLARE_METHOD(t_MersenneTwister, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MersenneTwister, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MersenneTwister, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_MersenneTwister, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MersenneTwister)[] = {
        { Py_tp_methods, t_MersenneTwister__methods_ },
        { Py_tp_init, (void *) t_MersenneTwister_init_ },
        { Py_tp_getset, t_MersenneTwister__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MersenneTwister)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(MersenneTwister, t_MersenneTwister, MersenneTwister);

      void t_MersenneTwister::install(PyObject *module)
      {
        installType(&PY_TYPE(MersenneTwister), &PY_TYPE_DEF(MersenneTwister), module, "MersenneTwister", 0);
      }

      void t_MersenneTwister::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "class_", make_descriptor(MersenneTwister::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "wrapfn_", make_descriptor(t_MersenneTwister::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MersenneTwister_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MersenneTwister::initializeClass, 1)))
          return NULL;
        return t_MersenneTwister::wrap_Object(MersenneTwister(((t_MersenneTwister *) arg)->object.this$));
      }
      static PyObject *t_MersenneTwister_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MersenneTwister::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MersenneTwister_init_(t_MersenneTwister *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MersenneTwister object((jobject) NULL);

            INT_CALL(object = MersenneTwister());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
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

      static PyObject *t_MersenneTwister_nextInt(t_MersenneTwister *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(MersenneTwister), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_MersenneTwister_setSeed(t_MersenneTwister *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(MersenneTwister), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_MersenneTwister_set__seed(t_MersenneTwister *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedCoreFormats::class$ = NULL;
      jmethodID *LocalizedCoreFormats::mids$ = NULL;
      bool LocalizedCoreFormats::live$ = false;
      LocalizedCoreFormats *LocalizedCoreFormats::ARITHMETIC_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BANDWIDTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BASE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COLUMN_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONSTRAINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONVERGENCE_FAILED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DEGREES_OF_FREEDOM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIGEST_NOT_INITIALIZED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_BRACKETING = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_DECOMPOSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_FRACTION_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FUNCTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILLEGAL_STATE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::IMAGINARY_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_LARGER_THAN_MAX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INTERNAL_ERROR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INVALID_MAX_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LENGTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MAX_COUNT_EXCEEDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MEAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SYMMETRIC_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_INFINITE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_BRACKETING_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_FINITE_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_DATA$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESSES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_TRIALS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_LEFT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_ADDITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_EXCEEDS_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POLYNOMIAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::REAL_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROBUSTNESS_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROW_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SHAPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SIMPLE_MESSAGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::STANDARD_DEVIATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNKNOWN_MODE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNSUPPORTED_OPERATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::URL_CONTAINS_NO_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::USER_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WHOLE_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_STATE_SIZE = NULL;

      jclass LocalizedCoreFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedCoreFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_96dac37025fbc377] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/exception/LocalizedCoreFormats;");
          mids$[mid_values_9eb3e6a2a474e193] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/exception/LocalizedCoreFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARITHMETIC_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARITHMETIC_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SUMS_TO_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SUMS_TO_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BANDWIDTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BANDWIDTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BASE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BASE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_BAD_ARGUMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_BAD_ARGUMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_FAILED_CONVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_FAILED_CONVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_INVALID_PARAMETERS_ORDER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_INVALID_PARAMETERS_ORDER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_INSTANCE_AS_COMPLEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_OBJECT_TO_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_OBJECT_TO_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE_AS_TYPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE_AS_TYPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COLUMN_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COLUMN_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONSTRAINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONSTRAINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_INFINITY_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_INFINITY_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_NAN_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_NAN_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONVERGENCE_FAILED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONVERGENCE_FAILED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DEGREES_OF_FREEDOM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DEGREES_OF_FREEDOM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DERIVATION_ORDER_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DERIVATION_ORDER_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIFFERENT_ROWS_LENGTHS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIFFERENT_ROWS_LENGTHS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIGEST_NOT_INITIALIZED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIGEST_NOT_INITIALIZED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH_2x2 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH_2x2", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISTRIBUTION_NOT_LOADED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISTRIBUTION_NOT_LOADED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_INTERPOLATION_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_INTERPOLATION_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_COLUMN_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_ROW_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_ROW_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ENDPOINTS_NOT_AN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ENDPOINTS_NOT_AN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPANSION_FACTOR_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPANSION_FACTOR_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FACTORIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FACTORIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_BRACKETING = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_BRACKETING", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_DECOMPOSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_DECOMPOSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_FRACTION_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_FRACTION_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_COLUMNS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_COLUMNS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_ROWS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_ROWS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION_CONVERSION_OVERFLOW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION_CONVERSION_OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FUNCTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FUNCTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILLEGAL_STATE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILL_CONDITIONED_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILL_CONDITIONED_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          IMAGINARY_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "IMAGINARY_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_LARGER_THAN_MAX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_LARGER_THAN_MAX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_CAPACITY_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_CAPACITY_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_COLUMN_AFTER_FINAL_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_COLUMN_AFTER_FINAL_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_ROW_AFTER_FINAL_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_ROW_AFTER_FINAL_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_ROWS_AND_COLUMNS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_ROWS_AND_COLUMNS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INTERNAL_ERROR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INVALID_MAX_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INVALID_MAX_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LENGTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LENGTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_BOUND_NOT_BELOW_UPPER_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MAX_COUNT_EXCEEDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MAX_COUNT_EXCEEDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MEAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MEAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_COMPLEX_MODULE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_COMPLEX_MODULE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_CONVERGENT_CONTINUED_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_CONVERGENT_CONTINUED_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_POSITIVE_DEFINITE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_POSITIVE_DEFINITE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SELF_ADJOINT_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SELF_ADJOINT_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SYMMETRIC_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SYMMETRIC_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_INFINITE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_INFINITE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_BRACKETING_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_BRACKETING_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_FINITE_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_FINITE_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_WINDOW_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_WINDOW_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_CONVERGENCE_WITH_ANY_START_POINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_CONVERGENCE_WITH_ANY_START_POINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_DATA$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_OPTIMUM_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_OPTIMUM_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_INTERPOLATION_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_INTERPOLATION_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESSES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESSES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_TRIALS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_TRIALS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_OVERFLOW_AFTER_MULTIPLY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_LEFT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_LEFT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_SIMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_SIMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_ADDITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_ADDITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_MULTIPLICATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_MULTIPLICATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_SUBTRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_SUBTRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_EXCEEDS_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_EXCEEDS_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POLYNOMIAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POLYNOMIAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          REAL_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "REAL_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROBUSTNESS_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROBUSTNESS_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROOTS_OF_UNITY_NOT_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROOTS_OF_UNITY_NOT_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROW_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROW_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SHAPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SHAPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SIMPLE_MESSAGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SIMPLE_MESSAGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          STANDARD_DEVIATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "STANDARD_DEVIATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POINT_NOT_IN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POINT_NOT_IN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SUBARRAY_ENDS_AFTER_ARRAY_END = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SUBARRAY_ENDS_AFTER_ARRAY_END", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_LARGE_CUTOFF_SINGULAR_VALUE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_LARGE_CUTOFF_SINGULAR_VALUE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNKNOWN_MODE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNKNOWN_MODE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNSUPPORTED_OPERATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNSUPPORTED_OPERATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          URL_CONTAINS_NO_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "URL_CONTAINS_NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          USER_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "USER_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WEIGHT_AT_LEAST_ONE_NON_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WEIGHT_AT_LEAST_ONE_NON_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WHOLE_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WHOLE_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WRONG_NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WRONG_NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_FRACTION_TO_DIVIDE_BY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_FRACTION_TO_DIVIDE_BY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_STATE_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_STATE_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedCoreFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
      }

      ::java::lang::String LocalizedCoreFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
      }

      LocalizedCoreFormats LocalizedCoreFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedCoreFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_96dac37025fbc377], a0.this$));
      }

      JArray< LocalizedCoreFormats > LocalizedCoreFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedCoreFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_9eb3e6a2a474e193]));
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
      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self);
      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data);
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data);
      static PyGetSetDef t_LocalizedCoreFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedCoreFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedCoreFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedCoreFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedCoreFormats)[] = {
        { Py_tp_methods, t_LocalizedCoreFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedCoreFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedCoreFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedCoreFormats, t_LocalizedCoreFormats, LocalizedCoreFormats);
      PyObject *t_LocalizedCoreFormats::wrap_Object(const LocalizedCoreFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedCoreFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedCoreFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedCoreFormats), &PY_TYPE_DEF(LocalizedCoreFormats), module, "LocalizedCoreFormats", 0);
      }

      void t_LocalizedCoreFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "class_", make_descriptor(LocalizedCoreFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "wrapfn_", make_descriptor(t_LocalizedCoreFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedCoreFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARITHMETIC_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARITHMETIC_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SUMS_TO_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BANDWIDTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BANDWIDTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BASE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_BAD_ARGUMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_FAILED_CONVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_INVALID_PARAMETERS_ORDER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_OBJECT_TO_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE_AS_TYPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COLUMN_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COLUMN_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONSTRAINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONSTRAINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_INFINITY_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_NAN_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONVERGENCE_FAILED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONVERGENCE_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DEGREES_OF_FREEDOM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DEGREES_OF_FREEDOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DERIVATION_ORDER_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIFFERENT_ROWS_LENGTHS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIGEST_NOT_INITIALIZED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIGEST_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH_2x2", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISTRIBUTION_NOT_LOADED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_INTERPOLATION_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_ROW_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ENDPOINTS_NOT_AN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPANSION_FACTOR_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FACTORIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_BRACKETING", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_BRACKETING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_DECOMPOSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_DECOMPOSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_FRACTION_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_FRACTION_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_COLUMNS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_ROWS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION_CONVERSION_OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FUNCTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILLEGAL_STATE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILLEGAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILL_CONDITIONED_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "IMAGINARY_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::IMAGINARY_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_LARGER_THAN_MAX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_LARGER_THAN_MAX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_CAPACITY_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_COLUMN_AFTER_FINAL_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_ROW_AFTER_FINAL_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_ROWS_AND_COLUMNS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INTERNAL_ERROR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INVALID_MAX_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INVALID_MAX_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LENGTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LENGTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MAX_COUNT_EXCEEDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MAX_COUNT_EXCEEDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MEAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_COMPLEX_MODULE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_CONVERGENT_CONTINUED_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_POSITIVE_DEFINITE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SELF_ADJOINT_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SYMMETRIC_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SYMMETRIC_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_INFINITE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_INFINITE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_BRACKETING_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_BRACKETING_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_FINITE_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_FINITE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_WINDOW_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_CONVERGENCE_WITH_ANY_START_POINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_DATA$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_OPTIMUM_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_INTERPOLATION_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESSES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESSES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_TRIALS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_TRIALS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_LEFT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_LEFT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_SIMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_ADDITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_ADDITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_MULTIPLICATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_SUBTRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_EXCEEDS_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_EXCEEDS_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POLYNOMIAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POLYNOMIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "REAL_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::REAL_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROBUSTNESS_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROBUSTNESS_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROOTS_OF_UNITY_NOT_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROW_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROW_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SHAPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SHAPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SIMPLE_MESSAGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SIMPLE_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "STANDARD_DEVIATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::STANDARD_DEVIATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POINT_NOT_IN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SUBARRAY_ENDS_AFTER_ARRAY_END", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_LARGE_CUTOFF_SINGULAR_VALUE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNKNOWN_MODE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNKNOWN_MODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNSUPPORTED_OPERATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNSUPPORTED_OPERATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "URL_CONTAINS_NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::URL_CONTAINS_NO_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "USER_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::USER_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WEIGHT_AT_LEAST_ONE_NON_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WHOLE_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WHOLE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WRONG_NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_FRACTION_TO_DIVIDE_BY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_STATE_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_STATE_SIZE)));
      }

      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedCoreFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedCoreFormats::wrap_Object(LocalizedCoreFormats(((t_LocalizedCoreFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedCoreFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedCoreFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::valueOf(a0));
          return t_LocalizedCoreFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedCoreFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedCoreFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
