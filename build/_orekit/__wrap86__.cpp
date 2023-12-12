#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile::class$ = NULL;
        jmethodID *OrekitEphemerisFile::mids$ = NULL;
        bool OrekitEphemerisFile::live$ = false;

        jclass OrekitEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_b3e01345e0c06820] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris;");
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile::OrekitEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris OrekitEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_b3e01345e0c06820], a0.this$));
        }

        ::java::util::Map OrekitEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
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
        static PyObject *t_OrekitEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile_init_(t_OrekitEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile_addSatellite(t_OrekitEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile_getSatellites(t_OrekitEphemerisFile *self);
        static PyObject *t_OrekitEphemerisFile_get__satellites(t_OrekitEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile, t_OrekitEphemerisFile, OrekitEphemerisFile);

        void t_OrekitEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile), &PY_TYPE_DEF(OrekitEphemerisFile), module, "OrekitEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "OrekitSatelliteEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "OrekitEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment)));
        }

        void t_OrekitEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "class_", make_descriptor(OrekitEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "wrapfn_", make_descriptor(t_OrekitEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile::wrap_Object(OrekitEphemerisFile(((t_OrekitEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile_init_(t_OrekitEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile_addSatellite(t_OrekitEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile_getSatellites(t_OrekitEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris));
        }

        static PyObject *t_OrekitEphemerisFile_get__satellites(t_OrekitEphemerisFile *self, void *data)
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
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
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
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_546559a08b08816f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_bdacd7c5506b494c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_0d9551367f7ecdef] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_834ed2332948bfe5] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_76fb0949df043b81] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_split_93b2dbc81083cb8e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/spherical/oned/Arc;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet$Split;");
              mids$[mid_computeGeometricalProperties_0640e6acf969ed28] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet::ArcsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ArcsSet::ArcsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_546559a08b08816f, a0.this$, a1)) {}

          ArcsSet::ArcsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_bdacd7c5506b494c, a0.this$, a1)) {}

          ArcsSet::ArcsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::java::util::List ArcsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_0d9551367f7ecdef]));
          }

          ArcsSet ArcsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return ArcsSet(env->callObjectMethod(this$, mids$[mid_buildNew_834ed2332948bfe5], a0.this$));
          }

          ::java::util::Iterator ArcsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection ArcsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_76fb0949df043b81], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split ArcsSet::split(const ::org::hipparchus::geometry::spherical::oned::Arc & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split(env->callObjectMethod(this$, mids$[mid_split_93b2dbc81083cb8e], a0.this$));
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
#include "org/orekit/estimation/measurements/PythonAbstractMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonAbstractMeasurement::class$ = NULL;
        jmethodID *PythonAbstractMeasurement::mids$ = NULL;
        bool PythonAbstractMeasurement::live$ = false;

        jclass PythonAbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonAbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5871f304bea5be3f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLjava/util/List;)V");
            mids$[mid_addParameterDriver_558cfe74a49f563f] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractMeasurement::PythonAbstractMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_5871f304bea5be3f, a0.this$, a1, a2, a3, a4.this$)) {}

        void PythonAbstractMeasurement::addParameterDriver(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addParameterDriver_558cfe74a49f563f], a0.this$);
        }

        void PythonAbstractMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractMeasurement::pythonExtension(jlong a0) const
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
      namespace measurements {
        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args);
        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self);
        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args);
        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data);
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data);
        static PyGetSetDef t_PythonAbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, self),
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, addParameterDriver, METH_O),
          DECLARE_METHOD(t_PythonAbstractMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurement)[] = {
          { Py_tp_methods, t_PythonAbstractMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractMeasurement_init_ },
          { Py_tp_getset, t_PythonAbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonAbstractMeasurement, t_PythonAbstractMeasurement, PythonAbstractMeasurement);
        PyObject *t_PythonAbstractMeasurement::wrap_Object(const PythonAbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractMeasurement), &PY_TYPE_DEF(PythonAbstractMeasurement), module, "PythonAbstractMeasurement", 1);
        }

        void t_PythonAbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "class_", make_descriptor(PythonAbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "wrapfn_", make_descriptor(t_PythonAbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractMeasurement::wrap_Object(PythonAbstractMeasurement(((t_PythonAbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          PythonAbstractMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addParameterDriver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addParameterDriver", arg);
          return NULL;
        }

        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data)
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
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853FieldIntegrator::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegrator::mids$ = NULL;
        bool DormandPrince853FieldIntegrator::live$ = false;

        jclass DormandPrince853FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4879aa54fb0b4b90] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_f2e08e06cc4e8e8d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_estimateError_db5b00c957704bb3] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");
            mids$[mid_createInterpolator_c331213360e794f6] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853FieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_4879aa54fb0b4b90, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f2e08e06cc4e8e8d, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince853FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
        }

        jint DormandPrince853FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
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
        static PyObject *t_DormandPrince853FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegrator_of_(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static int t_DormandPrince853FieldIntegrator_init_(t_DormandPrince853FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegrator_getA(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getB(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getC(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getOrder(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_get__a(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__b(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__c(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__order(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__parameters_(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, order),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegrator)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegrator_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegrator, t_DormandPrince853FieldIntegrator, DormandPrince853FieldIntegrator);
        PyObject *t_DormandPrince853FieldIntegrator::wrap_Object(const DormandPrince853FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegrator *self = (t_DormandPrince853FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegrator *self = (t_DormandPrince853FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegrator), &PY_TYPE_DEF(DormandPrince853FieldIntegrator), module, "DormandPrince853FieldIntegrator", 0);
        }

        void t_DormandPrince853FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "class_", make_descriptor(DormandPrince853FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegrator::wrap_Object(DormandPrince853FieldIntegrator(((t_DormandPrince853FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegrator_of_(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegrator_init_(t_DormandPrince853FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              DormandPrince853FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince853FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              DormandPrince853FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince853FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_DormandPrince853FieldIntegrator_getA(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getB(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getC(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getOrder(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegrator_get__parameters_(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__a(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__b(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__c(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__order(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *LeastSquaresTleGenerationAlgorithm::class$ = NULL;
            jmethodID *LeastSquaresTleGenerationAlgorithm::mids$ = NULL;
            bool LeastSquaresTleGenerationAlgorithm::live$ = false;
            jint LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS = (jint) 0;

            jclass LeastSquaresTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_9fabf13e0b4a63c7] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_d1897b6bbe0a4251] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_e9ff15b430a2bfc5] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_getRms_557b8123390d8d0c] = env->getMethodID(cls, "getRms", "()D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9fabf13e0b4a63c7, a0, a1.this$, a2.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_d1897b6bbe0a4251], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_e9ff15b430a2bfc5], a0.this$, a1.this$));
            }

            jdouble LeastSquaresTleGenerationAlgorithm::getRms() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRms_557b8123390d8d0c]);
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
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_LeastSquaresTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresTleGenerationAlgorithm, rms),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, generate, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, getRms, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_LeastSquaresTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_LeastSquaresTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresTleGenerationAlgorithm, t_LeastSquaresTleGenerationAlgorithm, LeastSquaresTleGenerationAlgorithm);

            void t_LeastSquaresTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresTleGenerationAlgorithm), &PY_TYPE_DEF(LeastSquaresTleGenerationAlgorithm), module, "LeastSquaresTleGenerationAlgorithm", 0);
            }

            void t_LeastSquaresTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "class_", make_descriptor(LeastSquaresTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_LeastSquaresTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(LeastSquaresTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "DEFAULT_MAX_ITERATIONS", make_descriptor(LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS));
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresTleGenerationAlgorithm::wrap_Object(LeastSquaresTleGenerationAlgorithm(((t_LeastSquaresTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = LeastSquaresTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jint a0;
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "Ikk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0, a1, a2));
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

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args)
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

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRms());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRms());
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
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray$ExpansionMode::class$ = NULL;
      jmethodID *ResizableDoubleArray$ExpansionMode::mids$ = NULL;
      bool ResizableDoubleArray$ExpansionMode::live$ = false;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::ADDITIVE = NULL;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE = NULL;

      jclass ResizableDoubleArray$ExpansionMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray$ExpansionMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_1e6e93add2b577b2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_values_ba69dfce75e1a513] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "ADDITIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          MULTIPLICATIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "MULTIPLICATIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray$ExpansionMode ResizableDoubleArray$ExpansionMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ResizableDoubleArray$ExpansionMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1e6e93add2b577b2], a0.this$));
      }

      JArray< ResizableDoubleArray$ExpansionMode > ResizableDoubleArray$ExpansionMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ResizableDoubleArray$ExpansionMode >(env->callStaticObjectMethod(cls, mids$[mid_values_ba69dfce75e1a513]));
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
      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data);
      static PyGetSetDef t_ResizableDoubleArray$ExpansionMode__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray$ExpansionMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray$ExpansionMode__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray$ExpansionMode)[] = {
        { Py_tp_methods, t_ResizableDoubleArray$ExpansionMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ResizableDoubleArray$ExpansionMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray$ExpansionMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray$ExpansionMode, t_ResizableDoubleArray$ExpansionMode, ResizableDoubleArray$ExpansionMode);
      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_Object(const ResizableDoubleArray$ExpansionMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ResizableDoubleArray$ExpansionMode::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray$ExpansionMode), &PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode), module, "ResizableDoubleArray$ExpansionMode", 0);
      }

      void t_ResizableDoubleArray$ExpansionMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "class_", make_descriptor(ResizableDoubleArray$ExpansionMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "wrapfn_", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(ResizableDoubleArray$ExpansionMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "ADDITIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::ADDITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "MULTIPLICATIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE)));
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray$ExpansionMode::wrap_Object(ResizableDoubleArray$ExpansionMode(((t_ResizableDoubleArray$ExpansionMode *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ResizableDoubleArray$ExpansionMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::valueOf(a0));
          return t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type)
      {
        JArray< ResizableDoubleArray$ExpansionMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::values());
        return JArray<jobject>(result.this$).wrap(t_ResizableDoubleArray$ExpansionMode::wrap_jobject);
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *FieldODEIntegratorBuilder::mids$ = NULL;
        bool FieldODEIntegratorBuilder::live$ = false;

        jclass FieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_da5761494991d7f4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_da5761494991d7f4], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_FieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_FieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEIntegratorBuilder, t_FieldODEIntegratorBuilder, FieldODEIntegratorBuilder);
        PyObject *t_FieldODEIntegratorBuilder::wrap_Object(const FieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEIntegratorBuilder), &PY_TYPE_DEF(FieldODEIntegratorBuilder), module, "FieldODEIntegratorBuilder", 0);
        }

        void t_FieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "class_", make_descriptor(FieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_FieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_FieldODEIntegratorBuilder::wrap_Object(FieldODEIntegratorBuilder(((t_FieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
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
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonAbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonAbstractGNSSAttitudeProvider::mids$ = NULL;
        bool PythonAbstractGNSSAttitudeProvider::live$ = false;

        jclass PythonAbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9803b569bb20b21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGNSSAttitudeProvider::PythonAbstractGNSSAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_c9803b569bb20b21, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractGNSSAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace attitude {
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args);
        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonAbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonAbstractGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGNSSAttitudeProvider, t_PythonAbstractGNSSAttitudeProvider, PythonAbstractGNSSAttitudeProvider);

        void t_PythonAbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGNSSAttitudeProvider), &PY_TYPE_DEF(PythonAbstractGNSSAttitudeProvider), module, "PythonAbstractGNSSAttitudeProvider", 1);
        }

        void t_PythonAbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "class_", make_descriptor(PythonAbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGNSSAttitudeProvider::wrap_Object(PythonAbstractGNSSAttitudeProvider(((t_PythonAbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          PythonAbstractGNSSAttitudeProvider object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractGNSSAttitudeProvider(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data)
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
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
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
            mids$[mid_init$_65a89f7e11326edb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_72bb5fd9248459ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_3bbaee0cd134e64d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_51ca8416b8041192] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_30a09973fa93a380] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_1abc9dfeae04dcd1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_76469dc8b3177e2d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_5480bf14a8e1b439] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_c1ce6d7a4b6f55df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_6c46459a430a1264] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_a4ba5fe6da24ec6b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_3b89d9d09fc7e150] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_8e7c787222eb0372] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_4aa17fceee61a1fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_7650e78f6078508c] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_a29df85448b17ec0] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_46a72092c059ae31] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_getCk0_a53a7513ecedada2] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getM2_557b8123390d8d0c] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getReferenceRadius_557b8123390d8d0c] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_0788a2ada99e6ef9] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_cd59a3a5d9eb366e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_c13195962bdcee40] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_resetIntermediateState_ac5c93ef3cbab63b] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_createHarvester_5f0409a66c29e9c1] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            M2 = env->getStaticDoubleField(cls, "M2");
            M2_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "M2_NAME", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_65a89f7e11326edb, a0.this$, a1.this$, a2)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_72bb5fd9248459ec, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3bbaee0cd134e64d, a0.this$, a1, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_51ca8416b8041192, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_30a09973fa93a380, a0.this$, a1.this$, a2, a3.this$, a4)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_1abc9dfeae04dcd1, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_76469dc8b3177e2d, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5480bf14a8e1b439, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c1ce6d7a4b6f55df, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6c46459a430a1264, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a4ba5fe6da24ec6b, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3b89d9d09fc7e150, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8e7c787222eb0372, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_4aa17fceee61a1fc, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_7650e78f6078508c], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_a29df85448b17ec0], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_46a72092c059ae31], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > BrouwerLyddanePropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_a53a7513ecedada2]));
        }

        jdouble BrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_557b8123390d8d0c]);
        }

        jdouble BrouwerLyddanePropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::java::util::List BrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        jdouble BrouwerLyddanePropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_557b8123390d8d0c]);
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_0788a2ada99e6ef9], a0.this$));
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_cd59a3a5d9eb366e], a0.this$, a1.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_c13195962bdcee40], a0.this$, a1.this$, a2, a3);
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
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::mids$ = NULL;
        bool AttitudeEphemerisFile$SatelliteAttitudeEphemeris::live$ = false;

        jclass AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_b44a04493534d299] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_b44a04493534d299]));
        }

        ::java::lang::String AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
        }

        ::java::util::List AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, stop),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, AttitudeEphemerisFile$SatelliteAttitudeEphemeris);
        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(const AttitudeEphemerisFile$SatelliteAttitudeEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), &PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), module, "AttitudeEphemerisFile$SatelliteAttitudeEphemeris", 0);
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "class_", make_descriptor(AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(AttitudeEphemerisFile$SatelliteAttitudeEphemeris(((t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
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
#include "org/hipparchus/linear/CholeskyDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_a691527537def442] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DD)V");
          mids$[mid_getDeterminant_557b8123390d8d0c] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_70a207fcbc031df2] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_70a207fcbc031df2] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_ccd666b17ae2e6eb] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD");
          DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a691527537def442, a0.this$, a1, a2)) {}

      jdouble CholeskyDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_557b8123390d8d0c]);
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ccd666b17ae2e6eb]));
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
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmWriter::class$ = NULL;
          jmethodID *NdmWriter::mids$ = NULL;
          bool NdmWriter::live$ = false;

          jclass NdmWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b100e6078d2dd78d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/WriterBuilder;)V");
              mids$[mid_writeComment_39c06d862a52ffa0] = env->getMethodID(cls, "writeComment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Ljava/lang/String;)V");
              mids$[mid_writeConstituent_f246fa1b4daafa07] = env->getMethodID(cls, "writeConstituent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
              mids$[mid_writeMessage_b795c6a8fe11be54] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/Ndm;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NdmWriter::NdmWriter(const ::org::orekit::files::ccsds::ndm::WriterBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b100e6078d2dd78d, a0.this$)) {}

          void NdmWriter::writeComment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeComment_39c06d862a52ffa0], a0.this$, a1.this$);
          }

          void NdmWriter::writeConstituent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeConstituent_f246fa1b4daafa07], a0.this$, a1.this$);
          }

          void NdmWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::Ndm & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeMessage_b795c6a8fe11be54], a0.this$, a1.this$);
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
          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args);

          static PyMethodDef t_NdmWriter__methods_[] = {
            DECLARE_METHOD(t_NdmWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, writeComment, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeConstituent, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeMessage, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmWriter)[] = {
            { Py_tp_methods, t_NdmWriter__methods_ },
            { Py_tp_init, (void *) t_NdmWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmWriter, t_NdmWriter, NdmWriter);

          void t_NdmWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmWriter), &PY_TYPE_DEF(NdmWriter), module, "NdmWriter", 0);
          }

          void t_NdmWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "class_", make_descriptor(NdmWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "wrapfn_", make_descriptor(t_NdmWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmWriter::initializeClass, 1)))
              return NULL;
            return t_NdmWriter::wrap_Object(NdmWriter(((t_NdmWriter *) arg)->object.this$));
          }
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::ndm::WriterBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            NdmWriter object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::WriterBuilder::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_WriterBuilder::parameters_))
            {
              INT_CALL(object = NdmWriter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeComment(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeComment", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
            {
              OBJ_CALL(self->object.writeConstituent(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeConstituent", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::Ndm a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::Ndm::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeMessage(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggersResetter::class$ = NULL;
          jmethodID *ManeuverTriggersResetter::mids$ = NULL;
          bool ManeuverTriggersResetter::live$ = false;

          jclass ManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_45bf76e836befe86] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_2c4cc16b11f79a6c] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggersResetter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
          }

          void ManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_45bf76e836befe86], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState ManeuverTriggersResetter::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_2c4cc16b11f79a6c], a0.this$));
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
          static PyObject *t_ManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggersResetter_init(t_ManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_ManeuverTriggersResetter_maneuverTriggered(t_ManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_ManeuverTriggersResetter_resetState(t_ManeuverTriggersResetter *self, PyObject *arg);

          static PyMethodDef t_ManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, resetState, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_ManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggersResetter, t_ManeuverTriggersResetter, ManeuverTriggersResetter);

          void t_ManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggersResetter), &PY_TYPE_DEF(ManeuverTriggersResetter), module, "ManeuverTriggersResetter", 0);
          }

          void t_ManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "class_", make_descriptor(ManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "wrapfn_", make_descriptor(t_ManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggersResetter::wrap_Object(ManeuverTriggersResetter(((t_ManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggersResetter_init(t_ManeuverTriggersResetter *self, PyObject *args)
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

          static PyObject *t_ManeuverTriggersResetter_maneuverTriggered(t_ManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggersResetter_resetState(t_ManeuverTriggersResetter *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldSpacecraftStateInterpolator.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/TimeStampedField.h"
#include "java/util/Optional.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftStateInterpolator::class$ = NULL;
      jmethodID *FieldSpacecraftStateInterpolator::mids$ = NULL;
      bool FieldSpacecraftStateInterpolator::live$ = false;

      jclass FieldSpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_03d00ffd0ee81fe0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_e69fe3991d4122f6] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_3eb98fb434e9f71a] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_93057eaba5c5145b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_08bab9dd5568148d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAbsPVAInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getNbInterpolationPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getOrbitInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_0d9551367f7ecdef] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_8216054f5ace4033] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_interpolate_d78defbfa7b71041] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/FieldSpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_03d00ffd0ee81fe0, a0, a1.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_e69fe3991d4122f6, a0, a1.this$, a2.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_3eb98fb434e9f71a, a0, a1, a2.this$, a3.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_93057eaba5c5145b, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1, const ::org::orekit::time::FieldTimeInterpolator & a2, const ::org::orekit::time::FieldTimeInterpolator & a3, const ::org::orekit::time::FieldTimeInterpolator & a4, const ::org::orekit::time::FieldTimeInterpolator & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_08bab9dd5568148d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_d0ccac9b4c6bdd55]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_d0ccac9b4c6bdd55]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_d0ccac9b4c6bdd55]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_d0ccac9b4c6bdd55]));
      }

      jint FieldSpacecraftStateInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_412668abc8d889e9]);
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_d0ccac9b4c6bdd55]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_6c9bc0a928c56d4e]));
      }

      ::java::util::List FieldSpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_0d9551367f7ecdef]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldSpacecraftStateInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_8216054f5ace4033], a0.this$, a1.this$));
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
      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getNbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__nbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_FieldSpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getNbInterpolationPoints, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_FieldSpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_FieldSpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftStateInterpolator, t_FieldSpacecraftStateInterpolator, FieldSpacecraftStateInterpolator);
      PyObject *t_FieldSpacecraftStateInterpolator::wrap_Object(const FieldSpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftStateInterpolator), &PY_TYPE_DEF(FieldSpacecraftStateInterpolator), module, "FieldSpacecraftStateInterpolator", 0);
      }

      void t_FieldSpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "class_", make_descriptor(FieldSpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_FieldSpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftStateInterpolator::wrap_Object(FieldSpacecraftStateInterpolator(((t_FieldSpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2));
              self->object = object;
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
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
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
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldTimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::FieldTimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::FieldTimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getNbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNbInterpolationPoints());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getNbInterpolationPoints", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__nbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data)
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
#include "org/orekit/attitudes/LofOffset.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
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
          mids$[mid_init$_a8a7b8ba1d2b6f0d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_9142b1f90e628d63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;DDD)V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_85bb0a19efdadc1d] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_5c74bfcf2d42825a] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a8a7b8ba1d2b6f0d, a0.this$, a1.this$)) {}

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9142b1f90e628d63, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_85bb0a19efdadc1d], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_5c74bfcf2d42825a], a0.this$, a1.this$, a2.this$));
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
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *DataUsed::class$ = NULL;
        jmethodID *DataUsed::mids$ = NULL;
        bool DataUsed::live$ = false;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE = NULL;
        DataUsed *DataUsed::MIXED = NULL;
        DataUsed *DataUsed::ORBIT = NULL;
        DataUsed *DataUsed::SATELLITE_LASER_RANGING = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::UNDIFFERENTIATED_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::UNDIFFERENTIATED_CODE_PHASE = NULL;

        jclass DataUsed::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/DataUsed");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_3cffd47377eca18a] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_5ef1d1163e3cb4d1] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/lang/String;C)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_valueOf_7bddb3b32daf38fa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_values_6f6c5e41dcb65237] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/DataUsed;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            MIXED = new DataUsed(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/DataUsed;"));
            ORBIT = new DataUsed(env->getStaticObjectField(cls, "ORBIT", "Lorg/orekit/files/sp3/DataUsed;"));
            SATELLITE_LASER_RANGING = new DataUsed(env->getStaticObjectField(cls, "SATELLITE_LASER_RANGING", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            UNDIFFERENTIATED_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "UNDIFFERENTIATED_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            UNDIFFERENTIATED_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "UNDIFFERENTIATED_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String DataUsed::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_3cffd47377eca18a]));
        }

        DataUsed DataUsed::parse(const ::java::lang::String & a0, const ::java::lang::String & a1, jchar a2)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_parse_5ef1d1163e3cb4d1], a0.this$, a1.this$, a2));
        }

        DataUsed DataUsed::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7bddb3b32daf38fa], a0.this$));
        }

        JArray< DataUsed > DataUsed::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< DataUsed >(env->callStaticObjectMethod(cls, mids$[mid_values_6f6c5e41dcb65237]));
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
        static PyObject *t_DataUsed_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DataUsed_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DataUsed_of_(t_DataUsed *self, PyObject *args);
        static PyObject *t_DataUsed_getKey(t_DataUsed *self);
        static PyObject *t_DataUsed_parse(PyTypeObject *type, PyObject *args);
        static PyObject *t_DataUsed_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_DataUsed_values(PyTypeObject *type);
        static PyObject *t_DataUsed_get__key(t_DataUsed *self, void *data);
        static PyObject *t_DataUsed_get__parameters_(t_DataUsed *self, void *data);
        static PyGetSetDef t_DataUsed__fields_[] = {
          DECLARE_GET_FIELD(t_DataUsed, key),
          DECLARE_GET_FIELD(t_DataUsed, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DataUsed__methods_[] = {
          DECLARE_METHOD(t_DataUsed, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, of_, METH_VARARGS),
          DECLARE_METHOD(t_DataUsed, getKey, METH_NOARGS),
          DECLARE_METHOD(t_DataUsed, parse, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DataUsed)[] = {
          { Py_tp_methods, t_DataUsed__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DataUsed__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DataUsed)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(DataUsed, t_DataUsed, DataUsed);
        PyObject *t_DataUsed::wrap_Object(const DataUsed& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DataUsed::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DataUsed *self = (t_DataUsed *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DataUsed::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DataUsed::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DataUsed *self = (t_DataUsed *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DataUsed::install(PyObject *module)
        {
          installType(&PY_TYPE(DataUsed), &PY_TYPE_DEF(DataUsed), module, "DataUsed", 0);
        }

        void t_DataUsed::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "class_", make_descriptor(DataUsed::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "wrapfn_", make_descriptor(t_DataUsed::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "boxfn_", make_descriptor(boxObject));
          env->getClass(DataUsed::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "MIXED", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "ORBIT", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::ORBIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "SATELLITE_LASER_RANGING", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::SATELLITE_LASER_RANGING)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "UNDIFFERENTIATED_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::UNDIFFERENTIATED_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "UNDIFFERENTIATED_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::UNDIFFERENTIATED_CODE_PHASE)));
        }

        static PyObject *t_DataUsed_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DataUsed::initializeClass, 1)))
            return NULL;
          return t_DataUsed::wrap_Object(DataUsed(((t_DataUsed *) arg)->object.this$));
        }
        static PyObject *t_DataUsed_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DataUsed::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DataUsed_of_(t_DataUsed *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DataUsed_getKey(t_DataUsed *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_DataUsed_parse(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jchar a2;
          DataUsed result((jobject) NULL);

          if (!parseArgs(args, "ssC", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::parse(a0, a1, a2));
            return t_DataUsed::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", args);
          return NULL;
        }

        static PyObject *t_DataUsed_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          DataUsed result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::valueOf(a0));
            return t_DataUsed::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_DataUsed_values(PyTypeObject *type)
        {
          JArray< DataUsed > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::values());
          return JArray<jobject>(result.this$).wrap(t_DataUsed::wrap_jobject);
        }
        static PyObject *t_DataUsed_get__parameters_(t_DataUsed *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DataUsed_get__key(t_DataUsed *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getKey());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AdapterPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator::class$ = NULL;
        jmethodID *AdapterPropagator::mids$ = NULL;
        bool AdapterPropagator::live$ = false;

        jclass AdapterPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_52713bb4a21e1f43] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_addEffect_3931de52c7764f12] = env->getMethodID(cls, "addEffect", "(Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;)V");
            mids$[mid_getEffects_0d9551367f7ecdef] = env->getMethodID(cls, "getEffects", "()Ljava/util/List;");
            mids$[mid_getInitialState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPropagator_8d6cf3295e825916] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_basicPropagate_15e0d02372b1347b] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterPropagator::AdapterPropagator(const ::org::orekit::propagation::Propagator & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_52713bb4a21e1f43, a0.this$)) {}

        void AdapterPropagator::addEffect(const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEffect_3931de52c7764f12], a0.this$);
        }

        ::java::util::List AdapterPropagator::getEffects() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEffects_0d9551367f7ecdef]));
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_15e85d5301b90ef8]));
        }

        ::org::orekit::propagation::Propagator AdapterPropagator::getPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_8d6cf3295e825916]));
        }

        void AdapterPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
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
        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg);
        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data);
        static PyGetSetDef t_AdapterPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterPropagator, effects),
          DECLARE_GET_FIELD(t_AdapterPropagator, initialState),
          DECLARE_GET_FIELD(t_AdapterPropagator, propagator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterPropagator__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, addEffect, METH_O),
          DECLARE_METHOD(t_AdapterPropagator, getEffects, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AdapterPropagator, getPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator)[] = {
          { Py_tp_methods, t_AdapterPropagator__methods_ },
          { Py_tp_init, (void *) t_AdapterPropagator_init_ },
          { Py_tp_getset, t_AdapterPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator, t_AdapterPropagator, AdapterPropagator);

        void t_AdapterPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator), &PY_TYPE_DEF(AdapterPropagator), module, "AdapterPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "DifferentialEffect", make_descriptor(&PY_TYPE_DEF(AdapterPropagator$DifferentialEffect)));
        }

        void t_AdapterPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "class_", make_descriptor(AdapterPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "wrapfn_", make_descriptor(t_AdapterPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator::wrap_Object(AdapterPropagator(((t_AdapterPropagator *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::Propagator a0((jobject) NULL);
          AdapterPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            INT_CALL(object = AdapterPropagator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEffect(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEffect", arg);
          return NULL;
        }

        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::PY_TYPE(AdapterPropagator$DifferentialEffect));
        }

        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Number.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Number::class$ = NULL;
    jmethodID *Number::mids$ = NULL;
    bool Number::live$ = false;

    jclass Number::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Number");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_byteValue_acadfed42a0dbd0d] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_shortValue_2554afc868a7ba2a] = env->getMethodID(cls, "shortValue", "()S");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Number::Number() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    jbyte Number::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_acadfed42a0dbd0d]);
    }

    jdouble Number::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
    }

    jfloat Number::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
    }

    jint Number::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
    }

    jlong Number::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
    }

    jshort Number::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_2554afc868a7ba2a]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Number_byteValue(t_Number *self);
    static PyObject *t_Number_doubleValue(t_Number *self);
    static PyObject *t_Number_floatValue(t_Number *self);
    static PyObject *t_Number_intValue(t_Number *self);
    static PyObject *t_Number_longValue(t_Number *self);
    static PyObject *t_Number_shortValue(t_Number *self);

    static PyMethodDef t_Number__methods_[] = {
      DECLARE_METHOD(t_Number, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, byteValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, doubleValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, floatValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, intValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, longValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, shortValue, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Number)[] = {
      { Py_tp_methods, t_Number__methods_ },
      { Py_tp_init, (void *) t_Number_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Number)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Number, t_Number, Number);

    void t_Number::install(PyObject *module)
    {
      installType(&PY_TYPE(Number), &PY_TYPE_DEF(Number), module, "Number", 0);
    }

    void t_Number::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "class_", make_descriptor(Number::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "wrapfn_", make_descriptor(t_Number::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Number::initializeClass, 1)))
        return NULL;
      return t_Number::wrap_Object(Number(((t_Number *) arg)->object.this$));
    }
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Number::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds)
    {
      Number object((jobject) NULL);

      INT_CALL(object = Number());
      self->object = object;

      return 0;
    }

    static PyObject *t_Number_byteValue(t_Number *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.byteValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_doubleValue(t_Number *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.doubleValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_floatValue(t_Number *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.floatValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_intValue(t_Number *self)
    {
      jint result;
      OBJ_CALL(result = self->object.intValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_longValue(t_Number *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.longValue());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Number_shortValue(t_Number *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.shortValue());
      return PyLong_FromLong((long) result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System.h"
#include "java/util/Map.h"
#include "java/io/InputStream.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/System$Logger.h"
#include "java/io/Console.h"
#include "java/util/Properties.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/SecurityManager.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System::class$ = NULL;
    jmethodID *System::mids$ = NULL;
    bool System::live$ = false;
    ::java::io::PrintStream *System::err = NULL;
    ::java::io::InputStream *System::in = NULL;
    ::java::io::PrintStream *System::out = NULL;

    jclass System::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System");

        mids$ = new jmethodID[max_mid];
        mids$[mid_arraycopy_9c85428faa953ae4] = env->getStaticMethodID(cls, "arraycopy", "(Ljava/lang/Object;ILjava/lang/Object;II)V");
        mids$[mid_clearProperty_60bb1b490b673cbf] = env->getStaticMethodID(cls, "clearProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_console_d6f040d5f1d89911] = env->getStaticMethodID(cls, "console", "()Ljava/io/Console;");
        mids$[mid_currentTimeMillis_9e26256fb0d384a2] = env->getStaticMethodID(cls, "currentTimeMillis", "()J");
        mids$[mid_exit_a3da1a935cb37f7b] = env->getStaticMethodID(cls, "exit", "(I)V");
        mids$[mid_gc_0640e6acf969ed28] = env->getStaticMethodID(cls, "gc", "()V");
        mids$[mid_getLogger_04e24e1cf8b5e4f4] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;)Ljava/lang/System$Logger;");
        mids$[mid_getLogger_959e52365d007adc] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;");
        mids$[mid_getProperties_61e0a00d9f74111b] = env->getStaticMethodID(cls, "getProperties", "()Ljava/util/Properties;");
        mids$[mid_getProperty_60bb1b490b673cbf] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_495add03b8c9417b] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getSecurityManager_5be429c4111838b6] = env->getStaticMethodID(cls, "getSecurityManager", "()Ljava/lang/SecurityManager;");
        mids$[mid_getenv_1e62c2f73fbdd1c4] = env->getStaticMethodID(cls, "getenv", "()Ljava/util/Map;");
        mids$[mid_getenv_60bb1b490b673cbf] = env->getStaticMethodID(cls, "getenv", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_identityHashCode_38a1845c8d44a9b0] = env->getStaticMethodID(cls, "identityHashCode", "(Ljava/lang/Object;)I");
        mids$[mid_lineSeparator_3cffd47377eca18a] = env->getStaticMethodID(cls, "lineSeparator", "()Ljava/lang/String;");
        mids$[mid_load_f5ffdf29129ef90a] = env->getStaticMethodID(cls, "load", "(Ljava/lang/String;)V");
        mids$[mid_loadLibrary_f5ffdf29129ef90a] = env->getStaticMethodID(cls, "loadLibrary", "(Ljava/lang/String;)V");
        mids$[mid_mapLibraryName_60bb1b490b673cbf] = env->getStaticMethodID(cls, "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_nanoTime_9e26256fb0d384a2] = env->getStaticMethodID(cls, "nanoTime", "()J");
        mids$[mid_runFinalization_0640e6acf969ed28] = env->getStaticMethodID(cls, "runFinalization", "()V");
        mids$[mid_setErr_bbeebf9dbb580a3d] = env->getStaticMethodID(cls, "setErr", "(Ljava/io/PrintStream;)V");
        mids$[mid_setIn_115bc9fcd812647a] = env->getStaticMethodID(cls, "setIn", "(Ljava/io/InputStream;)V");
        mids$[mid_setOut_bbeebf9dbb580a3d] = env->getStaticMethodID(cls, "setOut", "(Ljava/io/PrintStream;)V");
        mids$[mid_setProperties_23f27d9a9ce3d8dc] = env->getStaticMethodID(cls, "setProperties", "(Ljava/util/Properties;)V");
        mids$[mid_setProperty_495add03b8c9417b] = env->getStaticMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_setSecurityManager_7edea743404d3596] = env->getStaticMethodID(cls, "setSecurityManager", "(Ljava/lang/SecurityManager;)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new ::java::io::PrintStream(env->getStaticObjectField(cls, "err", "Ljava/io/PrintStream;"));
        in = new ::java::io::InputStream(env->getStaticObjectField(cls, "in", "Ljava/io/InputStream;"));
        out = new ::java::io::PrintStream(env->getStaticObjectField(cls, "out", "Ljava/io/PrintStream;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void System::arraycopy(const ::java::lang::Object & a0, jint a1, const ::java::lang::Object & a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_arraycopy_9c85428faa953ae4], a0.this$, a1, a2.this$, a3, a4);
    }

    ::java::lang::String System::clearProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_clearProperty_60bb1b490b673cbf], a0.this$));
    }

    ::java::io::Console System::console()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::Console(env->callStaticObjectMethod(cls, mids$[mid_console_d6f040d5f1d89911]));
    }

    jlong System::currentTimeMillis()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_currentTimeMillis_9e26256fb0d384a2]);
    }

    void System::exit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_exit_a3da1a935cb37f7b], a0);
    }

    void System::gc()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_gc_0640e6acf969ed28]);
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_04e24e1cf8b5e4f4], a0.this$));
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0, const ::java::util::ResourceBundle & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_959e52365d007adc], a0.this$, a1.this$));
    }

    ::java::util::Properties System::getProperties()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Properties(env->callStaticObjectMethod(cls, mids$[mid_getProperties_61e0a00d9f74111b]));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_60bb1b490b673cbf], a0.this$));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_495add03b8c9417b], a0.this$, a1.this$));
    }

    ::java::lang::SecurityManager System::getSecurityManager()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::SecurityManager(env->callStaticObjectMethod(cls, mids$[mid_getSecurityManager_5be429c4111838b6]));
    }

    ::java::util::Map System::getenv()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getenv_1e62c2f73fbdd1c4]));
    }

    ::java::lang::String System::getenv(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getenv_60bb1b490b673cbf], a0.this$));
    }

    jint System::identityHashCode(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_identityHashCode_38a1845c8d44a9b0], a0.this$);
    }

    ::java::lang::String System::lineSeparator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lineSeparator_3cffd47377eca18a]));
    }

    void System::load(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_load_f5ffdf29129ef90a], a0.this$);
    }

    void System::loadLibrary(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_loadLibrary_f5ffdf29129ef90a], a0.this$);
    }

    ::java::lang::String System::mapLibraryName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_mapLibraryName_60bb1b490b673cbf], a0.this$));
    }

    jlong System::nanoTime()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_nanoTime_9e26256fb0d384a2]);
    }

    void System::runFinalization()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_runFinalization_0640e6acf969ed28]);
    }

    void System::setErr(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setErr_bbeebf9dbb580a3d], a0.this$);
    }

    void System::setIn(const ::java::io::InputStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setIn_115bc9fcd812647a], a0.this$);
    }

    void System::setOut(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setOut_bbeebf9dbb580a3d], a0.this$);
    }

    void System::setProperties(const ::java::util::Properties & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setProperties_23f27d9a9ce3d8dc], a0.this$);
    }

    ::java::lang::String System::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_setProperty_495add03b8c9417b], a0.this$, a1.this$));
    }

    void System::setSecurityManager(const ::java::lang::SecurityManager & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setSecurityManager_7edea743404d3596], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_console(PyTypeObject *type);
    static PyObject *t_System_currentTimeMillis(PyTypeObject *type);
    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_gc(PyTypeObject *type);
    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getProperties(PyTypeObject *type);
    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getSecurityManager(PyTypeObject *type);
    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_lineSeparator(PyTypeObject *type);
    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_nanoTime(PyTypeObject *type);
    static PyObject *t_System_runFinalization(PyTypeObject *type);
    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_get__env(t_System *self, void *data);
    static int t_System_set__err(t_System *self, PyObject *arg, void *data);
    static int t_System_set__in(t_System *self, PyObject *arg, void *data);
    static int t_System_set__out(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__properties(t_System *self, void *data);
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__securityManager(t_System *self, void *data);
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data);
    static PyGetSetDef t_System__fields_[] = {
      DECLARE_GET_FIELD(t_System, env),
      DECLARE_SET_FIELD(t_System, err),
      DECLARE_SET_FIELD(t_System, in),
      DECLARE_SET_FIELD(t_System, out),
      DECLARE_GETSET_FIELD(t_System, properties),
      DECLARE_GETSET_FIELD(t_System, securityManager),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System__methods_[] = {
      DECLARE_METHOD(t_System, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, arraycopy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, clearProperty, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, console, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, currentTimeMillis, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, exit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, gc, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getLogger, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperties, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getSecurityManager, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getenv, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, identityHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, lineSeparator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, load, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, loadLibrary, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, mapLibraryName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, nanoTime, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, runFinalization, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setErr, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setIn, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setOut, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperties, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setSecurityManager, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System)[] = {
      { Py_tp_methods, t_System__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System, t_System, System);

    void t_System::install(PyObject *module)
    {
      installType(&PY_TYPE(System), &PY_TYPE_DEF(System), module, "System", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "Logger", make_descriptor(&PY_TYPE_DEF(System$Logger)));
    }

    void t_System::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "class_", make_descriptor(System::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "wrapfn_", make_descriptor(t_System::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "boxfn_", make_descriptor(boxObject));
      env->getClass(System::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "err", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::err)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "in", make_descriptor(::java::io::t_InputStream::wrap_Object(*System::in)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "out", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::out)));
    }

    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System::initializeClass, 1)))
        return NULL;
      return t_System::wrap_Object(System(((t_System *) arg)->object.this$));
    }
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint a1;
      ::java::lang::Object a2((jobject) NULL);
      jint a3;
      jint a4;

      if (!parseArgs(args, "oIoII", &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(::java::lang::System::arraycopy(a0, a1, a2, a3, a4));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "arraycopy", args);
      return NULL;
    }

    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::clearProperty(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "clearProperty", arg);
      return NULL;
    }

    static PyObject *t_System_console(PyTypeObject *type)
    {
      ::java::io::Console result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::console());
      return ::java::io::t_Console::wrap_Object(result);
    }

    static PyObject *t_System_currentTimeMillis(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::currentTimeMillis());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(::java::lang::System::exit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "exit", arg);
      return NULL;
    }

    static PyObject *t_System_gc(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::gc());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0, a1));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLogger", args);
      return NULL;
    }

    static PyObject *t_System_getProperties(PyTypeObject *type)
    {
      ::java::util::Properties result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getProperties());
      return ::java::util::t_Properties::wrap_Object(result);
    }

    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getProperty", args);
      return NULL;
    }

    static PyObject *t_System_getSecurityManager(PyTypeObject *type)
    {
      ::java::lang::SecurityManager result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(result);
    }

    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = ::java::lang::System::getenv());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
        }
        break;
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getenv(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getenv", args);
      return NULL;
    }

    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::identityHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "identityHashCode", arg);
      return NULL;
    }

    static PyObject *t_System_lineSeparator(PyTypeObject *type)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::lineSeparator());
      return j2p(result);
    }

    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::load(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "load", arg);
      return NULL;
    }

    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::loadLibrary(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "loadLibrary", arg);
      return NULL;
    }

    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::mapLibraryName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "mapLibraryName", arg);
      return NULL;
    }

    static PyObject *t_System_nanoTime(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::nanoTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_runFinalization(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::runFinalization());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setErr(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setErr", arg);
      return NULL;
    }

    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setIn(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setIn", arg);
      return NULL;
    }

    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setOut(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setOut", arg);
      return NULL;
    }

    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Properties a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Properties::initializeClass, &a0, &p0, ::java::util::t_Properties::parameters_))
      {
        OBJ_CALL(::java::lang::System::setProperties(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setProperties", arg);
      return NULL;
    }

    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::System::setProperty(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "setProperty", args);
      return NULL;
    }

    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::SecurityManager a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setSecurityManager(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setSecurityManager", arg);
      return NULL;
    }

    static PyObject *t_System_get__env(t_System *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getenv());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static int t_System_set__err(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setErr(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "err", arg);
      return -1;
    }

    static int t_System_set__in(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::InputStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
        {
          INT_CALL(self->object.setIn(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "in", arg);
      return -1;
    }

    static int t_System_set__out(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setOut(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "out", arg);
      return -1;
    }

    static PyObject *t_System_get__properties(t_System *self, void *data)
    {
      ::java::util::Properties value((jobject) NULL);
      OBJ_CALL(value = self->object.getProperties());
      return ::java::util::t_Properties::wrap_Object(value);
    }
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Properties value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Properties::initializeClass, &value))
        {
          INT_CALL(self->object.setProperties(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "properties", arg);
      return -1;
    }

    static PyObject *t_System_get__securityManager(t_System *self, void *data)
    {
      ::java::lang::SecurityManager value((jobject) NULL);
      OBJ_CALL(value = self->object.getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(value);
    }
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::SecurityManager value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &value))
        {
          INT_CALL(self->object.setSecurityManager(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "securityManager", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/LinearLineDatation.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_80c808f44ee4ae1c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DD)V");
            mids$[mid_getDate_8ef471ef852a9678] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_b0b988f941da47d8] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_7e960cd6eee376d8] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearLineDatation::LinearLineDatation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_80c808f44ee4ae1c, a0.this$, a1, a2)) {}

        ::org::orekit::time::AbsoluteDate LinearLineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_8ef471ef852a9678], a0));
        }

        jdouble LinearLineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_b0b988f941da47d8], a0.this$);
        }

        jdouble LinearLineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_7e960cd6eee376d8], a0);
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
#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *IntervalEventTrigger::class$ = NULL;
          jmethodID *IntervalEventTrigger::mids$ = NULL;
          bool IntervalEventTrigger::live$ = false;

          jclass IntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/IntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f9a3e736b2361f6c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFiringIntervalDetector_9cafaf54f10725f9] = env->getMethodID(cls, "getFiringIntervalDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_isFiringOnInitialState_1e4c79a00429445e] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_convertIntervalDetector_590bb38060674b63] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalEventTrigger::IntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_f9a3e736b2361f6c, a0.this$)) {}

          ::java::util::stream::Stream IntervalEventTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
          }

          ::java::util::stream::Stream IntervalEventTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector IntervalEventTrigger::getFiringIntervalDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getFiringIntervalDetector_9cafaf54f10725f9]));
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
          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args);
          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self);
          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data);
          static PyGetSetDef t_IntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalEventTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, firingIntervalDetector),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_IntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFiringIntervalDetector, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalEventTrigger)[] = {
            { Py_tp_methods, t_IntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_IntervalEventTrigger_init_ },
            { Py_tp_getset, t_IntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(IntervalEventTrigger, t_IntervalEventTrigger, IntervalEventTrigger);
          PyObject *t_IntervalEventTrigger::wrap_Object(const IntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalEventTrigger), &PY_TYPE_DEF(IntervalEventTrigger), module, "IntervalEventTrigger", 0);
          }

          void t_IntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "class_", make_descriptor(IntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "wrapfn_", make_descriptor(t_IntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_IntervalEventTrigger::wrap_Object(IntervalEventTrigger(((t_IntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = IntervalEventTrigger(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getFiringIntervalDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getFiringIntervalDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ProcessingState::class$ = NULL;
            jmethodID *ProcessingState::mids$ = NULL;
            bool ProcessingState::live$ = false;

            jclass ProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_processToken_7f6d4ab73f1deb26] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_7f6d4ab73f1deb26], a0.this$);
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
            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg);

            static PyMethodDef t_ProcessingState__methods_[] = {
              DECLARE_METHOD(t_ProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ProcessingState)[] = {
              { Py_tp_methods, t_ProcessingState__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ProcessingState, t_ProcessingState, ProcessingState);

            void t_ProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(ProcessingState), &PY_TYPE_DEF(ProcessingState), module, "ProcessingState", 0);
            }

            void t_ProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "class_", make_descriptor(ProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "wrapfn_", make_descriptor(t_ProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ProcessingState::initializeClass, 1)))
                return NULL;
              return t_ProcessingState::wrap_Object(ProcessingState(((t_ProcessingState *) arg)->object.this$));
            }
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedForm::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedForm::mids$ = NULL;
            bool DSSTJ2SquaredClosedForm::live$ = false;

            jclass DSSTJ2SquaredClosedForm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7bdf9464d81ff38b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getMeanElementRate_6930c150caff50e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_3573019cca22a7a6] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_114c99ef73dfde56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_a9be3da5be85857d] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedForm::DSSTJ2SquaredClosedForm(const ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7bdf9464d81ff38b, a0.this$, a1.this$)) {}

            JArray< jdouble > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_6930c150caff50e0], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3573019cca22a7a6], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554], a0.this$, a1.this$, a2.this$));
            }

            void DSSTJ2SquaredClosedForm::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_114c99ef73dfde56], a0.this$, a1.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9be3da5be85857d], a0.this$, a1.this$);
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
            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self);
            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedForm__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedForm, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedForm__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedForm)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedForm__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedForm_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedForm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedForm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedForm, t_DSSTJ2SquaredClosedForm, DSSTJ2SquaredClosedForm);

            void t_DSSTJ2SquaredClosedForm::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedForm), &PY_TYPE_DEF(DSSTJ2SquaredClosedForm), module, "DSSTJ2SquaredClosedForm", 0);
            }

            void t_DSSTJ2SquaredClosedForm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "class_", make_descriptor(DSSTJ2SquaredClosedForm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedForm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedForm::wrap_Object(DSSTJ2SquaredClosedForm(((t_DSSTJ2SquaredClosedForm *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedForm object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedForm(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonTimeStampedGenerator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedGenerator::class$ = NULL;
      jmethodID *PythonTimeStampedGenerator::mids$ = NULL;
      bool PythonTimeStampedGenerator::live$ = false;

      jclass PythonTimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_generate_c5683b8e06424542] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedGenerator::PythonTimeStampedGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeStampedGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeStampedGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeStampedGenerator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args);
      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self);
      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data);
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data);
      static PyGetSetDef t_PythonTimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedGenerator)[] = {
        { Py_tp_methods, t_PythonTimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedGenerator_init_ },
        { Py_tp_getset, t_PythonTimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedGenerator, t_PythonTimeStampedGenerator, PythonTimeStampedGenerator);
      PyObject *t_PythonTimeStampedGenerator::wrap_Object(const PythonTimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedGenerator), &PY_TYPE_DEF(PythonTimeStampedGenerator), module, "PythonTimeStampedGenerator", 1);
      }

      void t_PythonTimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "class_", make_descriptor(PythonTimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "wrapfn_", make_descriptor(t_PythonTimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonTimeStampedGenerator_generate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedGenerator::wrap_Object(PythonTimeStampedGenerator(((t_PythonTimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedGenerator object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
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

      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data)
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
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TimeSpanEstimatedTroposphericModel::class$ = NULL;
          jmethodID *TimeSpanEstimatedTroposphericModel::mids$ = NULL;
          bool TimeSpanEstimatedTroposphericModel::live$ = false;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_AFTER = NULL;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_BEFORE = NULL;

          jclass TimeSpanEstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f96d1a03a603be44] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;)V");
              mids$[mid_init$_73f1c37454d76b46] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addTroposphericModelValidAfter_476a18f671c64533] = env->getMethodID(cls, "addTroposphericModelValidAfter", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addTroposphericModelValidBefore_476a18f671c64533] = env->getMethodID(cls, "addTroposphericModelValidBefore", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_extractParameters_2a4cb51cb18e4e8b] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_extractParameters_32c7759b5aba450d] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFirstSpan_2a24ed7b7f6cbca3] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTroposphericModel_e45f8fce45533b23] = env->getMethodID(cls, "getTroposphericModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
              DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f96d1a03a603be44, a0.this$)) {}

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_73f1c37454d76b46, a0.this$, a1.this$)) {}

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidAfter(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidAfter_476a18f671c64533], a0.this$, a1.this$);
          }

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidBefore(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidBefore_476a18f671c64533], a0.this$, a1.this$);
          }

          JArray< jdouble > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_2a4cb51cb18e4e8b], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_32c7759b5aba450d], a0.this$, a1.this$));
          }

          ::org::orekit::utils::TimeSpanMap$Span TimeSpanEstimatedTroposphericModel::getFirstSpan() const
          {
            return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_2a24ed7b7f6cbca3]));
          }

          ::java::util::List TimeSpanEstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel TimeSpanEstimatedTroposphericModel::getTroposphericModel(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel(env->callObjectMethod(this$, mids$[mid_getTroposphericModel_e45f8fce45533b23], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement TimeSpanEstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble TimeSpanEstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_TimeSpanEstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, firstSpan),
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSpanEstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidAfter, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidBefore, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, extractParameters, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getFirstSpan, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getTroposphericModel, METH_O),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSpanEstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_TimeSpanEstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_TimeSpanEstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_TimeSpanEstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSpanEstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSpanEstimatedTroposphericModel, t_TimeSpanEstimatedTroposphericModel, TimeSpanEstimatedTroposphericModel);

          void t_TimeSpanEstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSpanEstimatedTroposphericModel), &PY_TYPE_DEF(TimeSpanEstimatedTroposphericModel), module, "TimeSpanEstimatedTroposphericModel", 0);
          }

          void t_TimeSpanEstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "class_", make_descriptor(TimeSpanEstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "wrapfn_", make_descriptor(t_TimeSpanEstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSpanEstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_AFTER", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_AFTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_BEFORE)));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_TimeSpanEstimatedTroposphericModel::wrap_Object(TimeSpanEstimatedTroposphericModel(((t_TimeSpanEstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, &a0))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0, a1));
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidAfter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidAfter", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidBefore(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidBefore", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.extractParameters(a0, a1));
                  return result.wrap();
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.extractParameters(a0, a1));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::models::earth::troposphere::PY_TYPE(EstimatedTroposphericModel));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTroposphericModel(a0));
              return ::org::orekit::models::earth::troposphere::t_EstimatedTroposphericModel::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTroposphericModel", arg);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PropulsionModel::class$ = NULL;
          jmethodID *PropulsionModel::mids$ = NULL;
          bool PropulsionModel::live$ = false;

          jclass PropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_53d7cdec4a9e3cd4] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getAcceleration_28694fea3dbf2005] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getMassDerivatives_810dcb8f9f5d191a] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_4ad317f7598a10a9] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_53d7cdec4a9e3cd4], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_28694fea3dbf2005], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::forces::maneuvers::Control3DVectorCostType PropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9]));
          }

          ::java::util::stream::Stream PropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
          }

          ::java::util::stream::Stream PropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
          }

          jdouble PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_810dcb8f9f5d191a], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_4ad317f7598a10a9], a0.this$, a1.this$));
          }

          ::java::lang::String PropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          void PropulsionModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
          }

          void PropulsionModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        namespace propulsion {
          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg);
          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data);
          static PyGetSetDef t_PropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_PropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_PropulsionModel, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_PropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PropulsionModel)[] = {
            { Py_tp_methods, t_PropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(PropulsionModel, t_PropulsionModel, PropulsionModel);

          void t_PropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PropulsionModel), &PY_TYPE_DEF(PropulsionModel), module, "PropulsionModel", 0);
          }

          void t_PropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "class_", make_descriptor(PropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "wrapfn_", make_descriptor(t_PropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PropulsionModel::wrap_Object(PropulsionModel(((t_PropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAcceleration", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg)
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

          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getMassDerivatives", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
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
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *StepHandlerMultiplexer::class$ = NULL;
        jmethodID *StepHandlerMultiplexer::mids$ = NULL;
        bool StepHandlerMultiplexer::live$ = false;

        jclass StepHandlerMultiplexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/StepHandlerMultiplexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_94f65743c8fc9296] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
            mids$[mid_add_53f2c5a5fdcdc0f4] = env->getMethodID(cls, "add", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_729a66b1e94503de] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_remove_dc90a418e189ba18] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_remove_94f65743c8fc9296] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepHandlerMultiplexer::StepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void StepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_94f65743c8fc9296], a0.this$);
        }

        void StepHandlerMultiplexer::add(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_53f2c5a5fdcdc0f4], a0, a1.this$);
        }

        void StepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        void StepHandlerMultiplexer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8655761ebf04b503], a0.this$);
        }

        ::java::util::List StepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_0d9551367f7ecdef]));
        }

        void StepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_729a66b1e94503de], a0.this$);
        }

        void StepHandlerMultiplexer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_dc90a418e189ba18], a0.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_94f65743c8fc9296], a0.this$);
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
        static PyObject *t_StepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepHandlerMultiplexer_init_(t_StepHandlerMultiplexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepHandlerMultiplexer_add(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_clear(t_StepHandlerMultiplexer *self);
        static PyObject *t_StepHandlerMultiplexer_finish(t_StepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_getHandlers(t_StepHandlerMultiplexer *self);
        static PyObject *t_StepHandlerMultiplexer_handleStep(t_StepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_init(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_remove(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_get__handlers(t_StepHandlerMultiplexer *self, void *data);
        static PyGetSetDef t_StepHandlerMultiplexer__fields_[] = {
          DECLARE_GET_FIELD(t_StepHandlerMultiplexer, handlers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepHandlerMultiplexer__methods_[] = {
          DECLARE_METHOD(t_StepHandlerMultiplexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, add, METH_VARARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, clear, METH_NOARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, finish, METH_O),
          DECLARE_METHOD(t_StepHandlerMultiplexer, getHandlers, METH_NOARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, handleStep, METH_O),
          DECLARE_METHOD(t_StepHandlerMultiplexer, init, METH_VARARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, remove, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepHandlerMultiplexer)[] = {
          { Py_tp_methods, t_StepHandlerMultiplexer__methods_ },
          { Py_tp_init, (void *) t_StepHandlerMultiplexer_init_ },
          { Py_tp_getset, t_StepHandlerMultiplexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepHandlerMultiplexer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepHandlerMultiplexer, t_StepHandlerMultiplexer, StepHandlerMultiplexer);

        void t_StepHandlerMultiplexer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepHandlerMultiplexer), &PY_TYPE_DEF(StepHandlerMultiplexer), module, "StepHandlerMultiplexer", 0);
        }

        void t_StepHandlerMultiplexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "class_", make_descriptor(StepHandlerMultiplexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "wrapfn_", make_descriptor(t_StepHandlerMultiplexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepHandlerMultiplexer::initializeClass, 1)))
            return NULL;
          return t_StepHandlerMultiplexer::wrap_Object(StepHandlerMultiplexer(((t_StepHandlerMultiplexer *) arg)->object.this$));
        }
        static PyObject *t_StepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepHandlerMultiplexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepHandlerMultiplexer_init_(t_StepHandlerMultiplexer *self, PyObject *args, PyObject *kwds)
        {
          StepHandlerMultiplexer object((jobject) NULL);

          INT_CALL(object = StepHandlerMultiplexer());
          self->object = object;

          return 0;
        }

        static PyObject *t_StepHandlerMultiplexer_add(t_StepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.add(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.add(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_clear(t_StepHandlerMultiplexer *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StepHandlerMultiplexer_finish(t_StepHandlerMultiplexer *self, PyObject *arg)
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

        static PyObject *t_StepHandlerMultiplexer_getHandlers(t_StepHandlerMultiplexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::sampling::PY_TYPE(OrekitStepHandler));
        }

        static PyObject *t_StepHandlerMultiplexer_handleStep(t_StepHandlerMultiplexer *self, PyObject *arg)
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

        static PyObject *t_StepHandlerMultiplexer_init(t_StepHandlerMultiplexer *self, PyObject *args)
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

        static PyObject *t_StepHandlerMultiplexer_remove(t_StepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::OrekitFixedStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remove", args);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_get__handlers(t_StepHandlerMultiplexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmHeader::class$ = NULL;
            jmethodID *TdmHeader::mids$ = NULL;
            bool TdmHeader::live$ = false;

            jclass TdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmHeader::TdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_TdmHeader__methods_[] = {
              DECLARE_METHOD(t_TdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmHeader)[] = {
              { Py_tp_methods, t_TdmHeader__methods_ },
              { Py_tp_init, (void *) t_TdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(TdmHeader, t_TdmHeader, TdmHeader);

            void t_TdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmHeader), &PY_TYPE_DEF(TdmHeader), module, "TdmHeader", 0);
            }

            void t_TdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "class_", make_descriptor(TdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "wrapfn_", make_descriptor(t_TdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmHeader::initializeClass, 1)))
                return NULL;
              return t_TdmHeader::wrap_Object(TdmHeader(((t_TdmHeader *) arg)->object.this$));
            }
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds)
            {
              TdmHeader object((jobject) NULL);

              INT_CALL(object = TdmHeader());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeMode::class$ = NULL;
            jmethodID *RangeMode::mids$ = NULL;
            bool RangeMode::live$ = false;
            RangeMode *RangeMode::COHERENT = NULL;
            RangeMode *RangeMode::CONSTANT = NULL;
            RangeMode *RangeMode::ONE_WAY = NULL;

            jclass RangeMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_230ac3f25d93f4a9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_values_a3fb5a19f1cc447e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COHERENT = new RangeMode(env->getStaticObjectField(cls, "COHERENT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                CONSTANT = new RangeMode(env->getStaticObjectField(cls, "CONSTANT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                ONE_WAY = new RangeMode(env->getStaticObjectField(cls, "ONE_WAY", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeMode RangeMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_230ac3f25d93f4a9], a0.this$));
            }

            JArray< RangeMode > RangeMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeMode >(env->callStaticObjectMethod(cls, mids$[mid_values_a3fb5a19f1cc447e]));
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
            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args);
            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeMode_values(PyTypeObject *type);
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data);
            static PyGetSetDef t_RangeMode__fields_[] = {
              DECLARE_GET_FIELD(t_RangeMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeMode__methods_[] = {
              DECLARE_METHOD(t_RangeMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeMode)[] = {
              { Py_tp_methods, t_RangeMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeMode, t_RangeMode, RangeMode);
            PyObject *t_RangeMode::wrap_Object(const RangeMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeMode::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeMode), &PY_TYPE_DEF(RangeMode), module, "RangeMode", 0);
            }

            void t_RangeMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "class_", make_descriptor(RangeMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "wrapfn_", make_descriptor(t_RangeMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "COHERENT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::COHERENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "CONSTANT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::CONSTANT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "ONE_WAY", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::ONE_WAY)));
            }

            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeMode::initializeClass, 1)))
                return NULL;
              return t_RangeMode::wrap_Object(RangeMode(((t_RangeMode *) arg)->object.this$));
            }
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::valueOf(a0));
                return t_RangeMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeMode_values(PyTypeObject *type)
            {
              JArray< RangeMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::values());
              return JArray<jobject>(result.this$).wrap(t_RangeMode::wrap_jobject);
            }
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffect::class$ = NULL;
          jmethodID *PythonParametricModelEffect::mids$ = NULL;
          bool PythonParametricModelEffect::live$ = false;

          jclass PythonParametricModelEffect::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_17bae2e3aa9bc870] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffect::PythonParametricModelEffect() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonParametricModelEffect::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonParametricModelEffect::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonParametricModelEffect::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self);
          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args);
          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffect__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffect, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffect__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffect, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffect, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffect)[] = {
            { Py_tp_methods, t_PythonParametricModelEffect__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffect_init_ },
            { Py_tp_getset, t_PythonParametricModelEffect__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffect)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffect, t_PythonParametricModelEffect, PythonParametricModelEffect);

          void t_PythonParametricModelEffect::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffect), &PY_TYPE_DEF(PythonParametricModelEffect), module, "PythonParametricModelEffect", 1);
          }

          void t_PythonParametricModelEffect::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "class_", make_descriptor(PythonParametricModelEffect::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "wrapfn_", make_descriptor(t_PythonParametricModelEffect::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffect::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonParametricModelEffect_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffect_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffect::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffect::wrap_Object(PythonParametricModelEffect(((t_PythonParametricModelEffect *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffect::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffect object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffect());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args)
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

          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("evaluate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data)
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
#include "org/hipparchus/util/BigReal.h"
#include "org/hipparchus/util/BigReal.h"
#include "org/hipparchus/FieldElement.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigReal::class$ = NULL;
      jmethodID *BigReal::mids$ = NULL;
      bool BigReal::live$ = false;
      BigReal *BigReal::ONE = NULL;
      BigReal *BigReal::ZERO = NULL;

      jclass BigReal::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigReal");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_916bf6d42d285c69] = env->getMethodID(cls, "<init>", "([C)V");
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_5421d1c1f03cf945] = env->getMethodID(cls, "<init>", "([CII)V");
          mids$[mid_add_754ca702113ce3a8] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_compareTo_886ba1973cae04cd] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/BigReal;)I");
          mids$[mid_divide_754ca702113ce3a8] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getScale_412668abc8d889e9] = env->getMethodID(cls, "getScale", "()I");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_multiply_754ca702113ce3a8] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_multiply_9627ebcb527ee60f] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/BigReal;");
          mids$[mid_negate_2073e31f7b6bcf19] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_reciprocal_2073e31f7b6bcf19] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_setScale_a3da1a935cb37f7b] = env->getMethodID(cls, "setScale", "(I)V");
          mids$[mid_subtract_754ca702113ce3a8] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ONE = new BigReal(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/BigReal;"));
          ZERO = new BigReal(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/BigReal;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigReal::BigReal(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_916bf6d42d285c69, a0.this$)) {}

      BigReal::BigReal(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      BigReal::BigReal(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      BigReal::BigReal(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      BigReal::BigReal(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      BigReal::BigReal(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5421d1c1f03cf945, a0.this$, a1, a2)) {}

      BigReal BigReal::add(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_add_754ca702113ce3a8], a0.this$));
      }

      jint BigReal::compareTo(const BigReal & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_886ba1973cae04cd], a0.this$);
      }

      BigReal BigReal::divide(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_divide_754ca702113ce3a8], a0.this$));
      }

      jdouble BigReal::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
      }

      jboolean BigReal::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      ::org::hipparchus::Field BigReal::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      jdouble BigReal::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      jint BigReal::getScale() const
      {
        return env->callIntMethod(this$, mids$[mid_getScale_412668abc8d889e9]);
      }

      jint BigReal::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      BigReal BigReal::multiply(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_754ca702113ce3a8], a0.this$));
      }

      BigReal BigReal::multiply(jint a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_9627ebcb527ee60f], a0));
      }

      BigReal BigReal::negate() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_negate_2073e31f7b6bcf19]));
      }

      BigReal BigReal::reciprocal() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_reciprocal_2073e31f7b6bcf19]));
      }

      void BigReal::setScale(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_a3da1a935cb37f7b], a0);
      }

      BigReal BigReal::subtract(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_subtract_754ca702113ce3a8], a0.this$));
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
      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_doubleValue(t_BigReal *self);
      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_getField(t_BigReal *self);
      static PyObject *t_BigReal_getReal(t_BigReal *self);
      static PyObject *t_BigReal_getScale(t_BigReal *self);
      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_negate(t_BigReal *self);
      static PyObject *t_BigReal_reciprocal(t_BigReal *self);
      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data);
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data);
      static PyGetSetDef t_BigReal__fields_[] = {
        DECLARE_GET_FIELD(t_BigReal, field),
        DECLARE_GET_FIELD(t_BigReal, real),
        DECLARE_GETSET_FIELD(t_BigReal, scale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigReal__methods_[] = {
        DECLARE_METHOD(t_BigReal, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, add, METH_O),
        DECLARE_METHOD(t_BigReal, compareTo, METH_O),
        DECLARE_METHOD(t_BigReal, divide, METH_O),
        DECLARE_METHOD(t_BigReal, doubleValue, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getScale, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, setScale, METH_O),
        DECLARE_METHOD(t_BigReal, subtract, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigReal)[] = {
        { Py_tp_methods, t_BigReal__methods_ },
        { Py_tp_init, (void *) t_BigReal_init_ },
        { Py_tp_getset, t_BigReal__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigReal)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigReal, t_BigReal, BigReal);

      void t_BigReal::install(PyObject *module)
      {
        installType(&PY_TYPE(BigReal), &PY_TYPE_DEF(BigReal), module, "BigReal", 0);
      }

      void t_BigReal::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "class_", make_descriptor(BigReal::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "wrapfn_", make_descriptor(t_BigReal::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigReal::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ONE", make_descriptor(t_BigReal::wrap_Object(*BigReal::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ZERO", make_descriptor(t_BigReal::wrap_Object(*BigReal::ZERO)));
      }

      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigReal::initializeClass, 1)))
          return NULL;
        return t_BigReal::wrap_Object(BigReal(((t_BigReal *) arg)->object.this$));
      }
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigReal::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jchar > a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[C", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jchar > a0((jobject) NULL);
            jint a1;
            jint a2;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[CII", &a0, &a1, &a2))
            {
              INT_CALL(object = BigReal(a0, a1, a2));
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

      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.divide(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "divide", arg);
        return NULL;
      }

      static PyObject *t_BigReal_doubleValue(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigReal_getField(t_BigReal *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigReal_getReal(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_getScale(t_BigReal *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getScale());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigReal a0((jobject) NULL);
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "k", BigReal::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigReal_negate(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_reciprocal(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getScale());
        return PyLong_FromLong((long) value);
      }
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor$MaxCountExceededCallback::class$ = NULL;
      jmethodID *Incrementor$MaxCountExceededCallback::mids$ = NULL;
      bool Incrementor$MaxCountExceededCallback::live$ = false;

      jclass Incrementor$MaxCountExceededCallback::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor$MaxCountExceededCallback");

          mids$ = new jmethodID[max_mid];
          mids$[mid_trigger_a3da1a935cb37f7b] = env->getMethodID(cls, "trigger", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Incrementor$MaxCountExceededCallback::trigger(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_trigger_a3da1a935cb37f7b], a0);
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
      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg);

      static PyMethodDef t_Incrementor$MaxCountExceededCallback__methods_[] = {
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, trigger, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor$MaxCountExceededCallback)[] = {
        { Py_tp_methods, t_Incrementor$MaxCountExceededCallback__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor$MaxCountExceededCallback)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor$MaxCountExceededCallback, t_Incrementor$MaxCountExceededCallback, Incrementor$MaxCountExceededCallback);

      void t_Incrementor$MaxCountExceededCallback::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor$MaxCountExceededCallback), &PY_TYPE_DEF(Incrementor$MaxCountExceededCallback), module, "Incrementor$MaxCountExceededCallback", 0);
      }

      void t_Incrementor$MaxCountExceededCallback::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "class_", make_descriptor(Incrementor$MaxCountExceededCallback::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "wrapfn_", make_descriptor(t_Incrementor$MaxCountExceededCallback::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 1)))
          return NULL;
        return t_Incrementor$MaxCountExceededCallback::wrap_Object(Incrementor$MaxCountExceededCallback(((t_Incrementor$MaxCountExceededCallback *) arg)->object.this$));
      }
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.trigger(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "trigger", arg);
        return NULL;
      }
    }
  }
}
