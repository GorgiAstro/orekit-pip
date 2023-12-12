#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/UnsupportedParameterException.h"
#include "java/util/List.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *UnsupportedParameterException::class$ = NULL;
      jmethodID *UnsupportedParameterException::mids$ = NULL;
      bool UnsupportedParameterException::live$ = false;
      ::java::lang::String *UnsupportedParameterException::COMMA_SEP = NULL;
      ::java::lang::String *UnsupportedParameterException::NO_PARAMETER = NULL;

      jclass UnsupportedParameterException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/UnsupportedParameterException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_013b264b441f07a2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COMMA_SEP = new ::java::lang::String(env->getStaticObjectField(cls, "COMMA_SEP", "Ljava/lang/String;"));
          NO_PARAMETER = new ::java::lang::String(env->getStaticObjectField(cls, "NO_PARAMETER", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnsupportedParameterException::UnsupportedParameterException(const ::java::lang::String & a0, const ::java::util::List & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_013b264b441f07a2, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_UnsupportedParameterException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnsupportedParameterException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnsupportedParameterException_init_(t_UnsupportedParameterException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_UnsupportedParameterException__methods_[] = {
        DECLARE_METHOD(t_UnsupportedParameterException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnsupportedParameterException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnsupportedParameterException)[] = {
        { Py_tp_methods, t_UnsupportedParameterException__methods_ },
        { Py_tp_init, (void *) t_UnsupportedParameterException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnsupportedParameterException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(UnsupportedParameterException, t_UnsupportedParameterException, UnsupportedParameterException);

      void t_UnsupportedParameterException::install(PyObject *module)
      {
        installType(&PY_TYPE(UnsupportedParameterException), &PY_TYPE_DEF(UnsupportedParameterException), module, "UnsupportedParameterException", 0);
      }

      void t_UnsupportedParameterException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "class_", make_descriptor(UnsupportedParameterException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "wrapfn_", make_descriptor(t_UnsupportedParameterException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "boxfn_", make_descriptor(boxObject));
        env->getClass(UnsupportedParameterException::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "COMMA_SEP", make_descriptor(j2p(*UnsupportedParameterException::COMMA_SEP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "NO_PARAMETER", make_descriptor(j2p(*UnsupportedParameterException::NO_PARAMETER)));
      }

      static PyObject *t_UnsupportedParameterException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnsupportedParameterException::initializeClass, 1)))
          return NULL;
        return t_UnsupportedParameterException::wrap_Object(UnsupportedParameterException(((t_UnsupportedParameterException *) arg)->object.this$));
      }
      static PyObject *t_UnsupportedParameterException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnsupportedParameterException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnsupportedParameterException_init_(t_UnsupportedParameterException *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        UnsupportedParameterException object((jobject) NULL);

        if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = UnsupportedParameterException(a0, a1));
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
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *IntervalsSet::class$ = NULL;
          jmethodID *IntervalsSet::mids$ = NULL;
          bool IntervalsSet::live$ = false;

          jclass IntervalsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/IntervalsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_546559a08b08816f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_bdacd7c5506b494c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_0d9551367f7ecdef] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_faa8e1c775f8f198] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");
              mids$[mid_getInf_557b8123390d8d0c] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSup_557b8123390d8d0c] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_76fb0949df043b81] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_computeGeometricalProperties_0640e6acf969ed28] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalsSet::IntervalsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          IntervalsSet::IntervalsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_546559a08b08816f, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_bdacd7c5506b494c, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::java::util::List IntervalsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_0d9551367f7ecdef]));
          }

          IntervalsSet IntervalsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return IntervalsSet(env->callObjectMethod(this$, mids$[mid_buildNew_faa8e1c775f8f198], a0.this$));
          }

          jdouble IntervalsSet::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_557b8123390d8d0c]);
          }

          jdouble IntervalsSet::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_557b8123390d8d0c]);
          }

          ::java::util::Iterator IntervalsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection IntervalsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_76fb0949df043b81], a0.this$));
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
        namespace oned {
          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args);
          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data);
          static PyGetSetDef t_IntervalsSet__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalsSet, inf),
            DECLARE_GET_FIELD(t_IntervalsSet, sup),
            DECLARE_GET_FIELD(t_IntervalsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalsSet__methods_[] = {
            DECLARE_METHOD(t_IntervalsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, getInf, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, getSup, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, projectToBoundary, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalsSet)[] = {
            { Py_tp_methods, t_IntervalsSet__methods_ },
            { Py_tp_init, (void *) t_IntervalsSet_init_ },
            { Py_tp_getset, t_IntervalsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_IntervalsSet *)) get_generic_iterator< t_IntervalsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(IntervalsSet, t_IntervalsSet, IntervalsSet);
          PyObject *t_IntervalsSet::wrap_Object(const IntervalsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_IntervalsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_IntervalsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalsSet), &PY_TYPE_DEF(IntervalsSet), module, "IntervalsSet", 0);
          }

          void t_IntervalsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "class_", make_descriptor(IntervalsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "wrapfn_", make_descriptor(t_IntervalsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalsSet::initializeClass, 1)))
              return NULL;
            return t_IntervalsSet::wrap_Object(IntervalsSet(((t_IntervalsSet *) arg)->object.this$));
          }
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = IntervalsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = IntervalsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Interval));
          }

          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_IntervalsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/EllipsoidTessellator.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *EllipsoidTessellator::class$ = NULL;
          jmethodID *EllipsoidTessellator::mids$ = NULL;
          bool EllipsoidTessellator::live$ = false;

          jclass EllipsoidTessellator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/EllipsoidTessellator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a31e019ba9d05ce7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/tessellation/TileAiming;I)V");
              mids$[mid_buildSimpleZone_504a8d441b5202c7] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_buildSimpleZone_ec6a766e431c796c] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[[D)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_sample_78bd2592ae6dbd42] = env->getMethodID(cls, "sample", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DD)Ljava/util/List;");
              mids$[mid_tessellate_6796254ce45b0eb1] = env->getMethodID(cls, "tessellate", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DDDDZZ)Ljava/util/List;");
              mids$[mid_toGeodetic_0015b467bc7250e0] = env->getMethodID(cls, "toGeodetic", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EllipsoidTessellator::EllipsoidTessellator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::tessellation::TileAiming & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a31e019ba9d05ce7, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< ::org::orekit::bodies::GeodeticPoint > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_504a8d441b5202c7], a0, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< JArray< jdouble > > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_ec6a766e431c796c], a0, a1.this$));
          }

          ::java::util::List EllipsoidTessellator::sample(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_sample_78bd2592ae6dbd42], a0.this$, a1, a2));
          }

          ::java::util::List EllipsoidTessellator::tessellate(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, jboolean a6) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_tessellate_6796254ce45b0eb1], a0.this$, a1, a2, a3, a4, a5, a6));
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
        namespace tessellation {
          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args);
          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args);
          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args);

          static PyMethodDef t_EllipsoidTessellator__methods_[] = {
            DECLARE_METHOD(t_EllipsoidTessellator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, buildSimpleZone, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, sample, METH_VARARGS),
            DECLARE_METHOD(t_EllipsoidTessellator, tessellate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EllipsoidTessellator)[] = {
            { Py_tp_methods, t_EllipsoidTessellator__methods_ },
            { Py_tp_init, (void *) t_EllipsoidTessellator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EllipsoidTessellator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EllipsoidTessellator, t_EllipsoidTessellator, EllipsoidTessellator);

          void t_EllipsoidTessellator::install(PyObject *module)
          {
            installType(&PY_TYPE(EllipsoidTessellator), &PY_TYPE_DEF(EllipsoidTessellator), module, "EllipsoidTessellator", 0);
          }

          void t_EllipsoidTessellator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "class_", make_descriptor(EllipsoidTessellator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "wrapfn_", make_descriptor(t_EllipsoidTessellator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EllipsoidTessellator::initializeClass, 1)))
              return NULL;
            return t_EllipsoidTessellator::wrap_Object(EllipsoidTessellator(((t_EllipsoidTessellator *) arg)->object.this$));
          }
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EllipsoidTessellator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::tessellation::TileAiming a1((jobject) NULL);
            jint a2;
            EllipsoidTessellator object((jobject) NULL);

            if (!parseArgs(args, "kkI", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::tessellation::TileAiming::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EllipsoidTessellator(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< ::org::orekit::bodies::GeodeticPoint > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                JArray< JArray< jdouble > > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[[D", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "buildSimpleZone", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.sample(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sample", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jboolean a5;
            jboolean a6;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDDDDZZ", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = self->object.tessellate(a0, a1, a2, a3, a4, a5, a6));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "tessellate", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmData::class$ = NULL;
              jmethodID *OpmData::mids$ = NULL;
              bool OpmData::live$ = false;

              jclass OpmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ef88bee09a3b5466] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_ab1f5bcd3006ffba] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_a7b00de16bb05023] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getManeuver_8f5fc12e3129007b] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_0d9551367f7ecdef] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMass_557b8123390d8d0c] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getNbManeuvers_412668abc8d889e9] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getSpacecraftParametersBlock_ac68c68a22df72d8] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getStateVectorBlock_76c5443b4a833bb4] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/odm/StateVector;");
                  mids$[mid_getUserDefinedBlock_e8dd2483e310f990] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_hasManeuvers_89b302893bdbe1f1] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmData::OpmData(const ::org::orekit::files::ccsds::ndm::odm::StateVector & a0, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::java::util::List & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef88bee09a3b5466, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OpmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_ab1f5bcd3006ffba]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OpmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_a7b00de16bb05023]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver OpmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_8f5fc12e3129007b], a0));
              }

              ::java::util::List OpmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_0d9551367f7ecdef]));
              }

              jdouble OpmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_557b8123390d8d0c]);
              }

              jint OpmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_412668abc8d889e9]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OpmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_ac68c68a22df72d8]));
              }

              ::org::orekit::files::ccsds::ndm::odm::StateVector OpmData::getStateVectorBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_76c5443b4a833bb4]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OpmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_e8dd2483e310f990]));
              }

              jboolean OpmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_89b302893bdbe1f1]);
              }

              void OpmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self);
              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self);
              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_getManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getMass(t_OpmData *self);
              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self);
              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self);
              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self);
              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data);
              static PyGetSetDef t_OpmData__fields_[] = {
                DECLARE_GET_FIELD(t_OpmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OpmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OpmData, maneuvers),
                DECLARE_GET_FIELD(t_OpmData, mass),
                DECLARE_GET_FIELD(t_OpmData, nbManeuvers),
                DECLARE_GET_FIELD(t_OpmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OpmData, stateVectorBlock),
                DECLARE_GET_FIELD(t_OpmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmData__methods_[] = {
                DECLARE_METHOD(t_OpmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getManeuver, METH_O),
                DECLARE_METHOD(t_OpmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getStateVectorBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmData)[] = {
                { Py_tp_methods, t_OpmData__methods_ },
                { Py_tp_init, (void *) t_OpmData_init_ },
                { Py_tp_getset, t_OpmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OpmData, t_OpmData, OpmData);

              void t_OpmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmData), &PY_TYPE_DEF(OpmData), module, "OpmData", 0);
              }

              void t_OpmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "class_", make_descriptor(OpmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "wrapfn_", make_descriptor(t_OpmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmData::initializeClass, 1)))
                  return NULL;
                return t_OpmData::wrap_Object(OpmData(((t_OpmData *) arg)->object.this$));
              }
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::java::util::List a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                jdouble a6;
                OpmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkKkD", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6))
                {
                  INT_CALL(object = OpmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_OpmData_getManeuvers(t_OpmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_OpmData_getMass(t_OpmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector result((jobject) NULL);
                OBJ_CALL(result = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(result);
              }

              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg)
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

              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector value((jobject) NULL);
                OBJ_CALL(value = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data)
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
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *PivotingStrategy::class$ = NULL;
      jmethodID *PivotingStrategy::mids$ = NULL;
      bool PivotingStrategy::live$ = false;
      PivotingStrategy *PivotingStrategy::CENTRAL = NULL;
      PivotingStrategy *PivotingStrategy::MEDIAN_OF_3 = NULL;

      jclass PivotingStrategy::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/PivotingStrategy");

          mids$ = new jmethodID[max_mid];
          mids$[mid_pivotIndex_77c2509677720eda] = env->getMethodID(cls, "pivotIndex", "([DII)I");
          mids$[mid_valueOf_efc6a41649bdcb84] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_values_e1862acc3dc110cb] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/PivotingStrategy;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CENTRAL = new PivotingStrategy(env->getStaticObjectField(cls, "CENTRAL", "Lorg/hipparchus/util/PivotingStrategy;"));
          MEDIAN_OF_3 = new PivotingStrategy(env->getStaticObjectField(cls, "MEDIAN_OF_3", "Lorg/hipparchus/util/PivotingStrategy;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint PivotingStrategy::pivotIndex(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_pivotIndex_77c2509677720eda], a0.this$, a1, a2);
      }

      PivotingStrategy PivotingStrategy::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PivotingStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_efc6a41649bdcb84], a0.this$));
      }

      JArray< PivotingStrategy > PivotingStrategy::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PivotingStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_e1862acc3dc110cb]));
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
      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PivotingStrategy_values(PyTypeObject *type);
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data);
      static PyGetSetDef t_PivotingStrategy__fields_[] = {
        DECLARE_GET_FIELD(t_PivotingStrategy, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PivotingStrategy__methods_[] = {
        DECLARE_METHOD(t_PivotingStrategy, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, of_, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, pivotIndex, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PivotingStrategy)[] = {
        { Py_tp_methods, t_PivotingStrategy__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PivotingStrategy__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PivotingStrategy)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PivotingStrategy, t_PivotingStrategy, PivotingStrategy);
      PyObject *t_PivotingStrategy::wrap_Object(const PivotingStrategy& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PivotingStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PivotingStrategy::install(PyObject *module)
      {
        installType(&PY_TYPE(PivotingStrategy), &PY_TYPE_DEF(PivotingStrategy), module, "PivotingStrategy", 0);
      }

      void t_PivotingStrategy::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "class_", make_descriptor(PivotingStrategy::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "wrapfn_", make_descriptor(t_PivotingStrategy::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "boxfn_", make_descriptor(boxObject));
        env->getClass(PivotingStrategy::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "CENTRAL", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::CENTRAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "MEDIAN_OF_3", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::MEDIAN_OF_3)));
      }

      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PivotingStrategy::initializeClass, 1)))
          return NULL;
        return t_PivotingStrategy::wrap_Object(PivotingStrategy(((t_PivotingStrategy *) arg)->object.this$));
      }
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PivotingStrategy::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        jint a2;
        jint result;

        if (!parseArgs(args, "[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pivotIndex(a0, a1, a2));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "pivotIndex", args);
        return NULL;
      }

      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PivotingStrategy result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::valueOf(a0));
          return t_PivotingStrategy::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PivotingStrategy_values(PyTypeObject *type)
      {
        JArray< PivotingStrategy > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::values());
        return JArray<jobject>(result.this$).wrap(t_PivotingStrategy::wrap_jobject);
      }
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Header::class$ = NULL;
              jmethodID *SsrIgm05Header::mids$ = NULL;
              bool SsrIgm05Header::live$ = false;

              jclass SsrIgm05Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Header::SsrIgm05Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm05Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Header)[] = {
                { Py_tp_methods, t_SsrIgm05Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Header, t_SsrIgm05Header, SsrIgm05Header);

              void t_SsrIgm05Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Header), &PY_TYPE_DEF(SsrIgm05Header), module, "SsrIgm05Header", 0);
              }

              void t_SsrIgm05Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "class_", make_descriptor(SsrIgm05Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "wrapfn_", make_descriptor(t_SsrIgm05Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Header::wrap_Object(SsrIgm05Header(((t_SsrIgm05Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Header object((jobject) NULL);

                INT_CALL(object = SsrIgm05Header());
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *DSSTNewtonianAttractionContext::mids$ = NULL;
            bool DSSTNewtonianAttractionContext::live$ = false;

            jclass DSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5393a5d2b5753509] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)V");
                mids$[mid_getGM_557b8123390d8d0c] = env->getMethodID(cls, "getGM", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttractionContext::DSSTNewtonianAttractionContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const JArray< jdouble > & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_5393a5d2b5753509, a0.this$, a1.this$)) {}

            jdouble DSSTNewtonianAttractionContext::getGM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGM_557b8123390d8d0c]);
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
            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self);
            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttractionContext, gM),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttractionContext_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttractionContext, t_DSSTNewtonianAttractionContext, DSSTNewtonianAttractionContext);

            void t_DSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttractionContext), &PY_TYPE_DEF(DSSTNewtonianAttractionContext), module, "DSSTNewtonianAttractionContext", 0);
            }

            void t_DSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "class_", make_descriptor(DSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_DSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttractionContext::wrap_Object(DSSTNewtonianAttractionContext(((t_DSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              DSSTNewtonianAttractionContext object((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTNewtonianAttractionContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGM());
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
            mids$[mid_valueOf_0df71b9dd2bb9aa9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_values_7dba55f7250b7655] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/NaNStrategy;");

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
          return NaNStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0df71b9dd2bb9aa9], a0.this$));
        }

        JArray< NaNStrategy > NaNStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< NaNStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_7dba55f7250b7655]));
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
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NetworkRecord::class$ = NULL;
          jmethodID *NetworkRecord::mids$ = NULL;
          bool NetworkRecord::live$ = false;

          jclass NetworkRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NetworkRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_89b302893bdbe1f1] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_c5e2d1332c099f0d] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getNetworkIdentifier_3cffd47377eca18a] = env->getMethodID(cls, "getNetworkIdentifier", "()Ljava/lang/String;");
              mids$[mid_getNetworkInfoAddress_3cffd47377eca18a] = env->getMethodID(cls, "getNetworkInfoAddress", "()Ljava/lang/String;");
              mids$[mid_getOperator_3cffd47377eca18a] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getRecordType_2923d5139aa846c0] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getRegistrationAddress_3cffd47377eca18a] = env->getMethodID(cls, "getRegistrationAddress", "()Ljava/lang/String;");
              mids$[mid_getStreamInfoAddress_3cffd47377eca18a] = env->getMethodID(cls, "getStreamInfoAddress", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NetworkRecord::NetworkRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          jboolean NetworkRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_89b302893bdbe1f1]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication NetworkRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_c5e2d1332c099f0d]));
          }

          ::java::lang::String NetworkRecord::getNetworkIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkIdentifier_3cffd47377eca18a]));
          }

          ::java::lang::String NetworkRecord::getNetworkInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkInfoAddress_3cffd47377eca18a]));
          }

          ::java::lang::String NetworkRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_3cffd47377eca18a]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType NetworkRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_2923d5139aa846c0]));
          }

          ::java::lang::String NetworkRecord::getRegistrationAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRegistrationAddress_3cffd47377eca18a]));
          }

          ::java::lang::String NetworkRecord::getStreamInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStreamInfoAddress_3cffd47377eca18a]));
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
          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args);
          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data);
          static PyGetSetDef t_NetworkRecord__fields_[] = {
            DECLARE_GET_FIELD(t_NetworkRecord, authentication),
            DECLARE_GET_FIELD(t_NetworkRecord, networkIdentifier),
            DECLARE_GET_FIELD(t_NetworkRecord, networkInfoAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, operator),
            DECLARE_GET_FIELD(t_NetworkRecord, recordType),
            DECLARE_GET_FIELD(t_NetworkRecord, registrationAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, streamInfoAddress),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NetworkRecord__methods_[] = {
            DECLARE_METHOD(t_NetworkRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkInfoAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_NetworkRecord, getRegistrationAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getStreamInfoAddress, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NetworkRecord)[] = {
            { Py_tp_methods, t_NetworkRecord__methods_ },
            { Py_tp_init, (void *) t_NetworkRecord_init_ },
            { Py_tp_getset, t_NetworkRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NetworkRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(NetworkRecord, t_NetworkRecord, NetworkRecord);

          void t_NetworkRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(NetworkRecord), &PY_TYPE_DEF(NetworkRecord), module, "NetworkRecord", 0);
          }

          void t_NetworkRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "class_", make_descriptor(NetworkRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "wrapfn_", make_descriptor(t_NetworkRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NetworkRecord::initializeClass, 1)))
              return NULL;
            return t_NetworkRecord::wrap_Object(NetworkRecord(((t_NetworkRecord *) arg)->object.this$));
          }
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NetworkRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            NetworkRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = NetworkRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkIdentifier());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NetworkRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegistrationAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStreamInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkIdentifier());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkInfoAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegistrationAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStreamInfoAddress());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
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
              mids$[mid_select_dcac5932d1970029] = env->getMethodID(cls, "select", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
              mids$[mid_valueOf_bb2278d825ef33b4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_values_a4ee0f9dfa9d2948] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");

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
            return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_select_dcac5932d1970029], a0.this$, a1.this$));
          }

          ParsedUnitsBehavior ParsedUnitsBehavior::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ParsedUnitsBehavior(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bb2278d825ef33b4], a0.this$));
          }

          JArray< ParsedUnitsBehavior > ParsedUnitsBehavior::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ParsedUnitsBehavior >(env->callStaticObjectMethod(cls, mids$[mid_values_a4ee0f9dfa9d2948]));
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
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagator::class$ = NULL;
        jmethodID *GLONASSNumericalPropagator::mids$ = NULL;
        bool GLONASSNumericalPropagator::live$ = false;

        jclass GLONASSNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e282e250497c197e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/data/DataContext;Z)V");
            mids$[mid_getGLONASSOrbitalElements_19faff6f6b9c4979] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
            mids$[mid_propagate_15e0d02372b1347b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_createMapper_31b084497c320ed2] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_4a2f137b7a0c1747] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagator::GLONASSNumericalPropagator(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::attitudes::AttitudeProvider & a3, jdouble a4, const ::org::orekit::data::DataContext & a5, jboolean a6) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_e282e250497c197e, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

        ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSNumericalPropagator::getGLONASSOrbitalElements() const
        {
          return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_19faff6f6b9c4979]));
        }

        ::org::orekit::propagation::SpacecraftState GLONASSNumericalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_15e0d02372b1347b], a0.this$));
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
        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self);
        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args);
        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data);
        static PyGetSetDef t_GLONASSNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_GLONASSNumericalPropagator, gLONASSOrbitalElements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GLONASSNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagator)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagator_init_ },
          { Py_tp_getset, t_GLONASSNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagator, t_GLONASSNumericalPropagator, GLONASSNumericalPropagator);

        void t_GLONASSNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagator), &PY_TYPE_DEF(GLONASSNumericalPropagator), module, "GLONASSNumericalPropagator", 0);
        }

        void t_GLONASSNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "class_", make_descriptor(GLONASSNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagator::wrap_Object(GLONASSNumericalPropagator(((t_GLONASSNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
          jdouble a4;
          ::org::orekit::data::DataContext a5((jobject) NULL);
          jboolean a6;
          GLONASSNumericalPropagator object((jobject) NULL);

          if (!parseArgs(args, "kkkkDkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = GLONASSNumericalPropagator(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
          OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GLONASSNumericalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
          OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetectorsProvider::class$ = NULL;
        jmethodID *EventDetectorsProvider::mids$ = NULL;
        bool EventDetectorsProvider::live$ = false;
        jdouble EventDetectorsProvider::DATATION_ACCURACY = (jdouble) 0;

        jclass EventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getEventDetectors_525f259082364af5] = env->getMethodID(cls, "getEventDetectors", "(Ljava/util/List;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8fda129f71dfeeba] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;Ljava/util/List;)Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATATION_ACCURACY = env->getStaticDoubleField(cls, "DATATION_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors(const ::java::util::List & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_525f259082364af5], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0, const ::java::util::List & a1) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8fda129f71dfeeba], a0.this$, a1.this$));
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
        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data);
        static PyGetSetDef t_EventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetectorsProvider, eventDetectors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_EventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_EventDetectorsProvider, getFieldEventDetectors, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetectorsProvider)[] = {
          { Py_tp_methods, t_EventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetectorsProvider, t_EventDetectorsProvider, EventDetectorsProvider);

        void t_EventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetectorsProvider), &PY_TYPE_DEF(EventDetectorsProvider), module, "EventDetectorsProvider", 0);
        }

        void t_EventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "class_", make_descriptor(EventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "wrapfn_", make_descriptor(t_EventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EventDetectorsProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "DATATION_ACCURACY", make_descriptor(EventDetectorsProvider::DATATION_ACCURACY));
        }

        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_EventDetectorsProvider::wrap_Object(EventDetectorsProvider(((t_EventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }
            break;
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0, a1));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/AlongTrackAiming.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *AlongTrackAiming::class$ = NULL;
          jmethodID *AlongTrackAiming::mids$ = NULL;
          bool AlongTrackAiming::live$ = false;

          jclass AlongTrackAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/AlongTrackAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fd61481c6ffa4d1e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/orbits/Orbit;Z)V");
              mids$[mid_alongTileDirection_94d0bf825c02adfa] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_0d9551367f7ecdef] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AlongTrackAiming::AlongTrackAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd61481c6ffa4d1e, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AlongTrackAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_94d0bf825c02adfa], a0.this$, a1.this$));
          }

          ::java::util::List AlongTrackAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_0d9551367f7ecdef]));
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
        namespace tessellation {
          static PyObject *t_AlongTrackAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AlongTrackAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AlongTrackAiming_init_(t_AlongTrackAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AlongTrackAiming_alongTileDirection(t_AlongTrackAiming *self, PyObject *args);
          static PyObject *t_AlongTrackAiming_getSingularPoints(t_AlongTrackAiming *self);
          static PyObject *t_AlongTrackAiming_get__singularPoints(t_AlongTrackAiming *self, void *data);
          static PyGetSetDef t_AlongTrackAiming__fields_[] = {
            DECLARE_GET_FIELD(t_AlongTrackAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AlongTrackAiming__methods_[] = {
            DECLARE_METHOD(t_AlongTrackAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AlongTrackAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AlongTrackAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_AlongTrackAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AlongTrackAiming)[] = {
            { Py_tp_methods, t_AlongTrackAiming__methods_ },
            { Py_tp_init, (void *) t_AlongTrackAiming_init_ },
            { Py_tp_getset, t_AlongTrackAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AlongTrackAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AlongTrackAiming, t_AlongTrackAiming, AlongTrackAiming);

          void t_AlongTrackAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(AlongTrackAiming), &PY_TYPE_DEF(AlongTrackAiming), module, "AlongTrackAiming", 0);
          }

          void t_AlongTrackAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "class_", make_descriptor(AlongTrackAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "wrapfn_", make_descriptor(t_AlongTrackAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AlongTrackAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AlongTrackAiming::initializeClass, 1)))
              return NULL;
            return t_AlongTrackAiming::wrap_Object(AlongTrackAiming(((t_AlongTrackAiming *) arg)->object.this$));
          }
          static PyObject *t_AlongTrackAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AlongTrackAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AlongTrackAiming_init_(t_AlongTrackAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            jboolean a2;
            AlongTrackAiming object((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AlongTrackAiming(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AlongTrackAiming_alongTileDirection(t_AlongTrackAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_AlongTrackAiming_getSingularPoints(t_AlongTrackAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_AlongTrackAiming_get__singularPoints(t_AlongTrackAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary$Entry::class$ = NULL;
      jmethodID *FieldArrayDictionary$Entry::mids$ = NULL;
      bool FieldArrayDictionary$Entry::live$ = false;

      jclass FieldArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_3cffd47377eca18a] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_41762fd4377ff26e] = env->getMethodID(cls, "getValue", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_increment_cc18240f4a737f14] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_increment_5d9c9afaca2e497c] = env->getMethodID(cls, "increment", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_scaledIncrement_dbfb7d53d6018f6f] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_scaledIncrement_14f13c9f5bb765bd] = env->getMethodID(cls, "scaledIncrement", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_0640e6acf969ed28] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String FieldArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_3cffd47377eca18a]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary$Entry::getValue() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getValue_41762fd4377ff26e]));
      }

      void FieldArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_cc18240f4a737f14], a0.this$);
      }

      void FieldArrayDictionary$Entry::increment(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_5d9c9afaca2e497c], a0.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(jdouble a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_dbfb7d53d6018f6f], a0, a1.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(const ::org::hipparchus::CalculusFieldElement & a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_14f13c9f5bb765bd], a0.this$, a1.this$);
      }

      jint FieldArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
      }

      void FieldArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_0640e6acf969ed28]);
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
      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, value),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, increment, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_FieldArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary$Entry, t_FieldArrayDictionary$Entry, FieldArrayDictionary$Entry);
      PyObject *t_FieldArrayDictionary$Entry::wrap_Object(const FieldArrayDictionary$Entry& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary$Entry::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary$Entry), &PY_TYPE_DEF(FieldArrayDictionary$Entry), module, "FieldArrayDictionary$Entry", 0);
      }

      void t_FieldArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "class_", make_descriptor(FieldArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "wrapfn_", make_descriptor(t_FieldArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary$Entry::wrap_Object(FieldArrayDictionary$Entry(((t_FieldArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "DK", FieldArrayDictionary$Entry::initializeClass, &a0, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldArrayDictionary$Entry::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableFieldTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableFieldTimeStampedCache::mids$ = NULL;
      bool ImmutableFieldTimeStampedCache::live$ = false;

      jclass ImmutableFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7eb5c0f6d06d97ea] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_9f9530342ec23b16] = env->getStaticMethodID(cls, "emptyCache", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getAll_0d9551367f7ecdef] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_d840ecaffb3bbf7f] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_d840ecaffb3bbf7f] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_d2b16151ed8cc73c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_412668abc8d889e9] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableFieldTimeStampedCache::ImmutableFieldTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7eb5c0f6d06d97ea, a0, a1.this$)) {}

      ImmutableFieldTimeStampedCache ImmutableFieldTimeStampedCache::emptyCache(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableFieldTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_9f9530342ec23b16], a0.this$));
      }

      ::java::util::List ImmutableFieldTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_0d9551367f7ecdef]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_d840ecaffb3bbf7f]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_d840ecaffb3bbf7f]));
      }

      ::java::util::stream::Stream ImmutableFieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_d2b16151ed8cc73c], a0.this$));
      }

      jint ImmutableFieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_412668abc8d889e9]);
      }

      ::java::lang::String ImmutableFieldTimeStampedCache::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, emptyCache, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableFieldTimeStampedCache, t_ImmutableFieldTimeStampedCache, ImmutableFieldTimeStampedCache);
      PyObject *t_ImmutableFieldTimeStampedCache::wrap_Object(const ImmutableFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_ImmutableFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_ImmutableFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableFieldTimeStampedCache), &PY_TYPE_DEF(ImmutableFieldTimeStampedCache), module, "ImmutableFieldTimeStampedCache", 0);
      }

      void t_ImmutableFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "class_", make_descriptor(ImmutableFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableFieldTimeStampedCache::wrap_Object(ImmutableFieldTimeStampedCache(((t_ImmutableFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableFieldTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableFieldTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ImmutableFieldTimeStampedCache result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::ImmutableFieldTimeStampedCache::emptyCache(a0));
          return t_ImmutableFieldTimeStampedCache::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "emptyCache", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableFieldTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonModelObserver.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonModelObserver::class$ = NULL;
        jmethodID *PythonModelObserver::mids$ = NULL;
        bool PythonModelObserver::live$ = false;

        jclass PythonModelObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonModelObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_modelCalled_b94f4715223105a5] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonModelObserver::PythonModelObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonModelObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonModelObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonModelObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonModelObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonModelObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonModelObserver_init_(t_PythonModelObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonModelObserver_finalize(t_PythonModelObserver *self);
        static PyObject *t_PythonModelObserver_pythonExtension(t_PythonModelObserver *self, PyObject *args);
        static void JNICALL t_PythonModelObserver_modelCalled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonModelObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonModelObserver_get__self(t_PythonModelObserver *self, void *data);
        static PyGetSetDef t_PythonModelObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonModelObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonModelObserver__methods_[] = {
          DECLARE_METHOD(t_PythonModelObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonModelObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonModelObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonModelObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonModelObserver)[] = {
          { Py_tp_methods, t_PythonModelObserver__methods_ },
          { Py_tp_init, (void *) t_PythonModelObserver_init_ },
          { Py_tp_getset, t_PythonModelObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonModelObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonModelObserver, t_PythonModelObserver, PythonModelObserver);

        void t_PythonModelObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonModelObserver), &PY_TYPE_DEF(PythonModelObserver), module, "PythonModelObserver", 1);
        }

        void t_PythonModelObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "class_", make_descriptor(PythonModelObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "wrapfn_", make_descriptor(t_PythonModelObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonModelObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V", (void *) t_PythonModelObserver_modelCalled0 },
            { "pythonDecRef", "()V", (void *) t_PythonModelObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonModelObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonModelObserver::initializeClass, 1)))
            return NULL;
          return t_PythonModelObserver::wrap_Object(PythonModelObserver(((t_PythonModelObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonModelObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonModelObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonModelObserver_init_(t_PythonModelObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonModelObserver object((jobject) NULL);

          INT_CALL(object = PythonModelObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonModelObserver_finalize(t_PythonModelObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonModelObserver_pythonExtension(t_PythonModelObserver *self, PyObject *args)
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

        static void JNICALL t_PythonModelObserver_modelCalled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::orbits::t_Orbit::wrap_jobject);
          PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
          PyObject *result = PyObject_CallMethod(obj, "modelCalled", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonModelObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonModelObserver_get__self(t_PythonModelObserver *self, void *data)
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
#include "org/hipparchus/analysis/function/Atan2.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan2::class$ = NULL;
        jmethodID *Atan2::mids$ = NULL;
        bool Atan2::live$ = false;

        jclass Atan2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan2::Atan2() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Atan2::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
      namespace function {
        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args);

        static PyMethodDef t_Atan2__methods_[] = {
          DECLARE_METHOD(t_Atan2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan2)[] = {
          { Py_tp_methods, t_Atan2__methods_ },
          { Py_tp_init, (void *) t_Atan2_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan2)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan2, t_Atan2, Atan2);

        void t_Atan2::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan2), &PY_TYPE_DEF(Atan2), module, "Atan2", 0);
        }

        void t_Atan2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "class_", make_descriptor(Atan2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "wrapfn_", make_descriptor(t_Atan2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan2::initializeClass, 1)))
            return NULL;
          return t_Atan2::wrap_Object(Atan2(((t_Atan2 *) arg)->object.this$));
        }
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds)
        {
          Atan2 object((jobject) NULL);

          INT_CALL(object = Atan2());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args)
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
#include "org/orekit/propagation/events/FieldElevationExtremumDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationExtremumDetector::class$ = NULL;
        jmethodID *FieldElevationExtremumDetector::mids$ = NULL;
        bool FieldElevationExtremumDetector::live$ = false;

        jclass FieldElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5ad0e9bb8a1deb62] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_d8af0e993415b2eb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevation_de1c2d709eb2829c] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTopocentricFrame_2bb3e750d93d59cc] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_8fca1fa280b8f8ca] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5ad0e9bb8a1deb62, a0.this$, a1.this$)) {}

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d8af0e993415b2eb, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::getElevation(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_2bb3e750d93d59cc]));
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
        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args);
        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self);
        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data);
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_FieldElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationExtremumDetector)[] = {
          { Py_tp_methods, t_FieldElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationExtremumDetector_init_ },
          { Py_tp_getset, t_FieldElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationExtremumDetector, t_FieldElevationExtremumDetector, FieldElevationExtremumDetector);
        PyObject *t_FieldElevationExtremumDetector::wrap_Object(const FieldElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationExtremumDetector), &PY_TYPE_DEF(FieldElevationExtremumDetector), module, "FieldElevationExtremumDetector", 0);
        }

        void t_FieldElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "class_", make_descriptor(FieldElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "wrapfn_", make_descriptor(t_FieldElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationExtremumDetector::wrap_Object(FieldElevationExtremumDetector(((t_FieldElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1));
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
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
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
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBeta_2268d18be49a6087] = env->getMethodID(cls, "nextBeta", "(DD)D");
          mids$[mid_nextDeviate_769ab1e031b83fa6] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/IntegerDistribution;)I");
          mids$[mid_nextDeviate_e2283b5af8ea84db] = env->getMethodID(cls, "nextDeviate", "(Lorg/hipparchus/distribution/RealDistribution;)D");
          mids$[mid_nextDeviates_3885143c3870d976] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/IntegerDistribution;I)[I");
          mids$[mid_nextDeviates_266304a22b47de3b] = env->getMethodID(cls, "nextDeviates", "(Lorg/hipparchus/distribution/RealDistribution;I)[D");
          mids$[mid_nextExponential_7e960cd6eee376d8] = env->getMethodID(cls, "nextExponential", "(D)D");
          mids$[mid_nextGamma_2268d18be49a6087] = env->getMethodID(cls, "nextGamma", "(DD)D");
          mids$[mid_nextHexString_0f10d4a5e06f61c0] = env->getMethodID(cls, "nextHexString", "(I)Ljava/lang/String;");
          mids$[mid_nextInt_5625cf3db98dadc1] = env->getMethodID(cls, "nextInt", "(II)I");
          mids$[mid_nextLogNormal_2268d18be49a6087] = env->getMethodID(cls, "nextLogNormal", "(DD)D");
          mids$[mid_nextLong_c18ab8eab0c49f84] = env->getMethodID(cls, "nextLong", "(JJ)J");
          mids$[mid_nextNormal_2268d18be49a6087] = env->getMethodID(cls, "nextNormal", "(DD)D");
          mids$[mid_nextPermutation_e2b10810209e9407] = env->getMethodID(cls, "nextPermutation", "(II)[I");
          mids$[mid_nextPoisson_abbeb9db7144ca23] = env->getMethodID(cls, "nextPoisson", "(D)I");
          mids$[mid_nextSample_07b003307208ca7c] = env->getMethodID(cls, "nextSample", "([DI)[D");
          mids$[mid_nextSample_e1c657623dd8ba44] = env->getMethodID(cls, "nextSample", "(Ljava/util/Collection;I)[Ljava/lang/Object;");
          mids$[mid_nextSampleWithReplacement_d36a547e4410f3b1] = env->getMethodID(cls, "nextSampleWithReplacement", "(I[D)[I");
          mids$[mid_nextUniform_2268d18be49a6087] = env->getMethodID(cls, "nextUniform", "(DD)D");
          mids$[mid_nextZipf_36a7cf95cc3d8465] = env->getMethodID(cls, "nextZipf", "(ID)I");
          mids$[mid_of_9bdc5c0c9ae623bb] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/random/RandomDataGenerator;");
          mids$[mid_delegate_94b7a5da78ee3cfb] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomDataGenerator::RandomDataGenerator() : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      RandomDataGenerator::RandomDataGenerator(jlong a0) : ::org::hipparchus::random::ForwardingRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jdouble RandomDataGenerator::nextBeta(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextBeta_2268d18be49a6087], a0, a1);
      }

      jint RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::IntegerDistribution & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextDeviate_769ab1e031b83fa6], a0.this$);
      }

      jdouble RandomDataGenerator::nextDeviate(const ::org::hipparchus::distribution::RealDistribution & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDeviate_e2283b5af8ea84db], a0.this$);
      }

      JArray< jint > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::IntegerDistribution & a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextDeviates_3885143c3870d976], a0.this$, a1));
      }

      JArray< jdouble > RandomDataGenerator::nextDeviates(const ::org::hipparchus::distribution::RealDistribution & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextDeviates_266304a22b47de3b], a0.this$, a1));
      }

      jdouble RandomDataGenerator::nextExponential(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextExponential_7e960cd6eee376d8], a0);
      }

      jdouble RandomDataGenerator::nextGamma(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGamma_2268d18be49a6087], a0, a1);
      }

      ::java::lang::String RandomDataGenerator::nextHexString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_nextHexString_0f10d4a5e06f61c0], a0));
      }

      jint RandomDataGenerator::nextInt(jint a0, jint a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_5625cf3db98dadc1], a0, a1);
      }

      jdouble RandomDataGenerator::nextLogNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextLogNormal_2268d18be49a6087], a0, a1);
      }

      jlong RandomDataGenerator::nextLong(jlong a0, jlong a1) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_c18ab8eab0c49f84], a0, a1);
      }

      jdouble RandomDataGenerator::nextNormal(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormal_2268d18be49a6087], a0, a1);
      }

      JArray< jint > RandomDataGenerator::nextPermutation(jint a0, jint a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextPermutation_e2b10810209e9407], a0, a1));
      }

      jint RandomDataGenerator::nextPoisson(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextPoisson_abbeb9db7144ca23], a0);
      }

      JArray< jdouble > RandomDataGenerator::nextSample(const JArray< jdouble > & a0, jint a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextSample_07b003307208ca7c], a0.this$, a1));
      }

      JArray< ::java::lang::Object > RandomDataGenerator::nextSample(const ::java::util::Collection & a0, jint a1) const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_nextSample_e1c657623dd8ba44], a0.this$, a1));
      }

      JArray< jint > RandomDataGenerator::nextSampleWithReplacement(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_nextSampleWithReplacement_d36a547e4410f3b1], a0, a1.this$));
      }

      jdouble RandomDataGenerator::nextUniform(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextUniform_2268d18be49a6087], a0, a1);
      }

      jint RandomDataGenerator::nextZipf(jint a0, jdouble a1) const
      {
        return env->callIntMethod(this$, mids$[mid_nextZipf_36a7cf95cc3d8465], a0, a1);
      }

      RandomDataGenerator RandomDataGenerator::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RandomDataGenerator(env->callStaticObjectMethod(cls, mids$[mid_of_9bdc5c0c9ae623bb], a0.this$));
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
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphericCorrectionType::class$ = NULL;
          jmethodID *IonosphericCorrectionType::mids$ = NULL;
          bool IonosphericCorrectionType::live$ = false;
          IonosphericCorrectionType *IonosphericCorrectionType::BDS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GAL = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GPS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::IRN = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::QZS = NULL;

          jclass IonosphericCorrectionType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphericCorrectionType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_34f3c2211724e34d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_values_e461afe201e53b10] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GAL = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GPS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              IRN = new IonosphericCorrectionType(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              QZS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphericCorrectionType IonosphericCorrectionType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IonosphericCorrectionType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_34f3c2211724e34d], a0.this$));
          }

          JArray< IonosphericCorrectionType > IonosphericCorrectionType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IonosphericCorrectionType >(env->callStaticObjectMethod(cls, mids$[mid_values_e461afe201e53b10]));
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
          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type);
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data);
          static PyGetSetDef t_IonosphericCorrectionType__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphericCorrectionType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphericCorrectionType__methods_[] = {
            DECLARE_METHOD(t_IonosphericCorrectionType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IonosphericCorrectionType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericCorrectionType)[] = {
            { Py_tp_methods, t_IonosphericCorrectionType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IonosphericCorrectionType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericCorrectionType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IonosphericCorrectionType, t_IonosphericCorrectionType, IonosphericCorrectionType);
          PyObject *t_IonosphericCorrectionType::wrap_Object(const IonosphericCorrectionType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IonosphericCorrectionType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IonosphericCorrectionType::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericCorrectionType), &PY_TYPE_DEF(IonosphericCorrectionType), module, "IonosphericCorrectionType", 0);
          }

          void t_IonosphericCorrectionType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "class_", make_descriptor(IonosphericCorrectionType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "wrapfn_", make_descriptor(t_IonosphericCorrectionType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphericCorrectionType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "BDS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GAL", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GPS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "IRN", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "QZS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::QZS)));
          }

          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericCorrectionType::initializeClass, 1)))
              return NULL;
            return t_IonosphericCorrectionType::wrap_Object(IonosphericCorrectionType(((t_IonosphericCorrectionType *) arg)->object.this$));
          }
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericCorrectionType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IonosphericCorrectionType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::valueOf(a0));
              return t_IonosphericCorrectionType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type)
          {
            JArray< IonosphericCorrectionType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::values());
            return JArray<jobject>(result.this$).wrap(t_IonosphericCorrectionType::wrap_jobject);
          }
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data)
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
#include "org/orekit/estimation/sequential/PythonKalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanObserver::class$ = NULL;
        jmethodID *PythonKalmanObserver::mids$ = NULL;
        bool PythonKalmanObserver::live$ = false;

        jclass PythonKalmanObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_9ef1e6c96a3a3980] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanObserver::PythonKalmanObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonKalmanObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonKalmanObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonKalmanObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self);
        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args);
        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data);
        static PyGetSetDef t_PythonKalmanObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanObserver__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanObserver)[] = {
          { Py_tp_methods, t_PythonKalmanObserver__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanObserver_init_ },
          { Py_tp_getset, t_PythonKalmanObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanObserver, t_PythonKalmanObserver, PythonKalmanObserver);

        void t_PythonKalmanObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanObserver), &PY_TYPE_DEF(PythonKalmanObserver), module, "PythonKalmanObserver", 1);
        }

        void t_PythonKalmanObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "class_", make_descriptor(PythonKalmanObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "wrapfn_", make_descriptor(t_PythonKalmanObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V", (void *) t_PythonKalmanObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanObserver::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanObserver::wrap_Object(PythonKalmanObserver(((t_PythonKalmanObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanObserver object((jobject) NULL);

          INT_CALL(object = PythonKalmanObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args)
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

        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::sequential::t_KalmanEstimation::wrap_Object(::org::orekit::estimation::sequential::KalmanEstimation(a0));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_e73216ff932a6024] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_e558b3282a19bf85] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator;");
            mids$[mid_decomposer_ebeda718e04a516d] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_771662fca8212a35] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_5eef35551a89d34b] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder::SemiAnalyticalUnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_e73216ff932a6024], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator SemiAnalyticalUnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_e558b3282a19bf85]));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_ebeda718e04a516d], a0.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_771662fca8212a35], a0.this$, a1.this$));
        }

        SemiAnalyticalUnscentedKalmanEstimatorBuilder SemiAnalyticalUnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return SemiAnalyticalUnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_5eef35551a89d34b], a0.this$));
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder, t_SemiAnalyticalUnscentedKalmanEstimatorBuilder, SemiAnalyticalUnscentedKalmanEstimatorBuilder);

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimatorBuilder), module, "SemiAnalyticalUnscentedKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalUnscentedKalmanEstimatorBuilder(((t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_init_(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalUnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalUnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_build(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_SemiAnalyticalUnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          SemiAnalyticalUnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialsUtils.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialsUtils::class$ = NULL;
        jmethodID *PolynomialsUtils::mids$ = NULL;
        bool PolynomialsUtils::live$ = false;

        jclass PolynomialsUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialsUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createChebyshevPolynomial_2222e2447cbba34e] = env->getStaticMethodID(cls, "createChebyshevPolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createHermitePolynomial_2222e2447cbba34e] = env->getStaticMethodID(cls, "createHermitePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createJacobiPolynomial_9aa75c0d42a2437d] = env->getStaticMethodID(cls, "createJacobiPolynomial", "(III)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLaguerrePolynomial_2222e2447cbba34e] = env->getStaticMethodID(cls, "createLaguerrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLegendrePolynomial_2222e2447cbba34e] = env->getStaticMethodID(cls, "createLegendrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_shift_59ea33beffed37b5] = env->getStaticMethodID(cls, "shift", "([DD)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createChebyshevPolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createChebyshevPolynomial_2222e2447cbba34e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createHermitePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createHermitePolynomial_2222e2447cbba34e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createJacobiPolynomial(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createJacobiPolynomial_9aa75c0d42a2437d], a0, a1, a2));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLaguerrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLaguerrePolynomial_2222e2447cbba34e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLegendrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLegendrePolynomial_2222e2447cbba34e], a0));
        }

        JArray< jdouble > PolynomialsUtils::shift(const JArray< jdouble > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_shift_59ea33beffed37b5], a0.this$, a1));
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
      namespace polynomials {
        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_PolynomialsUtils__methods_[] = {
          DECLARE_METHOD(t_PolynomialsUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createChebyshevPolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createHermitePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createJacobiPolynomial, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLaguerrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLegendrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, shift, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialsUtils)[] = {
          { Py_tp_methods, t_PolynomialsUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialsUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialsUtils, t_PolynomialsUtils, PolynomialsUtils);

        void t_PolynomialsUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialsUtils), &PY_TYPE_DEF(PolynomialsUtils), module, "PolynomialsUtils", 0);
        }

        void t_PolynomialsUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "class_", make_descriptor(PolynomialsUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "wrapfn_", make_descriptor(t_PolynomialsUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialsUtils::initializeClass, 1)))
            return NULL;
          return t_PolynomialsUtils::wrap_Object(PolynomialsUtils(((t_PolynomialsUtils *) arg)->object.this$));
        }
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialsUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createChebyshevPolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createChebyshevPolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createHermitePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createHermitePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createJacobiPolynomial(a0, a1, a2));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createJacobiPolynomial", args);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLaguerrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLaguerrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLegendrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLegendrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::shift(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "shift", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CartesianOrbit::class$ = NULL;
      jmethodID *CartesianOrbit::mids$ = NULL;
      bool CartesianOrbit::live$ = false;

      jclass CartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a9af82a1647a21f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_7c6479063e790949] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_5005ce863a640a87] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_9dda16418cc4ed80] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_557b8123390d8d0c] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_557b8123390d8d0c] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_557b8123390d8d0c] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_557b8123390d8d0c] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_557b8123390d8d0c] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_557b8123390d8d0c] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_557b8123390d8d0c] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_557b8123390d8d0c] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_557b8123390d8d0c] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_557b8123390d8d0c] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_557b8123390d8d0c] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_557b8123390d8d0c] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_89b302893bdbe1f1] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_1601bd4a365a8f98] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_f88961cca75a2c0a] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianOrbit::CartesianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a9af82a1647a21f3, a0.this$)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7c6479063e790949, a0.this$, a1.this$, a2)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5005ce863a640a87, a0.this$, a1.this$, a2.this$, a3)) {}

      void CartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_9dda16418cc4ed80], a0.this$, a1, a2.this$);
      }

      jdouble CartesianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_557b8123390d8d0c]);
      }

      jdouble CartesianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_557b8123390d8d0c]);
      }

      ::org::orekit::orbits::OrbitType CartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean CartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_89b302893bdbe1f1]);
      }

      CartesianOrbit CartesianOrbit::shiftedBy(jdouble a0) const
      {
        return CartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_1601bd4a365a8f98], a0));
      }

      ::java::lang::String CartesianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data);
      static PyGetSetDef t_CartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianOrbit, a),
        DECLARE_GET_FIELD(t_CartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, e),
        DECLARE_GET_FIELD(t_CartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hx),
        DECLARE_GET_FIELD(t_CartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hy),
        DECLARE_GET_FIELD(t_CartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, i),
        DECLARE_GET_FIELD(t_CartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lE),
        DECLARE_GET_FIELD(t_CartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lM),
        DECLARE_GET_FIELD(t_CartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lv),
        DECLARE_GET_FIELD(t_CartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_CartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianOrbit)[] = {
        { Py_tp_methods, t_CartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_CartesianOrbit_init_ },
        { Py_tp_getset, t_CartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CartesianOrbit, t_CartesianOrbit, CartesianOrbit);

      void t_CartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianOrbit), &PY_TYPE_DEF(CartesianOrbit), module, "CartesianOrbit", 0);
      }

      void t_CartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "class_", make_descriptor(CartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "wrapfn_", make_descriptor(t_CartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_CartesianOrbit::wrap_Object(CartesianOrbit(((t_CartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble a0;
        CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Scheduler::class$ = NULL;
          jmethodID *Scheduler::mids$ = NULL;
          bool Scheduler::live$ = false;

          jclass Scheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Scheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_efa69a4463f8239b] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_73d2d5822258be13] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet Scheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_efa69a4463f8239b], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder Scheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_73d2d5822258be13]));
          }

          void Scheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d5db9a5f2035671b], a0.this$, a1.this$);
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
          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg);
          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self);
          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data);
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data);
          static PyGetSetDef t_Scheduler__fields_[] = {
            DECLARE_GET_FIELD(t_Scheduler, builder),
            DECLARE_GET_FIELD(t_Scheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Scheduler__methods_[] = {
            DECLARE_METHOD(t_Scheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_Scheduler, generate, METH_O),
            DECLARE_METHOD(t_Scheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_Scheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Scheduler)[] = {
            { Py_tp_methods, t_Scheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Scheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Scheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Scheduler, t_Scheduler, Scheduler);
          PyObject *t_Scheduler::wrap_Object(const Scheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Scheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Scheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(Scheduler), &PY_TYPE_DEF(Scheduler), module, "Scheduler", 0);
          }

          void t_Scheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "class_", make_descriptor(Scheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "wrapfn_", make_descriptor(t_Scheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Scheduler::initializeClass, 1)))
              return NULL;
            return t_Scheduler::wrap_Object(Scheduler(((t_Scheduler *) arg)->object.this$));
          }
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Scheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args)
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
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *OrbitCorrection::class$ = NULL;
            jmethodID *OrbitCorrection::mids$ = NULL;
            bool OrbitCorrection::live$ = false;

            jclass OrbitCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/OrbitCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3869a36d565fbc00] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
                mids$[mid_getDeltaOrbitAlongTrack_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaOrbitAlongTrack", "()D");
                mids$[mid_getDeltaOrbitCrossTrack_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaOrbitCrossTrack", "()D");
                mids$[mid_getDeltaOrbitRadial_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaOrbitRadial", "()D");
                mids$[mid_getDotOrbitDeltaAlongTrack_557b8123390d8d0c] = env->getMethodID(cls, "getDotOrbitDeltaAlongTrack", "()D");
                mids$[mid_getDotOrbitDeltaCrossTrack_557b8123390d8d0c] = env->getMethodID(cls, "getDotOrbitDeltaCrossTrack", "()D");
                mids$[mid_getDotOrbitDeltaRadial_557b8123390d8d0c] = env->getMethodID(cls, "getDotOrbitDeltaRadial", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OrbitCorrection::OrbitCorrection(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3869a36d565fbc00, a0, a1, a2, a3, a4, a5)) {}

            jdouble OrbitCorrection::getDeltaOrbitAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitAlongTrack_557b8123390d8d0c]);
            }

            jdouble OrbitCorrection::getDeltaOrbitCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitCrossTrack_557b8123390d8d0c]);
            }

            jdouble OrbitCorrection::getDeltaOrbitRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitRadial_557b8123390d8d0c]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaAlongTrack_557b8123390d8d0c]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaCrossTrack_557b8123390d8d0c]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaRadial_557b8123390d8d0c]);
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
          namespace common {
            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data);
            static PyGetSetDef t_OrbitCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitRadial),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaRadial),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OrbitCorrection__methods_[] = {
              DECLARE_METHOD(t_OrbitCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitRadial, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaRadial, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OrbitCorrection)[] = {
              { Py_tp_methods, t_OrbitCorrection__methods_ },
              { Py_tp_init, (void *) t_OrbitCorrection_init_ },
              { Py_tp_getset, t_OrbitCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OrbitCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(OrbitCorrection, t_OrbitCorrection, OrbitCorrection);

            void t_OrbitCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(OrbitCorrection), &PY_TYPE_DEF(OrbitCorrection), module, "OrbitCorrection", 0);
            }

            void t_OrbitCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "class_", make_descriptor(OrbitCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "wrapfn_", make_descriptor(t_OrbitCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OrbitCorrection::initializeClass, 1)))
                return NULL;
              return t_OrbitCorrection::wrap_Object(OrbitCorrection(((t_OrbitCorrection *) arg)->object.this$));
            }
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OrbitCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              OrbitCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = OrbitCorrection(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaRadial());
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
#include "org/orekit/propagation/events/PythonEventDetectorsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetectorsProvider::class$ = NULL;
        jmethodID *PythonEventDetectorsProvider::mids$ = NULL;
        bool PythonEventDetectorsProvider::live$ = false;

        jclass PythonEventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetectorsProvider::PythonEventDetectorsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEventDetectorsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEventDetectorsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEventDetectorsProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self);
        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data);
        static PyGetSetDef t_PythonEventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetectorsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetectorsProvider)[] = {
          { Py_tp_methods, t_PythonEventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetectorsProvider_init_ },
          { Py_tp_getset, t_PythonEventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetectorsProvider, t_PythonEventDetectorsProvider, PythonEventDetectorsProvider);

        void t_PythonEventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetectorsProvider), &PY_TYPE_DEF(PythonEventDetectorsProvider), module, "PythonEventDetectorsProvider", 1);
        }

        void t_PythonEventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "class_", make_descriptor(PythonEventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "wrapfn_", make_descriptor(t_PythonEventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetectorsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getEventDetectors0 },
            { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getFieldEventDetectors1 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetectorsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetectorsProvider::wrap_Object(PythonEventDetectorsProvider(((t_PythonEventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetectorsProvider object((jobject) NULL);

          INT_CALL(object = PythonEventDetectorsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
          {
            throwTypeError("getEventDetectors", result);
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
          {
            throwTypeError("getFieldEventDetectors", result);
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

        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data)
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
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
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
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_copy_9ffc117cc13b2825] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getEstimationType_4612cef7d7be3067] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_e3d4c2054ef00f3b] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_771b1218ed87a53c] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_withEstimationType_a0066a70c668abd3] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withKthSelector_e61e10a52383847b] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withNaNStrategy_2c605bc82addaab6] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Median;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Median::Median() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          Median Median::copy() const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_copy_9ffc117cc13b2825]));
          }

          jdouble Median::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Median::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_4612cef7d7be3067]));
          }

          ::org::hipparchus::util::KthSelector Median::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_e3d4c2054ef00f3b]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Median::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_771b1218ed87a53c]));
          }

          Median Median::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withEstimationType_a0066a70c668abd3], a0.this$));
          }

          Median Median::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withKthSelector_e61e10a52383847b], a0.this$));
          }

          Median Median::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_2c605bc82addaab6], a0.this$));
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
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/util/Locale.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalStateException::class$ = NULL;
      jmethodID *OrekitIllegalStateException::mids$ = NULL;
      bool OrekitIllegalStateException::live$ = false;

      jclass OrekitIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalStateException::OrekitIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalStateException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalStateException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalStateException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
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
      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data);
      static PyGetSetDef t_OrekitIllegalStateException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalStateException)[] = {
        { Py_tp_methods, t_OrekitIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalStateException_init_ },
        { Py_tp_getset, t_OrekitIllegalStateException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalStateException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalStateException, t_OrekitIllegalStateException, OrekitIllegalStateException);

      void t_OrekitIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalStateException), &PY_TYPE_DEF(OrekitIllegalStateException), module, "OrekitIllegalStateException", 0);
      }

      void t_OrekitIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "class_", make_descriptor(OrekitIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "wrapfn_", make_descriptor(t_OrekitIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalStateException::wrap_Object(OrekitIllegalStateException(((t_OrekitIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalStateException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalStateException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BrentSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BrentSolver::class$ = NULL;
        jmethodID *BrentSolver::mids$ = NULL;
        bool BrentSolver::live$ = false;

        jclass BrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentSolver::BrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        BrentSolver::BrentSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}
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
        static PyObject *t_BrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentSolver_of_(t_BrentSolver *self, PyObject *args);
        static int t_BrentSolver_init_(t_BrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentSolver_get__parameters_(t_BrentSolver *self, void *data);
        static PyGetSetDef t_BrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentSolver__methods_[] = {
          DECLARE_METHOD(t_BrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentSolver)[] = {
          { Py_tp_methods, t_BrentSolver__methods_ },
          { Py_tp_init, (void *) t_BrentSolver_init_ },
          { Py_tp_getset, t_BrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BrentSolver, t_BrentSolver, BrentSolver);
        PyObject *t_BrentSolver::wrap_Object(const BrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentSolver *self = (t_BrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentSolver *self = (t_BrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentSolver), &PY_TYPE_DEF(BrentSolver), module, "BrentSolver", 0);
        }

        void t_BrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "class_", make_descriptor(BrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "wrapfn_", make_descriptor(t_BrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentSolver::initializeClass, 1)))
            return NULL;
          return t_BrentSolver::wrap_Object(BrentSolver(((t_BrentSolver *) arg)->object.this$));
        }
        static PyObject *t_BrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentSolver_of_(t_BrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentSolver_init_(t_BrentSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BrentSolver object((jobject) NULL);

              INT_CALL(object = BrentSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BrentSolver(a0));
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
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentSolver(a0, a1));
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
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BrentSolver(a0, a1, a2));
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
        static PyObject *t_BrentSolver_get__parameters_(t_BrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/ParametricAcceleration.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_fdf46db75c3e782a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_b106f18f1129bdba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdf46db75c3e782a, a0.this$, a1, a2.this$)) {}

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b106f18f1129bdba, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        jboolean ParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::stream::Stream ParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
        }

        ::java::util::stream::Stream ParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
        }

        ::java::util::List ParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        void ParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader$LineParameters::class$ = NULL;
            jmethodID *DtcDataLoader$LineParameters::mids$ = NULL;
            bool DtcDataLoader$LineParameters::live$ = false;

            jclass DtcDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f22bef3f7be90029] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getDSTDTC_557b8123390d8d0c] = env->getMethodID(cls, "getDSTDTC", "()D");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader$LineParameters::DtcDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f22bef3f7be90029, a0.this$, a1)) {}

            jdouble DtcDataLoader$LineParameters::getDSTDTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_557b8123390d8d0c]);
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
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
            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data);
            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_DtcDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, dSTDTC),
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, date),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDSTDTC, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_DtcDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_DtcDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader$LineParameters, t_DtcDataLoader$LineParameters, DtcDataLoader$LineParameters);

            void t_DtcDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader$LineParameters), &PY_TYPE_DEF(DtcDataLoader$LineParameters), module, "DtcDataLoader$LineParameters", 0);
            }

            void t_DtcDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "class_", make_descriptor(DtcDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "wrapfn_", make_descriptor(t_DtcDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader$LineParameters::wrap_Object(DtcDataLoader$LineParameters(((t_DtcDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              DtcDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DtcDataLoader$LineParameters(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
