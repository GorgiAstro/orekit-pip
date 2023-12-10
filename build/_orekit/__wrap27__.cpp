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
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet::class$ = NULL;
          jmethodID *ArcsSet::mids$ = NULL;
          bool ArcsSet::live$ = false;

          jclass ArcsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_748cd2c51a955d77] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_1f4d55383238fbb5] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_2afa36052df4765d] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_857f0d64f3326df3] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_e9baadaaf6c2e7eb] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_split_04f55787d5300b9c] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/spherical/oned/Arc;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet$Split;");
              mids$[mid_computeGeometricalProperties_0fa09c18fee449d5] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet::ArcsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ArcsSet::ArcsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_748cd2c51a955d77, a0.this$, a1)) {}

          ArcsSet::ArcsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1f4d55383238fbb5, a0.this$, a1)) {}

          ArcsSet::ArcsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::java::util::List ArcsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_2afa36052df4765d]));
          }

          ArcsSet ArcsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return ArcsSet(env->callObjectMethod(this$, mids$[mid_buildNew_857f0d64f3326df3], a0.this$));
          }

          ::java::util::Iterator ArcsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection ArcsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_e9baadaaf6c2e7eb], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split ArcsSet::split(const ::org::hipparchus::geometry::spherical::oned::Arc & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split(env->callObjectMethod(this$, mids$[mid_split_04f55787d5300b9c], a0.this$));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_ArcsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet_of_(t_ArcsSet *self, PyObject *args);
          static int t_ArcsSet_init_(t_ArcsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet_asList(t_ArcsSet *self);
          static PyObject *t_ArcsSet_buildNew(t_ArcsSet *self, PyObject *args);
          static PyObject *t_ArcsSet_iterator(t_ArcsSet *self);
          static PyObject *t_ArcsSet_projectToBoundary(t_ArcsSet *self, PyObject *args);
          static PyObject *t_ArcsSet_split(t_ArcsSet *self, PyObject *arg);
          static PyObject *t_ArcsSet_get__parameters_(t_ArcsSet *self, void *data);
          static PyGetSetDef t_ArcsSet__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet__methods_[] = {
            DECLARE_METHOD(t_ArcsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet, projectToBoundary, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, split, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet)[] = {
            { Py_tp_methods, t_ArcsSet__methods_ },
            { Py_tp_init, (void *) t_ArcsSet_init_ },
            { Py_tp_getset, t_ArcsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_ArcsSet *)) get_generic_iterator< t_ArcsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(ArcsSet, t_ArcsSet, ArcsSet);
          PyObject *t_ArcsSet::wrap_Object(const ArcsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet *self = (t_ArcsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet *self = (t_ArcsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet), &PY_TYPE_DEF(ArcsSet), module, "ArcsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "InconsistentStateAt2PiWrapping", make_descriptor(&PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "Split", make_descriptor(&PY_TYPE_DEF(ArcsSet$Split)));
          }

          void t_ArcsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "class_", make_descriptor(ArcsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "wrapfn_", make_descriptor(t_ArcsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet::initializeClass, 1)))
              return NULL;
            return t_ArcsSet::wrap_Object(ArcsSet(((t_ArcsSet *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet_of_(t_ArcsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet_init_(t_ArcsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = ArcsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = ArcsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = ArcsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = ArcsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_ArcsSet_asList(t_ArcsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Arc));
          }

          static PyObject *t_ArcsSet_buildNew(t_ArcsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            ArcsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_ArcsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ArcsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_ArcsSet_iterator(t_ArcsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_ArcsSet_projectToBoundary(t_ArcsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(ArcsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }

          static PyObject *t_ArcsSet_split(t_ArcsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::spherical::oned::Arc a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::spherical::oned::Arc::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet$Split::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "split", arg);
            return NULL;
          }
          static PyObject *t_ArcsSet_get__parameters_(t_ArcsSet *self, void *data)
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
#include "org/orekit/forces/drag/DragForce.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragForce::class$ = NULL;
        jmethodID *DragForce::mids$ = NULL;
        bool DragForce::live$ = false;

        jclass DragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_47c8c3109a8b7c41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAtmosphere_5eed92b432f371c2] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSpacecraft_2df1d9602f270c8d] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DragForce::DragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_47c8c3109a8b7c41, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::orekit::models::earth::atmosphere::Atmosphere DragForce::getAtmosphere() const
        {
          return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_5eed92b432f371c2]));
        }

        ::java::util::List DragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        ::org::orekit::forces::drag::DragSensitive DragForce::getSpacecraft() const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_2df1d9602f270c8d]));
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
      namespace drag {
        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self);
        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self);
        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data);
        static PyGetSetDef t_DragForce__fields_[] = {
          DECLARE_GET_FIELD(t_DragForce, atmosphere),
          DECLARE_GET_FIELD(t_DragForce, parametersDrivers),
          DECLARE_GET_FIELD(t_DragForce, spacecraft),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragForce__methods_[] = {
          DECLARE_METHOD(t_DragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getAtmosphere, METH_NOARGS),
          DECLARE_METHOD(t_DragForce, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getSpacecraft, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragForce)[] = {
          { Py_tp_methods, t_DragForce__methods_ },
          { Py_tp_init, (void *) t_DragForce_init_ },
          { Py_tp_getset, t_DragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(DragForce, t_DragForce, DragForce);

        void t_DragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(DragForce), &PY_TYPE_DEF(DragForce), module, "DragForce", 0);
        }

        void t_DragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "class_", make_descriptor(DragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "wrapfn_", make_descriptor(t_DragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragForce::initializeClass, 1)))
            return NULL;
          return t_DragForce::wrap_Object(DragForce(((t_DragForce *) arg)->object.this$));
        }
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
          DragForce object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DragForce(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args)
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

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
        }

        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self)
        {
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
        }

        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
          OBJ_CALL(value = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data)
        {
          ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemerisSegment::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemerisSegment::mids$ = NULL;
        bool STKEphemerisFile$STKEphemerisSegment::live$ = false;

        jclass STKEphemerisFile$STKEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_59d0f64325b9d6d4] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;)V");
            mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemerisSegment::STKEphemerisFile$STKEphemerisSegment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59d0f64325b9d6d4, a0, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter STKEphemerisFile$STKEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
        }

        ::java::util::List STKEphemerisFile$STKEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_2afa36052df4765d]));
        }

        ::org::orekit::frames::Frame STKEphemerisFile$STKEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        jint STKEphemerisFile$STKEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
        }

        jdouble STKEphemerisFile$STKEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStop() const
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemerisSegment)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemerisSegment_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemerisSegment, t_STKEphemerisFile$STKEphemerisSegment, STKEphemerisFile$STKEphemerisSegment);

        void t_STKEphemerisFile$STKEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemerisSegment), &PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment), module, "STKEphemerisFile$STKEphemerisSegment", 0);
        }

        void t_STKEphemerisFile$STKEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "class_", make_descriptor(STKEphemerisFile$STKEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemerisSegment::wrap_Object(STKEphemerisFile$STKEphemerisSegment(((t_STKEphemerisFile$STKEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          STKEphemerisFile$STKEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "DkIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingOemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingOemWriter$SegmentWriter::live$ = false;

              jclass StreamingOemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2788d3ca31ccd8ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter;)V");
                  mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_0ee5c56004643a2e] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_eb5e26882ba2d9b9] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter$SegmentWriter::StreamingOemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2788d3ca31ccd8ef, a0.this$)) {}

              void StreamingOemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_0ee5c56004643a2e], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_0ee5c56004643a2e], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_eb5e26882ba2d9b9], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter$SegmentWriter, t_StreamingOemWriter$SegmentWriter, StreamingOemWriter$SegmentWriter);

              void t_StreamingOemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingOemWriter$SegmentWriter), module, "StreamingOemWriter$SegmentWriter", 0);
              }

              void t_StreamingOemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "class_", make_descriptor(StreamingOemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter$SegmentWriter::wrap_Object(StreamingOemWriter$SegmentWriter(((t_StreamingOemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter a0((jobject) NULL);
                StreamingOemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
                return NULL;
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
#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractKalmanEstimator::class$ = NULL;
        jmethodID *AbstractKalmanEstimator::mids$ = NULL;
        bool AbstractKalmanEstimator::live$ = false;

        jclass AbstractKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentDate_85703d13e302437e] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOrbitalParametersDrivers_8357ebc867dea797] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPropagationParametersDrivers_8357ebc867dea797] = env->getMethodID(cls, "getPropagationParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getKalmanEstimation_e05aaef10b06b09b] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate AbstractKalmanEstimator::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_85703d13e302437e]));
        }

        jint AbstractKalmanEstimator::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_8357ebc867dea797], a0));
        }

        ::org::hipparchus::linear::RealMatrix AbstractKalmanEstimator::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealVector AbstractKalmanEstimator::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getPropagationParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_8357ebc867dea797], a0));
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
        static PyObject *t_AbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_getCurrentDate(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getCurrentMeasurementNumber(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getEstimatedMeasurementsParameters(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getOrbitalParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedState(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getPropagationParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_get__currentDate(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__currentMeasurementNumber(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__estimatedMeasurementsParameters(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedState(t_AbstractKalmanEstimator *self, void *data);
        static PyGetSetDef t_AbstractKalmanEstimator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, currentDate),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, physicalEstimatedState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPropagationParametersDrivers, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanEstimator)[] = {
          { Py_tp_methods, t_AbstractKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanEstimator, t_AbstractKalmanEstimator, AbstractKalmanEstimator);

        void t_AbstractKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanEstimator), &PY_TYPE_DEF(AbstractKalmanEstimator), module, "AbstractKalmanEstimator", 0);
        }

        void t_AbstractKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "class_", make_descriptor(AbstractKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "wrapfn_", make_descriptor(t_AbstractKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanEstimator::wrap_Object(AbstractKalmanEstimator(((t_AbstractKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanEstimator_getCurrentDate(t_AbstractKalmanEstimator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getCurrentMeasurementNumber(t_AbstractKalmanEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractKalmanEstimator_getEstimatedMeasurementsParameters(t_AbstractKalmanEstimator *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getOrbitalParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedState(t_AbstractKalmanEstimator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getPropagationParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagationParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagationParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_AbstractKalmanEstimator_get__currentDate(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__currentMeasurementNumber(t_AbstractKalmanEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__estimatedMeasurementsParameters(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedState(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sinc.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinc::class$ = NULL;
        jmethodID *Sinc::mids$ = NULL;
        bool Sinc::live$ = false;

        jclass Sinc::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinc");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinc::Sinc() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        Sinc::Sinc(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

        jdouble Sinc::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinc::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Sinc_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinc_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinc_init_(t_Sinc *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinc_value(t_Sinc *self, PyObject *args);

        static PyMethodDef t_Sinc__methods_[] = {
          DECLARE_METHOD(t_Sinc, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinc, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinc, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinc)[] = {
          { Py_tp_methods, t_Sinc__methods_ },
          { Py_tp_init, (void *) t_Sinc_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinc)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinc, t_Sinc, Sinc);

        void t_Sinc::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinc), &PY_TYPE_DEF(Sinc), module, "Sinc", 0);
        }

        void t_Sinc::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "class_", make_descriptor(Sinc::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "wrapfn_", make_descriptor(t_Sinc::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinc_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinc::initializeClass, 1)))
            return NULL;
          return t_Sinc::wrap_Object(Sinc(((t_Sinc *) arg)->object.this$));
        }
        static PyObject *t_Sinc_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinc::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinc_init_(t_Sinc *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sinc object((jobject) NULL);

              INT_CALL(object = Sinc());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              Sinc object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = Sinc(a0));
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

        static PyObject *t_Sinc_value(t_Sinc *self, PyObject *args)
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
#include "org/orekit/gnss/metric/parser/PythonMessageType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonMessageType::class$ = NULL;
          jmethodID *PythonMessageType::mids$ = NULL;
          bool PythonMessageType::live$ = false;

          jclass PythonMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_parse_3fb49f3b7c53ed23] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageType::PythonMessageType() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonMessageType::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonMessageType::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonMessageType::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self);
          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args);
          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data);
          static PyGetSetDef t_PythonMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageType, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageType__methods_[] = {
            DECLARE_METHOD(t_PythonMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageType, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageType)[] = {
            { Py_tp_methods, t_PythonMessageType__methods_ },
            { Py_tp_init, (void *) t_PythonMessageType_init_ },
            { Py_tp_getset, t_PythonMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageType, t_PythonMessageType, PythonMessageType);

          void t_PythonMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageType), &PY_TYPE_DEF(PythonMessageType), module, "PythonMessageType", 1);
          }

          void t_PythonMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "class_", make_descriptor(PythonMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "wrapfn_", make_descriptor(t_PythonMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageType::initializeClass);
            JNINativeMethod methods[] = {
              { "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;", (void *) t_PythonMessageType_parse0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageType_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageType::initializeClass, 1)))
              return NULL;
            return t_PythonMessageType::wrap_Object(PythonMessageType(((t_PythonMessageType *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageType object((jobject) NULL);

            INT_CALL(object = PythonMessageType());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args)
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

          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::gnss::metric::messages::ParsedMessage value((jobject) NULL);
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "parse", "Oi", o0, (int) a1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &value))
            {
              throwTypeError("parse", result);
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

          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimator::live$ = false;

        jclass SemiAnalyticalKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_db8c5868b80e02d6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_processMeasurements_3f953d279000cee1] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_3b3c487cb3322691] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_e05aaef10b06b09b] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimator::SemiAnalyticalKalmanEstimator(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a1, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a4) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_db8c5868b80e02d6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_3f953d279000cee1], a0.this$));
        }

        void SemiAnalyticalKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_3b3c487cb3322691], a0.this$);
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
        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimator_init_ },
          { Py_tp_getset, t_SemiAnalyticalKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimator, t_SemiAnalyticalKalmanEstimator, SemiAnalyticalKalmanEstimator);

        void t_SemiAnalyticalKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimator), module, "SemiAnalyticalKalmanEstimator", 0);
        }

        void t_SemiAnalyticalKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "class_", make_descriptor(SemiAnalyticalKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimator::wrap_Object(SemiAnalyticalKalmanEstimator(((t_SemiAnalyticalKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a1((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a4((jobject) NULL);
          SemiAnalyticalKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SemiAnalyticalKalmanEstimator(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
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

        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/EigenDecompositionNonSymmetric.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionNonSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionNonSymmetric::mids$ = NULL;
      bool EigenDecompositionNonSymmetric::live$ = false;
      jdouble EigenDecompositionNonSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionNonSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionNonSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_21a79182f4dd9085] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getD_688b496048ff947b] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getDeterminant_a6784e0b89dedf02] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalue_7ff716ce003a9897] = env->getMethodID(cls, "getEigenvalue", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalues_8a0770025abeda5b] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_819edc89e6437565] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getEpsilon_dff5885c2c873297] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getV_688b496048ff947b] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVInv_688b496048ff947b] = env->getMethodID(cls, "getVInv", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21a79182f4dd9085, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getD() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getD_688b496048ff947b]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getDeterminant() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getDeterminant_a6784e0b89dedf02]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getEigenvalue(jint a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getEigenvalue_7ff716ce003a9897], a0));
      }

      JArray< ::org::hipparchus::complex::Complex > EigenDecompositionNonSymmetric::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_8a0770025abeda5b]));
      }

      ::org::hipparchus::linear::FieldVector EigenDecompositionNonSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_819edc89e6437565], a0));
      }

      jdouble EigenDecompositionNonSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_dff5885c2c873297]);
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getVInv() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVInv_688b496048ff947b]));
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
      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionNonSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, vInv),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionNonSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getVInv, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionNonSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionNonSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionNonSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionNonSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionNonSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionNonSymmetric, t_EigenDecompositionNonSymmetric, EigenDecompositionNonSymmetric);

      void t_EigenDecompositionNonSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionNonSymmetric), &PY_TYPE_DEF(EigenDecompositionNonSymmetric), module, "EigenDecompositionNonSymmetric", 0);
      }

      void t_EigenDecompositionNonSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "class_", make_descriptor(EigenDecompositionNonSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionNonSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionNonSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionNonSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionNonSymmetric::wrap_Object(EigenDecompositionNonSymmetric(((t_EigenDecompositionNonSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0, a1));
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

      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::complex::Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1045::class$ = NULL;
              jmethodID *Rtcm1045::mids$ = NULL;
              bool Rtcm1045::live$ = false;

              jclass Rtcm1045::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e8f957cd9ebd5d46] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045::Rtcm1045(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_e8f957cd9ebd5d46, a0, a1.this$)) {}
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
            namespace ephemeris {
              static PyObject *t_Rtcm1045_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045_of_(t_Rtcm1045 *self, PyObject *args);
              static int t_Rtcm1045_init_(t_Rtcm1045 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1045_get__parameters_(t_Rtcm1045 *self, void *data);
              static PyGetSetDef t_Rtcm1045__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1045, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1045__methods_[] = {
                DECLARE_METHOD(t_Rtcm1045, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1045)[] = {
                { Py_tp_methods, t_Rtcm1045__methods_ },
                { Py_tp_init, (void *) t_Rtcm1045_init_ },
                { Py_tp_getset, t_Rtcm1045__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1045)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1045, t_Rtcm1045, Rtcm1045);
              PyObject *t_Rtcm1045::wrap_Object(const Rtcm1045& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1045::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1045 *self = (t_Rtcm1045 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1045::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1045::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1045 *self = (t_Rtcm1045 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1045::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1045), &PY_TYPE_DEF(Rtcm1045), module, "Rtcm1045", 0);
              }

              void t_Rtcm1045::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "class_", make_descriptor(Rtcm1045::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "wrapfn_", make_descriptor(t_Rtcm1045::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1045_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1045::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1045::wrap_Object(Rtcm1045(((t_Rtcm1045 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1045_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1045::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1045_of_(t_Rtcm1045 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1045_init_(t_Rtcm1045 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data a1((jobject) NULL);
                Rtcm1045 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1045Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1045(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1045Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1045_get__parameters_(t_Rtcm1045 *self, void *data)
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
          mids$[mid_value_4c83cd715e038657] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_4c83cd715e038657], a0.this$));
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
#include "org/orekit/propagation/events/handlers/PythonEventHandler.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonEventHandler::class$ = NULL;
          jmethodID *PythonEventHandler::mids$ = NULL;
          bool PythonEventHandler::live$ = false;

          jclass PythonEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_abc543fa9701720f] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_2e343080aa0c9516] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_7a28fd3585a5b57c] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEventHandler::PythonEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonEventHandler::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self);
          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data);
          static PyGetSetDef t_PythonEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEventHandler, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEventHandler)[] = {
            { Py_tp_methods, t_PythonEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonEventHandler_init_ },
            { Py_tp_getset, t_PythonEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEventHandler, t_PythonEventHandler, PythonEventHandler);

          void t_PythonEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEventHandler), &PY_TYPE_DEF(PythonEventHandler), module, "PythonEventHandler", 1);
          }

          void t_PythonEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "class_", make_descriptor(PythonEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "wrapfn_", make_descriptor(t_PythonEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonEventHandler::wrap_Object(PythonEventHandler(((t_PythonEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonEventHandler object((jobject) NULL);

            INT_CALL(object = PythonEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLegendreRuleFactory::class$ = NULL;
          jmethodID *FieldLegendreRuleFactory::mids$ = NULL;
          bool FieldLegendreRuleFactory::live$ = false;

          jclass FieldLegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLegendreRuleFactory::FieldLegendreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLegendreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_e670405dd33862ee], a0));
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
          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args);
          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLegendreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLegendreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLegendreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLegendreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLegendreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLegendreRuleFactory, t_FieldLegendreRuleFactory, FieldLegendreRuleFactory);
          PyObject *t_FieldLegendreRuleFactory::wrap_Object(const FieldLegendreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLegendreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLegendreRuleFactory), &PY_TYPE_DEF(FieldLegendreRuleFactory), module, "FieldLegendreRuleFactory", 0);
          }

          void t_FieldLegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "class_", make_descriptor(FieldLegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "wrapfn_", make_descriptor(t_FieldLegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLegendreRuleFactory::wrap_Object(FieldLegendreRuleFactory(((t_FieldLegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLegendreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLegendreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data)
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
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile::class$ = NULL;
        jmethodID *Tile::mids$ = NULL;
        bool Tile::live$ = false;

        jclass Tile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_5824e1e5f0141611] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_getElevationAtIndices_dbbe5f05149dbf73] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_4508852644846c83] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_4508852644846c83] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_46f85b53d9aedd96] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_570ce0828f81a2c1] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_dff5885c2c873297] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_cc274332aee60547] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_46f85b53d9aedd96] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_570ce0828f81a2c1] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_dff5885c2c873297] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_dff5885c2c873297] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_dff5885c2c873297] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_dff5885c2c873297] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_dff5885c2c873297] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_dff5885c2c873297] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_dff5885c2c873297] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_86ffecc08a63eff0] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_tileUpdateCompleted_0fa09c18fee449d5] = env->getMethodID(cls, "tileUpdateCompleted", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint Tile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_5824e1e5f0141611], a0.this$, a1.this$, a2, a3));
        }

        jdouble Tile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_dbbe5f05149dbf73], a0, a1);
        }

        jint Tile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_4508852644846c83], a0);
        }

        jint Tile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_4508852644846c83], a0);
        }

        jdouble Tile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_46f85b53d9aedd96], a0);
        }

        jint Tile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_570ce0828f81a2c1]);
        }

        jdouble Tile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_dff5885c2c873297]);
        }

        ::org::orekit::rugged::raster::Tile$Location Tile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_cc274332aee60547], a0, a1));
        }

        jdouble Tile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_46f85b53d9aedd96], a0);
        }

        jint Tile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_570ce0828f81a2c1]);
        }

        jdouble Tile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_dff5885c2c873297]);
        }

        jdouble Tile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_dff5885c2c873297]);
        }

        jint Tile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_570ce0828f81a2c1]);
        }

        jint Tile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_570ce0828f81a2c1]);
        }

        jdouble Tile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_dff5885c2c873297]);
        }

        jdouble Tile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_dff5885c2c873297]);
        }

        jdouble Tile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_dff5885c2c873297]);
        }

        jint Tile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_570ce0828f81a2c1]);
        }

        jint Tile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_570ce0828f81a2c1]);
        }

        jdouble Tile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_dff5885c2c873297]);
        }

        jdouble Tile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_dff5885c2c873297]);
        }

        jdouble Tile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_86ffecc08a63eff0], a0, a1);
        }

        void Tile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_0fa09c18fee449d5]);
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
        static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeRows(t_Tile *self);
        static PyObject *t_Tile_getLatitudeStep(t_Tile *self);
        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self);
        static PyObject *t_Tile_getLongitudeStep(t_Tile *self);
        static PyObject *t_Tile_getMaxElevation(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self);
        static PyObject *t_Tile_getMinElevation(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self);
        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self);
        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data);
        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data);
        static PyGetSetDef t_Tile__fields_[] = {
          DECLARE_GET_FIELD(t_Tile, latitudeRows),
          DECLARE_GET_FIELD(t_Tile, latitudeStep),
          DECLARE_GET_FIELD(t_Tile, longitudeColumns),
          DECLARE_GET_FIELD(t_Tile, longitudeStep),
          DECLARE_GET_FIELD(t_Tile, maxElevation),
          DECLARE_GET_FIELD(t_Tile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maximumLatitude),
          DECLARE_GET_FIELD(t_Tile, maximumLongitude),
          DECLARE_GET_FIELD(t_Tile, minElevation),
          DECLARE_GET_FIELD(t_Tile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minimumLatitude),
          DECLARE_GET_FIELD(t_Tile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile__methods_[] = {
          DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
          { Py_tp_methods, t_Tile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::raster::UpdatableTile),
          NULL
        };

        DEFINE_TYPE(Tile, t_Tile, Tile);

        void t_Tile::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "Location", make_descriptor(&PY_TYPE_DEF(Tile$Location)));
        }

        void t_Tile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "class_", make_descriptor(Tile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "wrapfn_", make_descriptor(t_Tile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tile::initializeClass, 1)))
            return NULL;
          return t_Tile::wrap_Object(Tile(((t_Tile *) arg)->object.this$));
        }
        static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args)
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

        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args)
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

        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg)
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

        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg)
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

        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg)
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

        static PyObject *t_Tile_getLatitudeRows(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLatitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args)
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

        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg)
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

        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLongitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args)
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

        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleConsumer::mids$ = NULL;
            bool ParseToken$DoubleConsumer::live$ = false;

            jclass ParseToken$DoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_17db3a65980d3441] = env->getMethodID(cls, "accept", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleConsumer::accept(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_17db3a65980d3441], a0);
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
            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleConsumer, t_ParseToken$DoubleConsumer, ParseToken$DoubleConsumer);

            void t_ParseToken$DoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleConsumer), &PY_TYPE_DEF(ParseToken$DoubleConsumer), module, "ParseToken$DoubleConsumer", 0);
            }

            void t_ParseToken$DoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "class_", make_descriptor(ParseToken$DoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleConsumer::wrap_Object(ParseToken$DoubleConsumer(((t_ParseToken$DoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatInSystem::class$ = NULL;
      jmethodID *SatInSystem::mids$ = NULL;
      bool SatInSystem::live$ = false;

      jclass SatInSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatInSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_74682bbdff47e90b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;I)V");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getPRN_570ce0828f81a2c1] = env->getMethodID(cls, "getPRN", "()I");
          mids$[mid_getSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getTwoDigitsRinexPRN_570ce0828f81a2c1] = env->getMethodID(cls, "getTwoDigitsRinexPRN", "()I");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatInSystem::SatInSystem(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_74682bbdff47e90b, a0.this$, a1)) {}

      jboolean SatInSystem::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jint SatInSystem::getPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getPRN_570ce0828f81a2c1]);
      }

      ::org::orekit::gnss::SatelliteSystem SatInSystem::getSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_01acae5c1a253b8e]));
      }

      jint SatInSystem::getTwoDigitsRinexPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getTwoDigitsRinexPRN_570ce0828f81a2c1]);
      }

      jint SatInSystem::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data);
      static PyGetSetDef t_SatInSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatInSystem, pRN),
        DECLARE_GET_FIELD(t_SatInSystem, system),
        DECLARE_GET_FIELD(t_SatInSystem, twoDigitsRinexPRN),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatInSystem__methods_[] = {
        DECLARE_METHOD(t_SatInSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, equals, METH_VARARGS),
        DECLARE_METHOD(t_SatInSystem, getPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getSystem, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getTwoDigitsRinexPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatInSystem)[] = {
        { Py_tp_methods, t_SatInSystem__methods_ },
        { Py_tp_init, (void *) t_SatInSystem_init_ },
        { Py_tp_getset, t_SatInSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatInSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatInSystem, t_SatInSystem, SatInSystem);

      void t_SatInSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatInSystem), &PY_TYPE_DEF(SatInSystem), module, "SatInSystem", 0);
      }

      void t_SatInSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "class_", make_descriptor(SatInSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "wrapfn_", make_descriptor(t_SatInSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatInSystem::initializeClass, 1)))
          return NULL;
        return t_SatInSystem::wrap_Object(SatInSystem(((t_SatInSystem *) arg)->object.this$));
      }
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatInSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        SatInSystem object((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
        {
          INT_CALL(object = SatInSystem(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPRN());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *AbstractRadiationForceModel::class$ = NULL;
        jmethodID *AbstractRadiationForceModel::mids$ = NULL;
        bool AbstractRadiationForceModel::live$ = false;

        jclass AbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/AbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addOccultingBody_7c502fc601af6f77] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_addOccultingBody_d0e04e19947fa36d] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getOccultingBodies_2afa36052df4765d] = env->getMethodID(cls, "getOccultingBodies", "()Ljava/util/List;");
            mids$[mid_getGeneralEclipseAngles_a99e86e606086333] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getGeneralEclipseAngles_e68fcbb33aff0d20] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_7c502fc601af6f77], a0.this$);
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_d0e04e19947fa36d], a0.this$, a1);
        }

        jboolean AbstractRadiationForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
        }

        ::java::util::List AbstractRadiationForceModel::getOccultingBodies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOccultingBodies_2afa36052df4765d]));
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
      namespace radiation {
        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data);
        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_AbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, eventDetectors),
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, occultingBodies),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, addOccultingBody, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getOccultingBodies, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_AbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRadiationForceModel, t_AbstractRadiationForceModel, AbstractRadiationForceModel);

        void t_AbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRadiationForceModel), &PY_TYPE_DEF(AbstractRadiationForceModel), module, "AbstractRadiationForceModel", 0);
        }

        void t_AbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "class_", make_descriptor(AbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "wrapfn_", make_descriptor(t_AbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractRadiationForceModel::wrap_Object(AbstractRadiationForceModel(((t_AbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(self->object.addOccultingBody(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;

              if (!parseArgs(args, "kD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addOccultingBody(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addOccultingBody", args);
          return NULL;
        }

        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg)
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

        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(OccultationEngine));
        }

        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/InterpolationTableLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *InterpolationTableLoader::class$ = NULL;
      jmethodID *InterpolationTableLoader::mids$ = NULL;
      bool InterpolationTableLoader::live$ = false;

      jclass InterpolationTableLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/InterpolationTableLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getAbscissaGrid_60c7040667a7dc5c] = env->getMethodID(cls, "getAbscissaGrid", "()[D");
          mids$[mid_getOrdinateGrid_60c7040667a7dc5c] = env->getMethodID(cls, "getOrdinateGrid", "()[D");
          mids$[mid_getValuesSamples_0358d8ea02f2cdb1] = env->getMethodID(cls, "getValuesSamples", "()[[D");
          mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolationTableLoader::InterpolationTableLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      JArray< jdouble > InterpolationTableLoader::getAbscissaGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAbscissaGrid_60c7040667a7dc5c]));
      }

      JArray< jdouble > InterpolationTableLoader::getOrdinateGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getOrdinateGrid_60c7040667a7dc5c]));
      }

      JArray< JArray< jdouble > > InterpolationTableLoader::getValuesSamples() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getValuesSamples_0358d8ea02f2cdb1]));
      }

      void InterpolationTableLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
      }

      jboolean InterpolationTableLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args);
      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data);
      static PyGetSetDef t_InterpolationTableLoader__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolationTableLoader, abscissaGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, ordinateGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, valuesSamples),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolationTableLoader__methods_[] = {
        DECLARE_METHOD(t_InterpolationTableLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, getAbscissaGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getOrdinateGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getValuesSamples, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolationTableLoader)[] = {
        { Py_tp_methods, t_InterpolationTableLoader__methods_ },
        { Py_tp_init, (void *) t_InterpolationTableLoader_init_ },
        { Py_tp_getset, t_InterpolationTableLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolationTableLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolationTableLoader, t_InterpolationTableLoader, InterpolationTableLoader);

      void t_InterpolationTableLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolationTableLoader), &PY_TYPE_DEF(InterpolationTableLoader), module, "InterpolationTableLoader", 0);
      }

      void t_InterpolationTableLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "class_", make_descriptor(InterpolationTableLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "wrapfn_", make_descriptor(t_InterpolationTableLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolationTableLoader::initializeClass, 1)))
          return NULL;
        return t_InterpolationTableLoader::wrap_Object(InterpolationTableLoader(((t_InterpolationTableLoader *) arg)->object.this$));
      }
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolationTableLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds)
      {
        InterpolationTableLoader object((jobject) NULL);

        INT_CALL(object = InterpolationTableLoader());
        self->object = object;

        return 0;
      }

      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbscissaGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrdinateGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValuesSamples());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.loadData(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbscissaGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrdinateGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValuesSamples());
        return JArray<jobject>(value.this$).wrap(NULL);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateVectorFunction.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *FieldMultivariateVectorFunction::mids$ = NULL;
      bool FieldMultivariateVectorFunction::live$ = false;

      jclass FieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateVectorFunction_a0b6d869b4592bf0] = env->getMethodID(cls, "toCalculusFieldMultivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateVectorFunction;");
          mids$[mid_value_401cf8a1b53fb909] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction FieldMultivariateVectorFunction::toCalculusFieldMultivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateVectorFunction_a0b6d869b4592bf0], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_401cf8a1b53fb909], a0.this$));
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
      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, toCalculusFieldMultivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateVectorFunction, t_FieldMultivariateVectorFunction, FieldMultivariateVectorFunction);

      void t_FieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateVectorFunction), &PY_TYPE_DEF(FieldMultivariateVectorFunction), module, "FieldMultivariateVectorFunction", 0);
      }

      void t_FieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "class_", make_descriptor(FieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateVectorFunction::wrap_Object(FieldMultivariateVectorFunction(((t_FieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Identity.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Identity::class$ = NULL;
        jmethodID *Identity::mids$ = NULL;
        bool Identity::live$ = false;

        jclass Identity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Identity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Identity::Identity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Identity::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Identity::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Identity_value(t_Identity *self, PyObject *args);

        static PyMethodDef t_Identity__methods_[] = {
          DECLARE_METHOD(t_Identity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Identity)[] = {
          { Py_tp_methods, t_Identity__methods_ },
          { Py_tp_init, (void *) t_Identity_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Identity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Identity, t_Identity, Identity);

        void t_Identity::install(PyObject *module)
        {
          installType(&PY_TYPE(Identity), &PY_TYPE_DEF(Identity), module, "Identity", 0);
        }

        void t_Identity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "class_", make_descriptor(Identity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "wrapfn_", make_descriptor(t_Identity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Identity::initializeClass, 1)))
            return NULL;
          return t_Identity::wrap_Object(Identity(((t_Identity *) arg)->object.this$));
        }
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Identity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds)
        {
          Identity object((jobject) NULL);

          INT_CALL(object = Identity());
          self->object = object;

          return 0;
        }

        static PyObject *t_Identity_value(t_Identity *self, PyObject *args)
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
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *LazyLoadedGravityFields::class$ = NULL;
          jmethodID *LazyLoadedGravityFields::mids$ = NULL;
          bool LazyLoadedGravityFields::live$ = false;

          jclass LazyLoadedGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/LazyLoadedGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d2f452d2d1d098c7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addDefaultOceanTidesReaders_0fa09c18fee449d5] = env->getMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_0fa09c18fee449d5] = env->getMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_aaf944cdf3a65ca7] = env->getMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_bb91501de12fc9cd] = env->getMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_0fa09c18fee449d5] = env->getMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_0fa09c18fee449d5] = env->getMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_1f277f0c1fb1d25f] = env->getMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_8be9acc0db722a5e] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_0fdcb0a280e1e598] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_ed8ed7679d88de0a] = env->getMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_10d7c0f6de166543] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_c2f412128b078525] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_59c1b784e0263abd] = env->getMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LazyLoadedGravityFields::LazyLoadedGravityFields(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d2f452d2d1d098c7, a0.this$, a1.this$)) {}

          void LazyLoadedGravityFields::addDefaultOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultOceanTidesReaders_0fa09c18fee449d5]);
          }

          void LazyLoadedGravityFields::addDefaultPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultPotentialCoefficientsReaders_0fa09c18fee449d5]);
          }

          void LazyLoadedGravityFields::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addOceanTidesReader_aaf944cdf3a65ca7], a0.this$);
          }

          void LazyLoadedGravityFields::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPotentialCoefficientsReader_bb91501de12fc9cd], a0.this$);
          }

          void LazyLoadedGravityFields::clearOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearOceanTidesReaders_0fa09c18fee449d5]);
          }

          void LazyLoadedGravityFields::clearPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearPotentialCoefficientsReaders_0fa09c18fee449d5]);
          }

          void LazyLoadedGravityFields::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_configureOceanLoadDeformationCoefficients_1f277f0c1fb1d25f], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_8be9acc0db722a5e], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_0fdcb0a280e1e598], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients LazyLoadedGravityFields::getOceanLoadDeformationCoefficients() const
          {
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callObjectMethod(this$, mids$[mid_getOceanLoadDeformationCoefficients_ed8ed7679d88de0a]));
          }

          ::java::util::List LazyLoadedGravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_10d7c0f6de166543], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_c2f412128b078525], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader LazyLoadedGravityFields::readGravityField(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callObjectMethod(this$, mids$[mid_readGravityField_59c1b784e0263abd], a0, a1));
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
          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data);
          static PyGetSetDef t_LazyLoadedGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_LazyLoadedGravityFields, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LazyLoadedGravityFields__methods_[] = {
            DECLARE_METHOD(t_LazyLoadedGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addOceanTidesReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addPotentialCoefficientsReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, configureOceanLoadDeformationCoefficients, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanLoadDeformationCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, readGravityField, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGravityFields)[] = {
            { Py_tp_methods, t_LazyLoadedGravityFields__methods_ },
            { Py_tp_init, (void *) t_LazyLoadedGravityFields_init_ },
            { Py_tp_getset, t_LazyLoadedGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LazyLoadedGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LazyLoadedGravityFields, t_LazyLoadedGravityFields, LazyLoadedGravityFields);

          void t_LazyLoadedGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(LazyLoadedGravityFields), &PY_TYPE_DEF(LazyLoadedGravityFields), module, "LazyLoadedGravityFields", 0);
          }

          void t_LazyLoadedGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "class_", make_descriptor(LazyLoadedGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "wrapfn_", make_descriptor(t_LazyLoadedGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LazyLoadedGravityFields::initializeClass, 1)))
              return NULL;
            return t_LazyLoadedGravityFields::wrap_Object(LazyLoadedGravityFields(((t_LazyLoadedGravityFields *) arg)->object.this$));
          }
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LazyLoadedGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            LazyLoadedGravityFields object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LazyLoadedGravityFields(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(self->object.configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadata::class$ = NULL;
            jmethodID *CdmMetadata::mids$ = NULL;
            bool CdmMetadata::live$ = false;

            jclass CdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_47d99c12e4a42886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                mids$[mid_getAdmMsgLink_11b109bd155ca898] = env->getMethodID(cls, "getAdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getAltCovRefFrame_5d5dd95b04037824] = env->getMethodID(cls, "getAltCovRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getAltCovType_7a2f3f5198022a2d] = env->getMethodID(cls, "getAltCovType", "()Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_getAtmosphericModel_11b109bd155ca898] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                mids$[mid_getCatalogName_11b109bd155ca898] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                mids$[mid_getCovarianceMethod_d5c8c6e2accd7af1] = env->getMethodID(cls, "getCovarianceMethod", "()Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_getCovarianceSource_11b109bd155ca898] = env->getMethodID(cls, "getCovarianceSource", "()Ljava/lang/String;");
                mids$[mid_getEarthTides_cda5653d7d9d3ff6] = env->getMethodID(cls, "getEarthTides", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getEphemName_11b109bd155ca898] = env->getMethodID(cls, "getEphemName", "()Ljava/lang/String;");
                mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGravityDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getGravityDegree", "()I");
                mids$[mid_getGravityModel_11b109bd155ca898] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                mids$[mid_getGravityOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getGravityOrder", "()I");
                mids$[mid_getInternationalDes_11b109bd155ca898] = env->getMethodID(cls, "getInternationalDes", "()Ljava/lang/String;");
                mids$[mid_getIntrackThrust_cda5653d7d9d3ff6] = env->getMethodID(cls, "getIntrackThrust", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getManeuverable_3b2c9e1d549fb9c8] = env->getMethodID(cls, "getManeuverable", "()Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getNBodyPerturbations_2afa36052df4765d] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                mids$[mid_getObject_11b109bd155ca898] = env->getMethodID(cls, "getObject", "()Ljava/lang/String;");
                mids$[mid_getObjectDesignator_11b109bd155ca898] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                mids$[mid_getObjectName_11b109bd155ca898] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_getObjectType_1e10bdb6e1d917a7] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                mids$[mid_getObsBeforeNextMessage_cda5653d7d9d3ff6] = env->getMethodID(cls, "getObsBeforeNextMessage", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getOdmMsgLink_11b109bd155ca898] = env->getMethodID(cls, "getOdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getOperatorContactPosition_11b109bd155ca898] = env->getMethodID(cls, "getOperatorContactPosition", "()Ljava/lang/String;");
                mids$[mid_getOperatorEmail_11b109bd155ca898] = env->getMethodID(cls, "getOperatorEmail", "()Ljava/lang/String;");
                mids$[mid_getOperatorOrganization_11b109bd155ca898] = env->getMethodID(cls, "getOperatorOrganization", "()Ljava/lang/String;");
                mids$[mid_getOperatorPhone_11b109bd155ca898] = env->getMethodID(cls, "getOperatorPhone", "()Ljava/lang/String;");
                mids$[mid_getOrbitCenter_23d31d5db0bee8e9] = env->getMethodID(cls, "getOrbitCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getRefFrame_5d5dd95b04037824] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getRelativeMetadata_d2d96fe58613ae06] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getSolarRadiationPressure_cda5653d7d9d3ff6] = env->getMethodID(cls, "getSolarRadiationPressure", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_setAdmMsgLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setAltCovRefFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setAltCovRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setAltCovType_4d35cd7fda4a0f2d] = env->getMethodID(cls, "setAltCovType", "(Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;)V");
                mids$[mid_setAtmosphericModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                mids$[mid_setCatalogName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                mids$[mid_setCovarianceMethod_64638d5d5e58a368] = env->getMethodID(cls, "setCovarianceMethod", "(Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;)V");
                mids$[mid_setCovarianceSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovarianceSource", "(Ljava/lang/String;)V");
                mids$[mid_setEarthTides_5bef0e6b8b546bf9] = env->getMethodID(cls, "setEarthTides", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setEphemName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setEphemName", "(Ljava/lang/String;)V");
                mids$[mid_setGravityModel_04eb5531e9227c93] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                mids$[mid_setInternationalDes_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInternationalDes", "(Ljava/lang/String;)V");
                mids$[mid_setIntrackThrust_5bef0e6b8b546bf9] = env->getMethodID(cls, "setIntrackThrust", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setManeuverable_6c07bc4d7ea23f3b] = env->getMethodID(cls, "setManeuverable", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");
                mids$[mid_setNBodyPerturbations_de3e021e7266b71e] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                mids$[mid_setObject_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObject", "(Ljava/lang/String;)V");
                mids$[mid_setObjectDesignator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_setObjectType_22d7655927343c9d] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                mids$[mid_setObsBeforeNextMessage_5bef0e6b8b546bf9] = env->getMethodID(cls, "setObsBeforeNextMessage", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setOdmMsgLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorContactPosition_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOperatorContactPosition", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorEmail_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOperatorEmail", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorOrganization_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOperatorOrganization", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorPhone_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOperatorPhone", "(Ljava/lang/String;)V");
                mids$[mid_setOrbitCenter_32e120c3a0353f27] = env->getMethodID(cls, "setOrbitCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setRefFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setRelativeMetadata_317cd8556d11f4cf] = env->getMethodID(cls, "setRelativeMetadata", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_setSolarRadiationPressure_5bef0e6b8b546bf9] = env->getMethodID(cls, "setSolarRadiationPressure", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadata::CdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            CdmMetadata::CdmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_47d99c12e4a42886, a0.this$)) {}

            ::java::lang::String CdmMetadata::getAdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMsgLink_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getAltCovRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getAltCovRefFrame_5d5dd95b04037824]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType CdmMetadata::getAltCovType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType(env->callObjectMethod(this$, mids$[mid_getAltCovType_7a2f3f5198022a2d]));
            }

            ::java::lang::String CdmMetadata::getAtmosphericModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_11b109bd155ca898]));
            }

            ::java::lang::String CdmMetadata::getCatalogName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod CdmMetadata::getCovarianceMethod() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod(env->callObjectMethod(this$, mids$[mid_getCovarianceMethod_d5c8c6e2accd7af1]));
            }

            ::java::lang::String CdmMetadata::getCovarianceSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovarianceSource_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getEarthTides() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getEarthTides_cda5653d7d9d3ff6]));
            }

            ::java::lang::String CdmMetadata::getEphemName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEphemName_11b109bd155ca898]));
            }

            ::org::orekit::frames::Frame CdmMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
            }

            jint CdmMetadata::getGravityDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityDegree_570ce0828f81a2c1]);
            }

            ::java::lang::String CdmMetadata::getGravityModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_11b109bd155ca898]));
            }

            jint CdmMetadata::getGravityOrder() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityOrder_570ce0828f81a2c1]);
            }

            ::java::lang::String CdmMetadata::getInternationalDes() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDes_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getIntrackThrust() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getIntrackThrust_cda5653d7d9d3ff6]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable CdmMetadata::getManeuverable() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable(env->callObjectMethod(this$, mids$[mid_getManeuverable_3b2c9e1d549fb9c8]));
            }

            ::java::util::List CdmMetadata::getNBodyPerturbations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_2afa36052df4765d]));
            }

            ::java::lang::String CdmMetadata::getObject() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObject_11b109bd155ca898]));
            }

            ::java::lang::String CdmMetadata::getObjectDesignator() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_11b109bd155ca898]));
            }

            ::java::lang::String CdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType CdmMetadata::getObjectType() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_1e10bdb6e1d917a7]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getObsBeforeNextMessage() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getObsBeforeNextMessage_cda5653d7d9d3ff6]));
            }

            ::java::lang::String CdmMetadata::getOdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMsgLink_11b109bd155ca898]));
            }

            ::java::lang::String CdmMetadata::getOperatorContactPosition() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorContactPosition_11b109bd155ca898]));
            }

            ::java::lang::String CdmMetadata::getOperatorEmail() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorEmail_11b109bd155ca898]));
            }

            ::java::lang::String CdmMetadata::getOperatorOrganization() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorOrganization_11b109bd155ca898]));
            }

            ::java::lang::String CdmMetadata::getOperatorPhone() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorPhone_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade CdmMetadata::getOrbitCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getOrbitCenter_23d31d5db0bee8e9]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getRefFrame_5d5dd95b04037824]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata CdmMetadata::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_d2d96fe58613ae06]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getSolarRadiationPressure() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getSolarRadiationPressure_cda5653d7d9d3ff6]));
            }

            void CdmMetadata::setAdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdmMsgLink_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setAltCovRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovRefFrame_849bc9e3b38b9bcb], a0.this$);
            }

            void CdmMetadata::setAltCovType(const ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovType_4d35cd7fda4a0f2d], a0.this$);
            }

            void CdmMetadata::setAtmosphericModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setCatalogName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCatalogName_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setCovarianceMethod(const ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMethod_64638d5d5e58a368], a0.this$);
            }

            void CdmMetadata::setCovarianceSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceSource_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setEarthTides(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEarthTides_5bef0e6b8b546bf9], a0.this$);
            }

            void CdmMetadata::setEphemName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemName_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setGravityModel_04eb5531e9227c93], a0.this$, a1, a2);
            }

            void CdmMetadata::setInternationalDes(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInternationalDes_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setIntrackThrust(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntrackThrust_5bef0e6b8b546bf9], a0.this$);
            }

            void CdmMetadata::setManeuverable(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setManeuverable_6c07bc4d7ea23f3b], a0.this$);
            }

            void CdmMetadata::setNBodyPerturbations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_de3e021e7266b71e], a0.this$);
            }

            void CdmMetadata::setObject(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObject_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectDesignator_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectType_22d7655927343c9d], a0.this$);
            }

            void CdmMetadata::setObsBeforeNextMessage(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsBeforeNextMessage_5bef0e6b8b546bf9], a0.this$);
            }

            void CdmMetadata::setOdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdmMsgLink_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setOperatorContactPosition(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorContactPosition_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setOperatorEmail(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorEmail_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setOperatorOrganization(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorOrganization_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setOperatorPhone(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorPhone_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmMetadata::setOrbitCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOrbitCenter_32e120c3a0353f27], a0.this$);
            }

            void CdmMetadata::setRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRefFrame_849bc9e3b38b9bcb], a0.this$);
            }

            void CdmMetadata::setRelativeMetadata(const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeMetadata_317cd8556d11f4cf], a0.this$);
            }

            void CdmMetadata::setSolarRadiationPressure(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadiationPressure_5bef0e6b8b546bf9], a0.this$);
            }

            void CdmMetadata::validate(jdouble a0) const
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
          namespace cdm {
            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMetadata, admMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovRefFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, atmosphericModel),
              DECLARE_GETSET_FIELD(t_CdmMetadata, catalogName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceMethod),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceSource),
              DECLARE_GETSET_FIELD(t_CdmMetadata, earthTides),
              DECLARE_GETSET_FIELD(t_CdmMetadata, ephemName),
              DECLARE_GET_FIELD(t_CdmMetadata, frame),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityDegree),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityModel),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityOrder),
              DECLARE_GETSET_FIELD(t_CdmMetadata, internationalDes),
              DECLARE_GETSET_FIELD(t_CdmMetadata, intrackThrust),
              DECLARE_GETSET_FIELD(t_CdmMetadata, maneuverable),
              DECLARE_GETSET_FIELD(t_CdmMetadata, nBodyPerturbations),
              DECLARE_GETSET_FIELD(t_CdmMetadata, object),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectDesignator),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, obsBeforeNextMessage),
              DECLARE_GETSET_FIELD(t_CdmMetadata, odmMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorContactPosition),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorEmail),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorOrganization),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorPhone),
              DECLARE_GETSET_FIELD(t_CdmMetadata, orbitCenter),
              DECLARE_GETSET_FIELD(t_CdmMetadata, refFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, relativeMetadata),
              DECLARE_GETSET_FIELD(t_CdmMetadata, solarRadiationPressure),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, getAdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAtmosphericModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCatalogName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceSource, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEarthTides, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEphemName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityDegree, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityOrder, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getInternationalDes, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getIntrackThrust, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getManeuverable, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getNBodyPerturbations, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObject, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectDesignator, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObsBeforeNextMessage, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorContactPosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorEmail, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorOrganization, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorPhone, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOrbitCenter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getSolarRadiationPressure, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, setAdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAtmosphericModel, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCatalogName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceMethod, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceSource, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEarthTides, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEphemName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setGravityModel, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadata, setInternationalDes, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setIntrackThrust, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setManeuverable, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setNBodyPerturbations, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObject, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectDesignator, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObsBeforeNextMessage, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorContactPosition, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorEmail, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorOrganization, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorPhone, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOrbitCenter, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRelativeMetadata, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setSolarRadiationPressure, METH_O),
              DECLARE_METHOD(t_CdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadata)[] = {
              { Py_tp_methods, t_CdmMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmMetadata_init_ },
              { Py_tp_getset, t_CdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(CdmMetadata, t_CdmMetadata, CdmMetadata);

            void t_CdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadata), &PY_TYPE_DEF(CdmMetadata), module, "CdmMetadata", 0);
            }

            void t_CdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "class_", make_descriptor(CdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "wrapfn_", make_descriptor(t_CdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmMetadata::wrap_Object(CdmMetadata(((t_CdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  CdmMetadata object((jobject) NULL);

                  INT_CALL(object = CdmMetadata());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  CdmMetadata object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    INT_CALL(object = CdmMetadata(a0));
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

            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphericModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCatalogName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceSource());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getGravityModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityOrder());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInternationalDes());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable result((jobject) NULL);
              OBJ_CALL(result = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
            }

            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObject());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectDesignator());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorContactPosition());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorEmail());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorOrganization());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorPhone());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAltCovRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::parameters_))
              {
                OBJ_CALL(self->object.setAltCovType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAtmosphericModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCatalogName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCatalogName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::parameters_))
              {
                OBJ_CALL(self->object.setCovarianceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovarianceSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceSource", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setEarthTides(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEarthTides", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setEphemName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInternationalDes(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInternationalDes", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setIntrackThrust(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntrackThrust", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
              {
                OBJ_CALL(self->object.setManeuverable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setManeuverable", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setNBodyPerturbations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObject(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObject", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectDesignator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectDesignator", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::parameters_))
              {
                OBJ_CALL(self->object.setObjectType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setObsBeforeNextMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsBeforeNextMessage", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorContactPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorContactPosition", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorEmail(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorEmail", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorOrganization(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorOrganization", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorPhone(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorPhone", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOrbitCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOrbitCenter", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRelativeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeMetadata", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setSolarRadiationPressure(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadiationPressure", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "admMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovRefFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphericModel());
              return j2p(value);
            }
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAtmosphericModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCatalogName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCatalogName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "catalogName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(value);
            }
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMethod", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceSource());
              return j2p(value);
            }
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovarianceSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceSource", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setEarthTides(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "earthTides", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setEphemName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityDegree());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getGravityModel());
              return j2p(value);
            }

            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityOrder());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInternationalDes());
              return j2p(value);
            }
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInternationalDes(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "internationalDes", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntrackThrust(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "intrackThrust", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
              OBJ_CALL(value = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(value);
            }
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &value))
                {
                  INT_CALL(self->object.setManeuverable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maneuverable", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setNBodyPerturbations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObject());
              return j2p(value);
            }
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObject(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "object", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectDesignator());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectDesignator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectDesignator", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &value))
                {
                  INT_CALL(self->object.setObjectType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setObsBeforeNextMessage(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsBeforeNextMessage", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odmMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorContactPosition());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorContactPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorContactPosition", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorEmail());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorEmail(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorEmail", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorOrganization());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorOrganization(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorOrganization", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorPhone());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorPhone(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorPhone", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setOrbitCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "orbitCenter", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &value))
                {
                  INT_CALL(self->object.setRelativeMetadata(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeMetadata", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setSolarRadiationPressure(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadiationPressure", arg);
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
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/util/Collection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator::mids$ = NULL;
        bool AbstractIntegratedPropagator::live$ = false;

        jclass AbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_3192623a36e6dd4e] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_efb7003d866d4523] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_570ce0828f81a2c1] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_18d439b26e70ccd0] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_11b109bd155ca898] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagationType_b2e499d9c793fc25] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_b108b35ef48e27bd] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_fbff2ff5554d95e1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_propagate_a69ef29c3ea1e1fa] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_17db3a65980d3441] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setResetAtEnd_bd04c9335fb9e4cf] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_setUpEventDetector_8fd0285b4661863e] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_initMapper_0fa09c18fee449d5] = env->getMethodID(cls, "initMapper", "()V");
            mids$[mid_setOrbitType_48a062bf972c4ab5] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_4ca1644ed7c72fe3] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getIntegrator_1a7e520947392fba] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
            mids$[mid_beforeIntegration_826b4eda94da4e78] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_afterIntegration_0fa09c18fee449d5] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_getInitialIntegrationState_c6311115fea01a34] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_createMapper_2bea84b26b1efc07] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_e1fa3ce287fe2655] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpUserEventDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");
            mids$[mid_setUpStmAndJacobianGenerators_0fa09c18fee449d5] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_3192623a36e6dd4e], a0.this$);
        }

        void AbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_efb7003d866d4523], a0.this$);
        }

        void AbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0fa09c18fee449d5]);
        }

        ::java::util::List AbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_2afa36052df4765d]));
        }

        jint AbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_570ce0828f81a2c1]);
        }

        jint AbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_570ce0828f81a2c1]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_18d439b26e70ccd0]));
        }

        ::java::util::Collection AbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_37528d110cff6b74]));
        }

        ::java::lang::String AbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_11b109bd155ca898]));
        }

        JArray< ::java::lang::String > AbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3]));
        }

        jdouble AbstractIntegratedPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::propagation::PropagationType AbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_b2e499d9c793fc25]));
        }

        jboolean AbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_b108b35ef48e27bd]);
        }

        jboolean AbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68], a0.this$);
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fbff2ff5554d95e1], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_a69ef29c3ea1e1fa], a0.this$, a1.this$));
        }

        void AbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
        }

        void AbstractIntegratedPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_17db3a65980d3441], a0);
        }

        void AbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_bd04c9335fb9e4cf], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_AbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, resetAtEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator, t_AbstractIntegratedPropagator, AbstractIntegratedPropagator);

        void t_AbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator), &PY_TYPE_DEF(AbstractIntegratedPropagator), module, "AbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_AbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "class_", make_descriptor(AbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator::wrap_Object(AbstractIntegratedPropagator(((t_AbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg)
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

        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::integration::PY_TYPE(AdditionalDerivativesProvider));
        }

        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg)
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

        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
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

        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
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

        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *CivilianNavigationMessage::class$ = NULL;
            jmethodID *CivilianNavigationMessage::mids$ = NULL;
            bool CivilianNavigationMessage::live$ = false;
            ::java::lang::String *CivilianNavigationMessage::CNAV = NULL;
            ::java::lang::String *CivilianNavigationMessage::CNV2 = NULL;

            jclass CivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getADot_dff5885c2c873297] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_dff5885c2c873297] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getIscL1CA_dff5885c2c873297] = env->getMethodID(cls, "getIscL1CA", "()D");
                mids$[mid_getIscL1CD_dff5885c2c873297] = env->getMethodID(cls, "getIscL1CD", "()D");
                mids$[mid_getIscL1CP_dff5885c2c873297] = env->getMethodID(cls, "getIscL1CP", "()D");
                mids$[mid_getIscL2C_dff5885c2c873297] = env->getMethodID(cls, "getIscL2C", "()D");
                mids$[mid_getIscL5I5_dff5885c2c873297] = env->getMethodID(cls, "getIscL5I5", "()D");
                mids$[mid_getIscL5Q5_dff5885c2c873297] = env->getMethodID(cls, "getIscL5Q5", "()D");
                mids$[mid_getSvAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_dff5885c2c873297] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getUraiEd_570ce0828f81a2c1] = env->getMethodID(cls, "getUraiEd", "()I");
                mids$[mid_getUraiNed0_570ce0828f81a2c1] = env->getMethodID(cls, "getUraiNed0", "()I");
                mids$[mid_getUraiNed1_570ce0828f81a2c1] = env->getMethodID(cls, "getUraiNed1", "()I");
                mids$[mid_getUraiNed2_570ce0828f81a2c1] = env->getMethodID(cls, "getUraiNed2", "()I");
                mids$[mid_isCnv2_b108b35ef48e27bd] = env->getMethodID(cls, "isCnv2", "()Z");
                mids$[mid_setADot_17db3a65980d3441] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_17db3a65980d3441] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setIscL1CA_17db3a65980d3441] = env->getMethodID(cls, "setIscL1CA", "(D)V");
                mids$[mid_setIscL1CD_17db3a65980d3441] = env->getMethodID(cls, "setIscL1CD", "(D)V");
                mids$[mid_setIscL1CP_17db3a65980d3441] = env->getMethodID(cls, "setIscL1CP", "(D)V");
                mids$[mid_setIscL2C_17db3a65980d3441] = env->getMethodID(cls, "setIscL2C", "(D)V");
                mids$[mid_setIscL5I5_17db3a65980d3441] = env->getMethodID(cls, "setIscL5I5", "(D)V");
                mids$[mid_setIscL5Q5_17db3a65980d3441] = env->getMethodID(cls, "setIscL5Q5", "(D)V");
                mids$[mid_setSvAccuracy_17db3a65980d3441] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_99803b0791f320ff] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_17db3a65980d3441] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setUraiEd_99803b0791f320ff] = env->getMethodID(cls, "setUraiEd", "(I)V");
                mids$[mid_setUraiNed0_99803b0791f320ff] = env->getMethodID(cls, "setUraiNed0", "(I)V");
                mids$[mid_setUraiNed1_99803b0791f320ff] = env->getMethodID(cls, "setUraiNed1", "(I)V");
                mids$[mid_setUraiNed2_99803b0791f320ff] = env->getMethodID(cls, "setUraiNed2", "(I)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNAV = new ::java::lang::String(env->getStaticObjectField(cls, "CNAV", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble CivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_dff5885c2c873297]);
            }

            jdouble CivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_dff5885c2c873297]);
            }

            jdouble CivilianNavigationMessage::getIscL1CA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CA_dff5885c2c873297]);
            }

            jdouble CivilianNavigationMessage::getIscL1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CD_dff5885c2c873297]);
            }

            jdouble CivilianNavigationMessage::getIscL1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CP_dff5885c2c873297]);
            }

            jdouble CivilianNavigationMessage::getIscL2C() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL2C_dff5885c2c873297]);
            }

            jdouble CivilianNavigationMessage::getIscL5I5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5I5_dff5885c2c873297]);
            }

            jdouble CivilianNavigationMessage::getIscL5Q5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5Q5_dff5885c2c873297]);
            }

            jdouble CivilianNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_dff5885c2c873297]);
            }

            jint CivilianNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_570ce0828f81a2c1]);
            }

            jdouble CivilianNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_dff5885c2c873297]);
            }

            jint CivilianNavigationMessage::getUraiEd() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiEd_570ce0828f81a2c1]);
            }

            jint CivilianNavigationMessage::getUraiNed0() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed0_570ce0828f81a2c1]);
            }

            jint CivilianNavigationMessage::getUraiNed1() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed1_570ce0828f81a2c1]);
            }

            jint CivilianNavigationMessage::getUraiNed2() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed2_570ce0828f81a2c1]);
            }

            jboolean CivilianNavigationMessage::isCnv2() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCnv2_b108b35ef48e27bd]);
            }

            void CivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setIscL1CA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CA_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setIscL1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CD_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setIscL1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CP_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setIscL2C(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL2C_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setIscL5I5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5I5_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setIscL5Q5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5Q5_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_99803b0791f320ff], a0);
            }

            void CivilianNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_17db3a65980d3441], a0);
            }

            void CivilianNavigationMessage::setUraiEd(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiEd_99803b0791f320ff], a0);
            }

            void CivilianNavigationMessage::setUraiNed0(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed0_99803b0791f320ff], a0);
            }

            void CivilianNavigationMessage::setUraiNed1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed1_99803b0791f320ff], a0);
            }

            void CivilianNavigationMessage::setUraiNed2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed2_99803b0791f320ff], a0);
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
            static PyObject *t_CivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_getADot(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getDeltaN0Dot(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CA(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CD(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CP(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL2C(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL5I5(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL5Q5(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getSvAccuracy(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getSvHealth(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getTGD(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiEd(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed0(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed1(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed2(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_isCnv2(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_setADot(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setDeltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CA(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CD(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CP(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL2C(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL5I5(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setSvAccuracy(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setSvHealth(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setTGD(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiEd(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed0(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed1(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed2(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_get__aDot(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__aDot(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__cnv2(t_CivilianNavigationMessage *self, void *data);
            static PyObject *t_CivilianNavigationMessage_get__deltaN0Dot(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__deltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CA(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CA(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CD(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CD(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CP(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CP(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL2C(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL2C(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL5I5(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL5I5(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL5Q5(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__svAccuracy(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__svAccuracy(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__svHealth(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__svHealth(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__tGD(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__tGD(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiEd(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiEd(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed0(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed0(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed1(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed1(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed2(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed2(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_CivilianNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, aDot),
              DECLARE_GET_FIELD(t_CivilianNavigationMessage, cnv2),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, deltaN0Dot),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CA),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CD),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CP),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL2C),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL5I5),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL5Q5),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, tGD),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiEd),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed0),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed1),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_CivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getADot, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getDeltaN0Dot, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CA, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CD, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CP, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL2C, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL5I5, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL5Q5, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiEd, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed0, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed1, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed2, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, isCnv2, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, setADot, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setDeltaN0Dot, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CA, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CD, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CP, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL2C, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL5I5, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL5Q5, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setTGD, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiEd, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed0, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed1, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed2, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CivilianNavigationMessage)[] = {
              { Py_tp_methods, t_CivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CivilianNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(CivilianNavigationMessage, t_CivilianNavigationMessage, CivilianNavigationMessage);

            void t_CivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(CivilianNavigationMessage), &PY_TYPE_DEF(CivilianNavigationMessage), module, "CivilianNavigationMessage", 0);
            }

            void t_CivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "class_", make_descriptor(CivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "wrapfn_", make_descriptor(t_CivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(CivilianNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "CNAV", make_descriptor(j2p(*CivilianNavigationMessage::CNAV)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "CNV2", make_descriptor(j2p(*CivilianNavigationMessage::CNV2)));
            }

            static PyObject *t_CivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_CivilianNavigationMessage::wrap_Object(CivilianNavigationMessage(((t_CivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_CivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CivilianNavigationMessage_getADot(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getADot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getDeltaN0Dot(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CA(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CD(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CP(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL2C(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL2C());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL5I5(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL5I5());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL5Q5(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL5Q5());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getSvAccuracy(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getSvHealth(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getTGD(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiEd(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiEd());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed0(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed0());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed1(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed2(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed2());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_isCnv2(t_CivilianNavigationMessage *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCnv2());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_CivilianNavigationMessage_setADot(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setADot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setADot", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setDeltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN0Dot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN0Dot", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CA(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CA", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CD(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CD", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CP(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CP", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL2C(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL2C(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL2C", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL5I5(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL5I5(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL5I5", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL5Q5(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL5Q5", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setSvAccuracy(t_CivilianNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_CivilianNavigationMessage_setSvHealth(t_CivilianNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_CivilianNavigationMessage_setTGD(t_CivilianNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_CivilianNavigationMessage_setUraiEd(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiEd(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiEd", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed0(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed0", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed1(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed1", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed2(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed2", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_get__aDot(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getADot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__aDot(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setADot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aDot", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__cnv2(t_CivilianNavigationMessage *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCnv2());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_CivilianNavigationMessage_get__deltaN0Dot(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__deltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN0Dot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN0Dot", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CA(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CA(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CA", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CD(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CD(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CD", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CP(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CP(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CP", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL2C(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL2C());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL2C(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL2C(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL2C", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL5I5(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL5I5());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL5I5(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL5I5(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL5I5", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL5Q5(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL5Q5());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL5Q5(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL5Q5", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__svAccuracy(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__svAccuracy(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_CivilianNavigationMessage_get__svHealth(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__svHealth(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_CivilianNavigationMessage_get__tGD(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__tGD(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_CivilianNavigationMessage_get__uraiEd(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiEd());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiEd(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiEd(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiEd", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed0(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed0());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed0(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed0", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed1(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed1());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed1(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed1", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed2(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed2());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed2(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed2", arg);
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
#include "org/orekit/files/ccsds/section/HeaderProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *HeaderProcessingState::class$ = NULL;
          jmethodID *HeaderProcessingState::mids$ = NULL;
          bool HeaderProcessingState::live$ = false;

          jclass HeaderProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/HeaderProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8348465aaad0e8dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_85d9863c57bc3b0c] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HeaderProcessingState::HeaderProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8348465aaad0e8dc, a0.this$)) {}

          jboolean HeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_85d9863c57bc3b0c], a0.this$);
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
        namespace section {
          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg);

          static PyMethodDef t_HeaderProcessingState__methods_[] = {
            DECLARE_METHOD(t_HeaderProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HeaderProcessingState)[] = {
            { Py_tp_methods, t_HeaderProcessingState__methods_ },
            { Py_tp_init, (void *) t_HeaderProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HeaderProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HeaderProcessingState, t_HeaderProcessingState, HeaderProcessingState);

          void t_HeaderProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(HeaderProcessingState), &PY_TYPE_DEF(HeaderProcessingState), module, "HeaderProcessingState", 0);
          }

          void t_HeaderProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "class_", make_descriptor(HeaderProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "wrapfn_", make_descriptor(t_HeaderProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HeaderProcessingState::initializeClass, 1)))
              return NULL;
            return t_HeaderProcessingState::wrap_Object(HeaderProcessingState(((t_HeaderProcessingState *) arg)->object.this$));
          }
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HeaderProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            HeaderProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = HeaderProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg)
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
            mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_estimate_2dde099f3293c8f4] = env->getStaticMethodID(cls, "estimate", "([[DI)Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_fit_798bc7fb6ed28c4b] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;)V");
            mids$[mid_fit_499e6fb142cdbfe7] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;ID)V");
            mids$[mid_getFittedModel_f9763aac1ee7efce] = env->getMethodID(cls, "getFittedModel", "()Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_getLogLikelihood_dff5885c2c873297] = env->getMethodID(cls, "getLogLikelihood", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalMixtureExpectationMaximization::MultivariateNormalMixtureExpectationMaximization(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::estimate(const JArray< JArray< jdouble > > & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callStaticObjectMethod(cls, mids$[mid_estimate_2dde099f3293c8f4], a0.this$, a1));
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_798bc7fb6ed28c4b], a0.this$);
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_499e6fb142cdbfe7], a0.this$, a1, a2);
        }

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::getFittedModel() const
        {
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callObjectMethod(this$, mids$[mid_getFittedModel_f9763aac1ee7efce]));
        }

        jdouble MultivariateNormalMixtureExpectationMaximization::getLogLikelihood() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLogLikelihood_dff5885c2c873297]);
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
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/GTODProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *GTODProvider::class$ = NULL;
      jmethodID *GTODProvider::mids$ = NULL;
      bool GTODProvider::live$ = false;

      jclass GTODProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/GTODProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_a75a6d9d92c81a5e] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_2f9fdd7f938bed2f] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/GTODProvider;");
          mids$[mid_getStaticTransform_edee248bbd22a723] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_eae0db96fe973887] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory GTODProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_a75a6d9d92c81a5e]));
      }

      GTODProvider GTODProvider::getNonInterpolatingProvider() const
      {
        return GTODProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_2f9fdd7f938bed2f]));
      }

      ::org::orekit::frames::StaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_edee248bbd22a723], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_eae0db96fe973887], a0.this$));
      }

      ::org::orekit::frames::Transform GTODProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform GTODProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
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
      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data);
      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data);
      static PyGetSetDef t_GTODProvider__fields_[] = {
        DECLARE_GET_FIELD(t_GTODProvider, eOPHistory),
        DECLARE_GET_FIELD(t_GTODProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GTODProvider__methods_[] = {
        DECLARE_METHOD(t_GTODProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getNonInterpolatingProvider, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_GTODProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GTODProvider)[] = {
        { Py_tp_methods, t_GTODProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GTODProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GTODProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GTODProvider, t_GTODProvider, GTODProvider);

      void t_GTODProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(GTODProvider), &PY_TYPE_DEF(GTODProvider), module, "GTODProvider", 0);
      }

      void t_GTODProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "class_", make_descriptor(GTODProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "wrapfn_", make_descriptor(t_GTODProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GTODProvider::initializeClass, 1)))
          return NULL;
        return t_GTODProvider::wrap_Object(GTODProvider(((t_GTODProvider *) arg)->object.this$));
      }
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GTODProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self)
      {
        GTODProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args)
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

      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args)
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

      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data)
      {
        GTODProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/DoubleDihedraFieldOfView.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *DoubleDihedraFieldOfView::class$ = NULL;
        jmethodID *DoubleDihedraFieldOfView::mids$ = NULL;
        bool DoubleDihedraFieldOfView::live$ = false;

        jclass DoubleDihedraFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/DoubleDihedraFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ef1625dfb370a71c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DoubleDihedraFieldOfView::DoubleDihedraFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5) : ::org::orekit::geometry::fov::PolygonalFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_ef1625dfb370a71c, a0.this$, a1.this$, a2, a3.this$, a4, a5)) {}
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
        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DoubleDihedraFieldOfView__methods_[] = {
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DoubleDihedraFieldOfView)[] = {
          { Py_tp_methods, t_DoubleDihedraFieldOfView__methods_ },
          { Py_tp_init, (void *) t_DoubleDihedraFieldOfView_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DoubleDihedraFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::PolygonalFieldOfView),
          NULL
        };

        DEFINE_TYPE(DoubleDihedraFieldOfView, t_DoubleDihedraFieldOfView, DoubleDihedraFieldOfView);

        void t_DoubleDihedraFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(DoubleDihedraFieldOfView), &PY_TYPE_DEF(DoubleDihedraFieldOfView), module, "DoubleDihedraFieldOfView", 0);
        }

        void t_DoubleDihedraFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "class_", make_descriptor(DoubleDihedraFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "wrapfn_", make_descriptor(t_DoubleDihedraFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 1)))
            return NULL;
          return t_DoubleDihedraFieldOfView::wrap_Object(DoubleDihedraFieldOfView(((t_DoubleDihedraFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          DoubleDihedraFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDkDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = DoubleDihedraFieldOfView(a0, a1, a2, a3, a4, a5));
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
