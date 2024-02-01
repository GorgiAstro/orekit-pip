#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *InterpolationGrid::class$ = NULL;
            jmethodID *InterpolationGrid::mids$ = NULL;
            bool InterpolationGrid::live$ = false;

            jclass InterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGridPoints_4c8160a53aa8811b] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > InterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_4c8160a53aa8811b], a0, a1));
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
            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args);

            static PyMethodDef t_InterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_InterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(InterpolationGrid)[] = {
              { Py_tp_methods, t_InterpolationGrid__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(InterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(InterpolationGrid, t_InterpolationGrid, InterpolationGrid);

            void t_InterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(InterpolationGrid), &PY_TYPE_DEF(InterpolationGrid), module, "InterpolationGrid", 0);
            }

            void t_InterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "class_", make_descriptor(InterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "wrapfn_", make_descriptor(t_InterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, InterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_InterpolationGrid::wrap_Object(InterpolationGrid(((t_InterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, InterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile$Location::class$ = NULL;
        jmethodID *Tile$Location::mids$ = NULL;
        bool Tile$Location::live$ = false;
        Tile$Location *Tile$Location::EAST = NULL;
        Tile$Location *Tile$Location::HAS_INTERPOLATION_NEIGHBORS = NULL;
        Tile$Location *Tile$Location::NORTH = NULL;
        Tile$Location *Tile$Location::NORTH_EAST = NULL;
        Tile$Location *Tile$Location::NORTH_WEST = NULL;
        Tile$Location *Tile$Location::SOUTH = NULL;
        Tile$Location *Tile$Location::SOUTH_EAST = NULL;
        Tile$Location *Tile$Location::SOUTH_WEST = NULL;
        Tile$Location *Tile$Location::WEST = NULL;

        jclass Tile$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_4b05322da1c123de] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_values_b3f24bb355ca2549] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/raster/Tile$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EAST = new Tile$Location(env->getStaticObjectField(cls, "EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            HAS_INTERPOLATION_NEIGHBORS = new Tile$Location(env->getStaticObjectField(cls, "HAS_INTERPOLATION_NEIGHBORS", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH = new Tile$Location(env->getStaticObjectField(cls, "NORTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH = new Tile$Location(env->getStaticObjectField(cls, "SOUTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            WEST = new Tile$Location(env->getStaticObjectField(cls, "WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tile$Location Tile$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Tile$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4b05322da1c123de], a0.this$));
        }

        JArray< Tile$Location > Tile$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Tile$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_b3f24bb355ca2549]));
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
        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args);
        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Tile$Location_values(PyTypeObject *type);
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data);
        static PyGetSetDef t_Tile$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Tile$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile$Location__methods_[] = {
          DECLARE_METHOD(t_Tile$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Tile$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile$Location)[] = {
          { Py_tp_methods, t_Tile$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Tile$Location, t_Tile$Location, Tile$Location);
        PyObject *t_Tile$Location::wrap_Object(const Tile$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Tile$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Tile$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile$Location), &PY_TYPE_DEF(Tile$Location), module, "Tile$Location", 0);
        }

        void t_Tile$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "class_", make_descriptor(Tile$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "wrapfn_", make_descriptor(t_Tile$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Tile$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "HAS_INTERPOLATION_NEIGHBORS", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::HAS_INTERPOLATION_NEIGHBORS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::WEST)));
        }

        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tile$Location::initializeClass, 1)))
            return NULL;
          return t_Tile$Location::wrap_Object(Tile$Location(((t_Tile$Location *) arg)->object.this$));
        }
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tile$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::valueOf(a0));
            return t_Tile$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Tile$Location_values(PyTypeObject *type)
        {
          JArray< Tile$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Tile$Location::wrap_jobject);
        }
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrameAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameAlmanac::class$ = NULL;
          jmethodID *SubFrameAlmanac::mids$ = NULL;
          bool SubFrameAlmanac::live$ = false;

          jclass SubFrameAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameAlmanac");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_9981f74b2d109da6] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_9981f74b2d109da6] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getDeltai_9981f74b2d109da6] = env->getMethodID(cls, "getDeltai", "()D");
              mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getLowercaseOmega_9981f74b2d109da6] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getM0_9981f74b2d109da6] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getOmegaDot_9981f74b2d109da6] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getPRN_d6ab429752e7c267] = env->getMethodID(cls, "getPRN", "()I");
              mids$[mid_getSqrtA_9981f74b2d109da6] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getSvHealth_d6ab429752e7c267] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getToaA_d6ab429752e7c267] = env->getMethodID(cls, "getToaA", "()I");
              mids$[mid_getUppercaseOmega0_9981f74b2d109da6] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrameAlmanac::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_9981f74b2d109da6]);
          }

          jdouble SubFrameAlmanac::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_9981f74b2d109da6]);
          }

          jdouble SubFrameAlmanac::getDeltai() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltai_9981f74b2d109da6]);
          }

          jdouble SubFrameAlmanac::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
          }

          jdouble SubFrameAlmanac::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_9981f74b2d109da6]);
          }

          jdouble SubFrameAlmanac::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_9981f74b2d109da6]);
          }

          jdouble SubFrameAlmanac::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_9981f74b2d109da6]);
          }

          jint SubFrameAlmanac::getPRN() const
          {
            return env->callIntMethod(this$, mids$[mid_getPRN_d6ab429752e7c267]);
          }

          jdouble SubFrameAlmanac::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_9981f74b2d109da6]);
          }

          jint SubFrameAlmanac::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_d6ab429752e7c267]);
          }

          jint SubFrameAlmanac::getToaA() const
          {
            return env->callIntMethod(this$, mids$[mid_getToaA_d6ab429752e7c267]);
          }

          jdouble SubFrameAlmanac::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_9981f74b2d109da6]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data);
          static PyGetSetDef t_SubFrameAlmanac__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF1),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, deltai),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, e),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, m0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, omegaDot),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, pRN),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, sqrtA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, svHealth),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, toaA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrameAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getDeltai, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getPRN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getToaA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameAlmanac)[] = {
            { Py_tp_methods, t_SubFrameAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrameAlmanac__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameAlmanac, t_SubFrameAlmanac, SubFrameAlmanac);

          void t_SubFrameAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameAlmanac), &PY_TYPE_DEF(SubFrameAlmanac), module, "SubFrameAlmanac", 0);
          }

          void t_SubFrameAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "class_", make_descriptor(SubFrameAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "wrapfn_", make_descriptor(t_SubFrameAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameAlmanac::wrap_Object(SubFrameAlmanac(((t_SubFrameAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameAlmanac::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltai());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPRN());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToaA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltai());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPRN());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToaA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$TimingSystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$TimingSystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$TimingSystemConfiguration::live$ = false;

        jclass CRDConfiguration$TimingSystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEpochDelayCorrection_9981f74b2d109da6] = env->getMethodID(cls, "getEpochDelayCorrection", "()D");
            mids$[mid_getFrequencySource_d2c8eb4129821f0e] = env->getMethodID(cls, "getFrequencySource", "()Ljava/lang/String;");
            mids$[mid_getLocalTimingId_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalTimingId", "()Ljava/lang/String;");
            mids$[mid_getTimeSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getTimeSource", "()Ljava/lang/String;");
            mids$[mid_getTimer_d2c8eb4129821f0e] = env->getMethodID(cls, "getTimer", "()Ljava/lang/String;");
            mids$[mid_getTimerSerialNumber_d2c8eb4129821f0e] = env->getMethodID(cls, "getTimerSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setEpochDelayCorrection_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEpochDelayCorrection", "(D)V");
            mids$[mid_setFrequencySource_105e1eadb709d9ac] = env->getMethodID(cls, "setFrequencySource", "(Ljava/lang/String;)V");
            mids$[mid_setLocalTimingId_105e1eadb709d9ac] = env->getMethodID(cls, "setLocalTimingId", "(Ljava/lang/String;)V");
            mids$[mid_setTimeSource_105e1eadb709d9ac] = env->getMethodID(cls, "setTimeSource", "(Ljava/lang/String;)V");
            mids$[mid_setTimer_105e1eadb709d9ac] = env->getMethodID(cls, "setTimer", "(Ljava/lang/String;)V");
            mids$[mid_setTimerSerialNumber_105e1eadb709d9ac] = env->getMethodID(cls, "setTimerSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TimingSystemConfiguration::CRDConfiguration$TimingSystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble CRDConfiguration$TimingSystemConfiguration::getEpochDelayCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochDelayCorrection_9981f74b2d109da6]);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getFrequencySource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrequencySource_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getLocalTimingId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalTimingId_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimeSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSource_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimer_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimerSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimerSerialNumber_d2c8eb4129821f0e]));
        }

        void CRDConfiguration$TimingSystemConfiguration::setEpochDelayCorrection(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochDelayCorrection_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$TimingSystemConfiguration::setFrequencySource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFrequencySource_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setLocalTimingId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLocalTimingId_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimeSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSource_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimer_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimerSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimerSerialNumber_105e1eadb709d9ac], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$TimingSystemConfiguration_init_(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimer(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toCrdString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timer(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$TimingSystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, epochDelayCorrection),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, frequencySource),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, localTimingId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timeSource),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timerSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$TimingSystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getEpochDelayCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getFrequencySource, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getLocalTimingId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimeSource, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimerSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setEpochDelayCorrection, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setFrequencySource, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setLocalTimingId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimeSource, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimerSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$TimingSystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$TimingSystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$TimingSystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$TimingSystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$TimingSystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$TimingSystemConfiguration, t_CRDConfiguration$TimingSystemConfiguration, CRDConfiguration$TimingSystemConfiguration);

        void t_CRDConfiguration$TimingSystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$TimingSystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration), module, "CRDConfiguration$TimingSystemConfiguration", 0);
        }

        void t_CRDConfiguration$TimingSystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "class_", make_descriptor(CRDConfiguration$TimingSystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$TimingSystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$TimingSystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(CRDConfiguration$TimingSystemConfiguration(((t_CRDConfiguration$TimingSystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$TimingSystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$TimingSystemConfiguration_init_(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$TimingSystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$TimingSystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochDelayCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencySource());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLocalTimingId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSource());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimer(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimerSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochDelayCorrection(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochDelayCorrection", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFrequencySource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFrequencySource", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLocalTimingId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLocalTimingId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimeSource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSource", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimerSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimerSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toCrdString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TimingSystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TimingSystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochDelayCorrection());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochDelayCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochDelayCorrection", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencySource());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFrequencySource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "frequencySource", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalTimingId());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLocalTimingId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "localTimingId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSource());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimeSource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSource", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timer(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimer());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimerSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimerSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timerSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Parser.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Parser::class$ = NULL;
        jmethodID *SP3Parser::mids$ = NULL;
        bool SP3Parser::live$ = false;
        ::java::lang::String *SP3Parser::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_parse_57bf1e8926783af6] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/sp3/SP3;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Parser::SP3Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::files::sp3::SP3 SP3Parser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::sp3::SP3(env->callObjectMethod(this$, mids$[mid_parse_57bf1e8926783af6], a0.this$));
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
        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg);

        static PyMethodDef t_SP3Parser__methods_[] = {
          DECLARE_METHOD(t_SP3Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Parser)[] = {
          { Py_tp_methods, t_SP3Parser__methods_ },
          { Py_tp_init, (void *) t_SP3Parser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Parser, t_SP3Parser, SP3Parser);

        void t_SP3Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Parser), &PY_TYPE_DEF(SP3Parser), module, "SP3Parser", 0);
        }

        void t_SP3Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "class_", make_descriptor(SP3Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "wrapfn_", make_descriptor(t_SP3Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Parser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Parser::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Parser::initializeClass, 1)))
            return NULL;
          return t_SP3Parser::wrap_Object(SP3Parser(((t_SP3Parser *) arg)->object.this$));
        }
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds)
        {
          SP3Parser object((jobject) NULL);

          INT_CALL(object = SP3Parser());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::sp3::SP3 result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::sp3::t_SP3::wrap_Object(result);
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
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CarrierPhase::class$ = NULL;
          jmethodID *CarrierPhase::mids$ = NULL;
          bool CarrierPhase::live$ = false;
          CarrierPhase *CarrierPhase::L1 = NULL;
          CarrierPhase *CarrierPhase::L1_L2 = NULL;
          CarrierPhase *CarrierPhase::NO = NULL;

          jclass CarrierPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CarrierPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCarrierPhase_f01a985f4b2afda6] = env->getStaticMethodID(cls, "getCarrierPhase", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_valueOf_f01a985f4b2afda6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_values_9f5e62d05ac2a82e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              L1 = new CarrierPhase(env->getStaticObjectField(cls, "L1", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              L1_L2 = new CarrierPhase(env->getStaticObjectField(cls, "L1_L2", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              NO = new CarrierPhase(env->getStaticObjectField(cls, "NO", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CarrierPhase CarrierPhase::getCarrierPhase(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_getCarrierPhase_f01a985f4b2afda6], a0.this$));
          }

          CarrierPhase CarrierPhase::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f01a985f4b2afda6], a0.this$));
          }

          JArray< CarrierPhase > CarrierPhase::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CarrierPhase >(env->callStaticObjectMethod(cls, mids$[mid_values_9f5e62d05ac2a82e]));
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
          static PyObject *t_CarrierPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_of_(t_CarrierPhase *self, PyObject *args);
          static PyObject *t_CarrierPhase_getCarrierPhase(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarrierPhase_values(PyTypeObject *type);
          static PyObject *t_CarrierPhase_get__parameters_(t_CarrierPhase *self, void *data);
          static PyGetSetDef t_CarrierPhase__fields_[] = {
            DECLARE_GET_FIELD(t_CarrierPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CarrierPhase__methods_[] = {
            DECLARE_METHOD(t_CarrierPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_CarrierPhase, getCarrierPhase, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarrierPhase)[] = {
            { Py_tp_methods, t_CarrierPhase__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CarrierPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarrierPhase)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CarrierPhase, t_CarrierPhase, CarrierPhase);
          PyObject *t_CarrierPhase::wrap_Object(const CarrierPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CarrierPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CarrierPhase *self = (t_CarrierPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CarrierPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CarrierPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CarrierPhase *self = (t_CarrierPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CarrierPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(CarrierPhase), &PY_TYPE_DEF(CarrierPhase), module, "CarrierPhase", 0);
          }

          void t_CarrierPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "class_", make_descriptor(CarrierPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "wrapfn_", make_descriptor(t_CarrierPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(CarrierPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "L1", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::L1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "L1_L2", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::L1_L2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "NO", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::NO)));
          }

          static PyObject *t_CarrierPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarrierPhase::initializeClass, 1)))
              return NULL;
            return t_CarrierPhase::wrap_Object(CarrierPhase(((t_CarrierPhase *) arg)->object.this$));
          }
          static PyObject *t_CarrierPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarrierPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarrierPhase_of_(t_CarrierPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CarrierPhase_getCarrierPhase(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CarrierPhase result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::getCarrierPhase(a0));
              return t_CarrierPhase::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getCarrierPhase", arg);
            return NULL;
          }

          static PyObject *t_CarrierPhase_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CarrierPhase result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::valueOf(a0));
              return t_CarrierPhase::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CarrierPhase_values(PyTypeObject *type)
          {
            JArray< CarrierPhase > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::values());
            return JArray<jobject>(result.this$).wrap(t_CarrierPhase::wrap_jobject);
          }
          static PyObject *t_CarrierPhase_get__parameters_(t_CarrierPhase *self, void *data)
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
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *AlternativeHypothesis::class$ = NULL;
        jmethodID *AlternativeHypothesis::mids$ = NULL;
        bool AlternativeHypothesis::live$ = false;
        AlternativeHypothesis *AlternativeHypothesis::GREATER_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::LESS_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::TWO_SIDED = NULL;

        jclass AlternativeHypothesis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/AlternativeHypothesis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_cf87d18955c733ce] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/inference/AlternativeHypothesis;");
            mids$[mid_values_1adcce77de12a02d] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/inference/AlternativeHypothesis;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GREATER_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "GREATER_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            LESS_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "LESS_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            TWO_SIDED = new AlternativeHypothesis(env->getStaticObjectField(cls, "TWO_SIDED", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlternativeHypothesis AlternativeHypothesis::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlternativeHypothesis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cf87d18955c733ce], a0.this$));
        }

        JArray< AlternativeHypothesis > AlternativeHypothesis::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlternativeHypothesis >(env->callStaticObjectMethod(cls, mids$[mid_values_1adcce77de12a02d]));
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
        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args);
        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type);
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data);
        static PyGetSetDef t_AlternativeHypothesis__fields_[] = {
          DECLARE_GET_FIELD(t_AlternativeHypothesis, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlternativeHypothesis__methods_[] = {
          DECLARE_METHOD(t_AlternativeHypothesis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlternativeHypothesis, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlternativeHypothesis)[] = {
          { Py_tp_methods, t_AlternativeHypothesis__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlternativeHypothesis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlternativeHypothesis)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlternativeHypothesis, t_AlternativeHypothesis, AlternativeHypothesis);
        PyObject *t_AlternativeHypothesis::wrap_Object(const AlternativeHypothesis& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlternativeHypothesis::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlternativeHypothesis::install(PyObject *module)
        {
          installType(&PY_TYPE(AlternativeHypothesis), &PY_TYPE_DEF(AlternativeHypothesis), module, "AlternativeHypothesis", 0);
        }

        void t_AlternativeHypothesis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "class_", make_descriptor(AlternativeHypothesis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "wrapfn_", make_descriptor(t_AlternativeHypothesis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlternativeHypothesis::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "GREATER_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::GREATER_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "LESS_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::LESS_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "TWO_SIDED", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::TWO_SIDED)));
        }

        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlternativeHypothesis::initializeClass, 1)))
            return NULL;
          return t_AlternativeHypothesis::wrap_Object(AlternativeHypothesis(((t_AlternativeHypothesis *) arg)->object.this$));
        }
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlternativeHypothesis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlternativeHypothesis result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::valueOf(a0));
            return t_AlternativeHypothesis::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type)
        {
          JArray< AlternativeHypothesis > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::values());
          return JArray<jobject>(result.this$).wrap(t_AlternativeHypothesis::wrap_jobject);
        }
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction$ConvergenceTest::class$ = NULL;
      jmethodID *Fraction$ConvergenceTest::mids$ = NULL;
      bool Fraction$ConvergenceTest::live$ = false;

      jclass Fraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_905dfe1f877a03f0] = env->getMethodID(cls, "test", "(II)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Fraction$ConvergenceTest::test(jint a0, jint a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_905dfe1f877a03f0], a0, a1);
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
      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_Fraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_Fraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_Fraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fraction$ConvergenceTest, t_Fraction$ConvergenceTest, Fraction$ConvergenceTest);

      void t_Fraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction$ConvergenceTest), &PY_TYPE_DEF(Fraction$ConvergenceTest), module, "Fraction$ConvergenceTest", 0);
      }

      void t_Fraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "class_", make_descriptor(Fraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "wrapfn_", make_descriptor(t_Fraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_Fraction$ConvergenceTest::wrap_Object(Fraction$ConvergenceTest(((t_Fraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GillIntegratorBuilder.h"
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

        ::java::lang::Class *GillIntegratorBuilder::class$ = NULL;
        jmethodID *GillIntegratorBuilder::mids$ = NULL;
        bool GillIntegratorBuilder::live$ = false;

        jclass GillIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegratorBuilder::GillIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator GillIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GillIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GillIntegratorBuilder, t_GillIntegratorBuilder, GillIntegratorBuilder);

        void t_GillIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegratorBuilder), &PY_TYPE_DEF(GillIntegratorBuilder), module, "GillIntegratorBuilder", 0);
        }

        void t_GillIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "class_", make_descriptor(GillIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "wrapfn_", make_descriptor(t_GillIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillIntegratorBuilder::wrap_Object(GillIntegratorBuilder(((t_GillIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "java/util/Collection.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/orekit/frames/Transform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *Rugged::class$ = NULL;
        jmethodID *Rugged::mids$ = NULL;
        bool Rugged::live$ = false;

        jclass Rugged::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/Rugged");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dateLocation_dc12e0e6c5b4455d] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_dateLocation_3791171da7cdd1eb] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;DDII)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_directLocation_43ad5867a50451cc] = env->getMethodID(cls, "directLocation", "(Ljava/lang/String;D)[Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_directLocation_537d8ec1682936c5] = env->getMethodID(cls, "directLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_distanceBetweenLOS_8f1cdea02beae019] = env->getMethodID(cls, "distanceBetweenLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;D)[D");
            mids$[mid_distanceBetweenLOSderivatives_064e079069cdbe83] = env->getMethodID(cls, "distanceBetweenLOSderivatives", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getAlgorithm_dc4cbf7a93096651] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/intersection/IntersectionAlgorithm;");
            mids$[mid_getAlgorithmId_65c2eab2e30f9d2d] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getBodyToInertial_02ca17ac51b6a4b2] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getEllipsoid_bac68fc0dce2fb24] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialToBody_02ca17ac51b6a4b2] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getLineSensor_3ab0865e486f5c39] = env->getMethodID(cls, "getLineSensor", "(Ljava/lang/String;)Lorg/orekit/rugged/linesensor/LineSensor;");
            mids$[mid_getLineSensors_3bfef5c77ceb081a] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/Collection;");
            mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getRefractionCorrection_8a451c1ca0929e53] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getScToBody_a784fa07890a0e9f] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getScToInertial_02ca17ac51b6a4b2] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_inverseLocation_92e488e30346bcdc] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocation_da92dc38449d384a] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;DDII)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocationDerivatives_9d08c2713397ffba] = env->getMethodID(cls, "inverseLocationDerivatives", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;IILorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_isAberrationOfLightCorrected_eee3de00fe971136] = env->getMethodID(cls, "isAberrationOfLightCorrected", "()Z");
            mids$[mid_isInRange_b16e79ba1b2830a1] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");
            mids$[mid_isLightTimeCorrected_eee3de00fe971136] = env->getMethodID(cls, "isLightTimeCorrected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_dc12e0e6c5b4455d], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_3791171da7cdd1eb], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::orekit::bodies::GeodeticPoint > Rugged::directLocation(const ::java::lang::String & a0, jdouble a1) const
        {
          return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_directLocation_43ad5867a50451cc], a0.this$, a1));
        }

        ::org::orekit::bodies::GeodeticPoint Rugged::directLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_directLocation_537d8ec1682936c5], a0.this$, a1.this$, a2.this$));
        }

        JArray< jdouble > Rugged::distanceBetweenLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOS_8f1cdea02beae019], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::distanceBetweenLOSderivatives(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6, const ::org::orekit::rugged::utils::DerivativeGenerator & a7) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOSderivatives_064e079069cdbe83], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6, a7.this$));
        }

        ::org::orekit::rugged::intersection::IntersectionAlgorithm Rugged::getAlgorithm() const
        {
          return ::org::orekit::rugged::intersection::IntersectionAlgorithm(env->callObjectMethod(this$, mids$[mid_getAlgorithm_dc4cbf7a93096651]));
        }

        ::org::orekit::rugged::api::AlgorithmId Rugged::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_65c2eab2e30f9d2d]));
        }

        ::org::orekit::frames::Transform Rugged::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_02ca17ac51b6a4b2], a0.this$));
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid Rugged::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_bac68fc0dce2fb24]));
        }

        ::org::orekit::frames::Transform Rugged::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_02ca17ac51b6a4b2], a0.this$));
        }

        ::org::orekit::rugged::linesensor::LineSensor Rugged::getLineSensor(const ::java::lang::String & a0) const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getLineSensor_3ab0865e486f5c39], a0.this$));
        }

        ::java::util::Collection Rugged::getLineSensors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getLineSensors_3bfef5c77ceb081a]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
        }

        ::java::lang::String Rugged::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction Rugged::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_8a451c1ca0929e53]));
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody Rugged::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_a784fa07890a0e9f]));
        }

        ::org::orekit::frames::Transform Rugged::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_02ca17ac51b6a4b2], a0.this$));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_92e488e30346bcdc], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_da92dc38449d384a], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::inverseLocationDerivatives(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3, const ::org::orekit::rugged::utils::DerivativeGenerator & a4) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_inverseLocationDerivatives_9d08c2713397ffba], a0.this$, a1.this$, a2, a3, a4.this$));
        }

        jboolean Rugged::isAberrationOfLightCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAberrationOfLightCorrected_eee3de00fe971136]);
        }

        jboolean Rugged::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_b16e79ba1b2830a1], a0.this$);
        }

        jboolean Rugged::isLightTimeCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLightTimeCorrected_eee3de00fe971136]);
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
      namespace api {
        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self);
        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self);
        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self);
        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensors(t_Rugged *self);
        static PyObject *t_Rugged_getMaxDate(t_Rugged *self);
        static PyObject *t_Rugged_getMinDate(t_Rugged *self);
        static PyObject *t_Rugged_getName(t_Rugged *self);
        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self);
        static PyObject *t_Rugged_getScToBody(t_Rugged *self);
        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self);
        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self);
        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data);
        static PyGetSetDef t_Rugged__fields_[] = {
          DECLARE_GET_FIELD(t_Rugged, aberrationOfLightCorrected),
          DECLARE_GET_FIELD(t_Rugged, algorithm),
          DECLARE_GET_FIELD(t_Rugged, algorithmId),
          DECLARE_GET_FIELD(t_Rugged, ellipsoid),
          DECLARE_GET_FIELD(t_Rugged, lightTimeCorrected),
          DECLARE_GET_FIELD(t_Rugged, lineSensors),
          DECLARE_GET_FIELD(t_Rugged, maxDate),
          DECLARE_GET_FIELD(t_Rugged, minDate),
          DECLARE_GET_FIELD(t_Rugged, name),
          DECLARE_GET_FIELD(t_Rugged, refractionCorrection),
          DECLARE_GET_FIELD(t_Rugged, scToBody),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Rugged__methods_[] = {
          DECLARE_METHOD(t_Rugged, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, dateLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, directLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOS, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOSderivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getInertialToBody, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensor, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getName, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, inverseLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, inverseLocationDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, isAberrationOfLightCorrected, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, isInRange, METH_O),
          DECLARE_METHOD(t_Rugged, isLightTimeCorrected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rugged)[] = {
          { Py_tp_methods, t_Rugged__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Rugged__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rugged)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rugged, t_Rugged, Rugged);

        void t_Rugged::install(PyObject *module)
        {
          installType(&PY_TYPE(Rugged), &PY_TYPE_DEF(Rugged), module, "Rugged", 0);
        }

        void t_Rugged::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "class_", make_descriptor(Rugged::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "wrapfn_", make_descriptor(t_Rugged::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rugged::initializeClass, 1)))
            return NULL;
          return t_Rugged::wrap_Object(Rugged(((t_Rugged *) arg)->object.this$));
        }
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rugged::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dateLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);

              if (!parseArgs(args, "sD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "directLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOS(a0, a1, a2, a3, a4, a5, a6));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOS", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          ::org::orekit::rugged::utils::DerivativeGenerator a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkDK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOSderivatives(a0, a1, a2, a3, a4, a5, a6, a7));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOSderivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(result);
        }

        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getBodyToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getBodyToInertial", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInertialToBody(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInertialToBody", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getLineSensor(a0));
            return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLineSensor", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensors(t_Rugged *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_Rugged_getMaxDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getMinDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getName(t_Rugged *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToBody(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getScToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getScToInertial", arg);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::DerivativeGenerator a4((jobject) NULL);
          PyTypeObject **p4;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "skIIK", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.inverseLocationDerivatives(a0, a1, a2, a3, a4));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocationDerivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isInRange(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isInRange", arg);
          return NULL;
        }

        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadata::class$ = NULL;
              jmethodID *AemMetadata::mids$ = NULL;
              bool AemMetadata::live$ = false;

              jclass AemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getAttitudeType_117217196ac7a101] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                  mids$[mid_getEndpoints_d67fadc29cf1ce4a] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_503d51f00fe64860] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getFrameAngvelFrame_0fc1562b68204151] = env->getMethodID(cls, "getFrameAngvelFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInterpolationDegree_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStartTime_80e11148db499dda] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_80e11148db499dda] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_80e11148db499dda] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_80e11148db499dda] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_isFirst_b55c3109c27b90e3] = env->getMethodID(cls, "isFirst", "()Ljava/lang/Boolean;");
                  mids$[mid_isSpacecraftBodyRate_eee3de00fe971136] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_eee3de00fe971136] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setAngvelFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setAngvelFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setAttitudeType_3b273fe5845fa3ea] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;)V");
                  mids$[mid_setEulerRotSeq_d6989ad0241efe2c] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInterpolationDegree_8fd427ab23829bf5] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_105e1eadb709d9ac] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                  mids$[mid_setIsFirst_b35db77cae58639e] = env->getMethodID(cls, "setIsFirst", "(Z)V");
                  mids$[mid_setRateFrameIsA_b35db77cae58639e] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
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

              AemMetadata::AemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeType AemMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_117217196ac7a101]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AemMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_d67fadc29cf1ce4a]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AemMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_503d51f00fe64860]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AemMetadata::getFrameAngvelFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameAngvelFrame_0fc1562b68204151]));
              }

              jint AemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_d6ab429752e7c267]);
              }

              ::java::lang::String AemMetadata::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_d2c8eb4129821f0e]));
              }

              jint AemMetadata::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_80e11148db499dda]));
              }

              ::java::lang::Boolean AemMetadata::isFirst() const
              {
                return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isFirst_b55c3109c27b90e3]));
              }

              jboolean AemMetadata::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_eee3de00fe971136]);
              }

              jboolean AemMetadata::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_eee3de00fe971136]);
              }

              void AemMetadata::setAngvelFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngvelFrame_2c8b859a72c0094e], a0.this$);
              }

              void AemMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::AttitudeType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_3b273fe5845fa3ea], a0.this$);
              }

              void AemMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_d6989ad0241efe2c], a0.this$);
              }

              void AemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_8fd427ab23829bf5], a0);
              }

              void AemMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_105e1eadb709d9ac], a0.this$);
              }

              void AemMetadata::setIsFirst(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsFirst_b35db77cae58639e], a0);
              }

              void AemMetadata::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_b35db77cae58639e], a0);
              }

              void AemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_8497861b879c83f7], a0.this$);
              }

              void AemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_8497861b879c83f7], a0.this$);
              }

              void AemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_8497861b879c83f7], a0.this$);
              }

              void AemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_8497861b879c83f7], a0.this$);
              }

              void AemMetadata::validate(jdouble a0) const
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
            namespace aem {
              static PyObject *t_AemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemMetadata_init_(t_AemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemMetadata_getAttitudeType(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getEndpoints(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getEulerRotSeq(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getFrameAngvelFrame(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationDegree(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationMethod(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationSamples(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStart(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStartTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStop(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStopTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getUseableStartTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getUseableStopTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_isFirst(t_AemMetadata *self);
              static PyObject *t_AemMetadata_isSpacecraftBodyRate(t_AemMetadata *self);
              static PyObject *t_AemMetadata_rateFrameIsA(t_AemMetadata *self);
              static PyObject *t_AemMetadata_setAngvelFrame(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setAttitudeType(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setEulerRotSeq(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setInterpolationDegree(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setInterpolationMethod(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setIsFirst(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setRateFrameIsA(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setStartTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setStopTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setUseableStartTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setUseableStopTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_validate(t_AemMetadata *self, PyObject *args);
              static int t_AemMetadata_set__angvelFrame(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__attitudeType(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__attitudeType(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__endpoints(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__eulerRotSeq(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__eulerRotSeq(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__first(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__frameAngvelFrame(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__interpolationDegree(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__interpolationDegree(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__interpolationMethod(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__interpolationMethod(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__interpolationSamples(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__spacecraftBodyRate(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__start(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__startTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__startTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__stop(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__stopTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__stopTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__useableStartTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__useableStartTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__useableStopTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__useableStopTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AemMetadata__fields_[] = {
                DECLARE_SET_FIELD(t_AemMetadata, angvelFrame),
                DECLARE_GETSET_FIELD(t_AemMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AemMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AemMetadata, eulerRotSeq),
                DECLARE_GET_FIELD(t_AemMetadata, first),
                DECLARE_GET_FIELD(t_AemMetadata, frameAngvelFrame),
                DECLARE_GETSET_FIELD(t_AemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_AemMetadata, interpolationMethod),
                DECLARE_GET_FIELD(t_AemMetadata, interpolationSamples),
                DECLARE_GET_FIELD(t_AemMetadata, spacecraftBodyRate),
                DECLARE_GET_FIELD(t_AemMetadata, start),
                DECLARE_GETSET_FIELD(t_AemMetadata, startTime),
                DECLARE_GET_FIELD(t_AemMetadata, stop),
                DECLARE_GETSET_FIELD(t_AemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_AemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_AemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadata__methods_[] = {
                DECLARE_METHOD(t_AemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getFrameAngvelFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStop, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, isFirst, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, isSpacecraftBodyRate, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, rateFrameIsA, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, setAngvelFrame, METH_O),
                DECLARE_METHOD(t_AemMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AemMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_AemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_AemMetadata, setIsFirst, METH_O),
                DECLARE_METHOD(t_AemMetadata, setRateFrameIsA, METH_O),
                DECLARE_METHOD(t_AemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadata)[] = {
                { Py_tp_methods, t_AemMetadata__methods_ },
                { Py_tp_init, (void *) t_AemMetadata_init_ },
                { Py_tp_getset, t_AemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmMetadata),
                NULL
              };

              DEFINE_TYPE(AemMetadata, t_AemMetadata, AemMetadata);

              void t_AemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadata), &PY_TYPE_DEF(AemMetadata), module, "AemMetadata", 0);
              }

              void t_AemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "class_", make_descriptor(AemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "wrapfn_", make_descriptor(t_AemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadata::initializeClass, 1)))
                  return NULL;
                return t_AemMetadata::wrap_Object(AemMetadata(((t_AemMetadata *) arg)->object.this$));
              }
              static PyObject *t_AemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemMetadata_init_(t_AemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                AemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = AemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemMetadata_getAttitudeType(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getEndpoints(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getEulerRotSeq(t_AemMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getFrameAngvelFrame(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrameAngvelFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getInterpolationDegree(t_AemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemMetadata_getInterpolationMethod(t_AemMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemMetadata_getInterpolationSamples(t_AemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemMetadata_getStart(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStartTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStop(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStopTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getUseableStartTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getUseableStopTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_isFirst(t_AemMetadata *self)
              {
                ::java::lang::Boolean result((jobject) NULL);
                OBJ_CALL(result = self->object.isFirst());
                return ::java::lang::t_Boolean::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_isSpacecraftBodyRate(t_AemMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AemMetadata_rateFrameIsA(t_AemMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.rateFrameIsA());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AemMetadata_setAngvelFrame(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAngvelFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngvelFrame", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setAttitudeType(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::AttitudeType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setEulerRotSeq(t_AemMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setInterpolationDegree(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setInterpolationMethod(t_AemMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setIsFirst(t_AemMetadata *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsFirst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsFirst", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setRateFrameIsA(t_AemMetadata *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setRateFrameIsA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateFrameIsA", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setStartTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setStopTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setUseableStartTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setUseableStopTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_validate(t_AemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static int t_AemMetadata_set__angvelFrame(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAngvelFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angvelFrame", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__attitudeType(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::wrap_Object(value);
              }
              static int t_AemMetadata_set__attitudeType(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::AttitudeType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::AttitudeType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__endpoints(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__eulerRotSeq(t_AemMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AemMetadata_set__eulerRotSeq(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__first(t_AemMetadata *self, void *data)
              {
                ::java::lang::Boolean value((jobject) NULL);
                OBJ_CALL(value = self->object.isFirst());
                return ::java::lang::t_Boolean::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__frameAngvelFrame(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrameAngvelFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__interpolationDegree(t_AemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_AemMetadata_set__interpolationDegree(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__interpolationMethod(t_AemMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }
              static int t_AemMetadata_set__interpolationMethod(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__interpolationSamples(t_AemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemMetadata_get__spacecraftBodyRate(t_AemMetadata *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_AemMetadata_get__start(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__startTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__startTime(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__stop(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__stopTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__stopTime(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__useableStartTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__useableStartTime(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__useableStopTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__useableStopTime(t_AemMetadata *self, PyObject *arg, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadata::class$ = NULL;
            jmethodID *AdmMetadata::mids$ = NULL;
            bool AdmMetadata::live$ = false;

            jclass AdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCenter_540df4afb4ddb1b4] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getHasCreatableBody_eee3de00fe971136] = env->getMethodID(cls, "getHasCreatableBody", "()Z");
                mids$[mid_getLaunchNumber_d6ab429752e7c267] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_d2c8eb4129821f0e] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_d6ab429752e7c267] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_d2c8eb4129821f0e] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getObjectName_d2c8eb4129821f0e] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setCenter_9fc8078d81282211] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setObjectID_105e1eadb709d9ac] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_105e1eadb709d9ac] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmMetadata::AdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::org::orekit::files::ccsds::definitions::BodyFacade AdmMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_540df4afb4ddb1b4]));
            }

            jboolean AdmMetadata::getHasCreatableBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getHasCreatableBody_eee3de00fe971136]);
            }

            jint AdmMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_d6ab429752e7c267]);
            }

            ::java::lang::String AdmMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_d2c8eb4129821f0e]));
            }

            jint AdmMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_d6ab429752e7c267]);
            }

            ::java::lang::String AdmMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_d2c8eb4129821f0e]));
            }

            ::java::lang::String AdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_d2c8eb4129821f0e]));
            }

            void AdmMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_9fc8078d81282211], a0.this$);
            }

            void AdmMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_105e1eadb709d9ac], a0.this$);
            }

            void AdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_105e1eadb709d9ac], a0.this$);
            }

            void AdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_AdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmMetadata_init_(t_AdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdmMetadata_getCenter(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getHasCreatableBody(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchNumber(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchPiece(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchYear(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getObjectID(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getObjectName(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_setCenter(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_setObjectID(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_setObjectName(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_validate(t_AdmMetadata *self, PyObject *args);
            static PyObject *t_AdmMetadata_get__center(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__center(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdmMetadata_get__hasCreatableBody(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchNumber(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchPiece(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchYear(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__objectID(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__objectID(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdmMetadata_get__objectName(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__objectName(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdmMetadata, center),
              DECLARE_GET_FIELD(t_AdmMetadata, hasCreatableBody),
              DECLARE_GET_FIELD(t_AdmMetadata, launchNumber),
              DECLARE_GET_FIELD(t_AdmMetadata, launchPiece),
              DECLARE_GET_FIELD(t_AdmMetadata, launchYear),
              DECLARE_GETSET_FIELD(t_AdmMetadata, objectID),
              DECLARE_GETSET_FIELD(t_AdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadata__methods_[] = {
              DECLARE_METHOD(t_AdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadata, getCenter, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getHasCreatableBody, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchNumber, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchPiece, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchYear, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getObjectID, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, setCenter, METH_O),
              DECLARE_METHOD(t_AdmMetadata, setObjectID, METH_O),
              DECLARE_METHOD(t_AdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_AdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadata)[] = {
              { Py_tp_methods, t_AdmMetadata__methods_ },
              { Py_tp_init, (void *) t_AdmMetadata_init_ },
              { Py_tp_getset, t_AdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(AdmMetadata, t_AdmMetadata, AdmMetadata);

            void t_AdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadata), &PY_TYPE_DEF(AdmMetadata), module, "AdmMetadata", 0);
            }

            void t_AdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "class_", make_descriptor(AdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "wrapfn_", make_descriptor(t_AdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadata::initializeClass, 1)))
                return NULL;
              return t_AdmMetadata::wrap_Object(AdmMetadata(((t_AdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmMetadata_init_(t_AdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdmMetadata object((jobject) NULL);

              INT_CALL(object = AdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdmMetadata_getCenter(t_AdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_AdmMetadata_getHasCreatableBody(t_AdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.getHasCreatableBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AdmMetadata_getLaunchNumber(t_AdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AdmMetadata_getLaunchPiece(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaunchPiece());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_getLaunchYear(t_AdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchYear());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AdmMetadata_getObjectID(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectID());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_getObjectName(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_setCenter(t_AdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCenter", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_setObjectID(t_AdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectID(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectID", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_setObjectName(t_AdmMetadata *self, PyObject *arg)
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

            static PyObject *t_AdmMetadata_validate(t_AdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdmMetadata_get__center(t_AdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_AdmMetadata_set__center(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "center", arg);
              return -1;
            }

            static PyObject *t_AdmMetadata_get__hasCreatableBody(t_AdmMetadata *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.getHasCreatableBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AdmMetadata_get__launchNumber(t_AdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AdmMetadata_get__launchPiece(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getLaunchPiece());
              return j2p(value);
            }

            static PyObject *t_AdmMetadata_get__launchYear(t_AdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchYear());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AdmMetadata_get__objectID(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectID());
              return j2p(value);
            }
            static int t_AdmMetadata_set__objectID(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectID(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectID", arg);
              return -1;
            }

            static PyObject *t_AdmMetadata_get__objectName(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_AdmMetadata_set__objectName(t_AdmMetadata *self, PyObject *arg, void *data)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *KeplerianPropagatorBuilder::class$ = NULL;
        jmethodID *KeplerianPropagatorBuilder::mids$ = NULL;
        bool KeplerianPropagatorBuilder::live$ = false;

        jclass KeplerianPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/KeplerianPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ec3a40dd55c962f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_a2fff13b0f3a2421] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_dbf963913bad78cb] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_d0d4476d434c57a0] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/KeplerianPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_ec3a40dd55c962f8, a0.this$, a1.this$, a2)) {}

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_a2fff13b0f3a2421, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel KeplerianPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator KeplerianPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_dbf963913bad78cb], a0.this$));
        }

        KeplerianPropagatorBuilder KeplerianPropagatorBuilder::copy() const
        {
          return KeplerianPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_d0d4476d434c57a0]));
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
        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagatorBuilder)[] = {
          { Py_tp_methods, t_KeplerianPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagatorBuilder, t_KeplerianPropagatorBuilder, KeplerianPropagatorBuilder);

        void t_KeplerianPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagatorBuilder), &PY_TYPE_DEF(KeplerianPropagatorBuilder), module, "KeplerianPropagatorBuilder", 0);
        }

        void t_KeplerianPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "class_", make_descriptor(KeplerianPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "wrapfn_", make_descriptor(t_KeplerianPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagatorBuilder::wrap_Object(KeplerianPropagatorBuilder(((t_KeplerianPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          KeplerianPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_KeplerianPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractLambdaMethod.h"
#include "java/util/Comparator.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractLambdaMethod::class$ = NULL;
          jmethodID *AbstractLambdaMethod::mids$ = NULL;
          bool AbstractLambdaMethod::live$ = false;

          jclass AbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_setComparator_bee08e6612998c92] = env->getMethodID(cls, "setComparator", "(Ljava/util/Comparator;)V");
              mids$[mid_solveILS_c875ff52e2e6fa6c] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_inverseDecomposition_ff7cb6c242604316] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_getDiagReference_be783177b060994b] = env->getMethodID(cls, "getDiagReference", "()[D");
              mids$[mid_getLowReference_be783177b060994b] = env->getMethodID(cls, "getLowReference", "()[D");
              mids$[mid_getZInverseTransformationReference_d6f20bd740dd34cd] = env->getMethodID(cls, "getZInverseTransformationReference", "()[I");
              mids$[mid_getDecorrelatedReference_be783177b060994b] = env->getMethodID(cls, "getDecorrelatedReference", "()[D");
              mids$[mid_zIndex_91b9e1e34b2235d5] = env->getMethodID(cls, "zIndex", "(II)I");
              mids$[mid_lIndex_91b9e1e34b2235d5] = env->getMethodID(cls, "lIndex", "(II)I");
              mids$[mid_integerGaussTransformation_b5d23e6c0858e8ed] = env->getMethodID(cls, "integerGaussTransformation", "(II)V");
              mids$[mid_permutation_4320462275d66e78] = env->getMethodID(cls, "permutation", "(ID)V");
              mids$[mid_getMaxSolution_d6ab429752e7c267] = env->getMethodID(cls, "getMaxSolution", "()I");
              mids$[mid_addSolution_0119d689bc5a4d60] = env->getMethodID(cls, "addSolution", "([JD)V");
              mids$[mid_getMaxDistance_9981f74b2d109da6] = env->getMethodID(cls, "getMaxDistance", "()D");
              mids$[mid_removeSolution_ff7cb6c242604316] = env->getMethodID(cls, "removeSolution", "()V");
              mids$[mid_getSolutionsSize_d6ab429752e7c267] = env->getMethodID(cls, "getSolutionsSize", "()I");
              mids$[mid_ltdlDecomposition_ff7cb6c242604316] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_ff7cb6c242604316] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_ff7cb6c242604316] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_recoverAmbiguities_bc28affeaa2339a4] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_getSize_d6ab429752e7c267] = env->getMethodID(cls, "getSize", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractLambdaMethod::setComparator(const ::java::util::Comparator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setComparator_bee08e6612998c92], a0.this$);
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > AbstractLambdaMethod::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_c875ff52e2e6fa6c], a0, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_AbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_setComparator(t_AbstractLambdaMethod *self, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_solveILS(t_AbstractLambdaMethod *self, PyObject *args);
          static int t_AbstractLambdaMethod_set__comparator(t_AbstractLambdaMethod *self, PyObject *arg, void *data);
          static PyGetSetDef t_AbstractLambdaMethod__fields_[] = {
            DECLARE_SET_FIELD(t_AbstractLambdaMethod, comparator),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_AbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractLambdaMethod, setComparator, METH_O),
            DECLARE_METHOD(t_AbstractLambdaMethod, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractLambdaMethod)[] = {
            { Py_tp_methods, t_AbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractLambdaMethod, t_AbstractLambdaMethod, AbstractLambdaMethod);

          void t_AbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractLambdaMethod), &PY_TYPE_DEF(AbstractLambdaMethod), module, "AbstractLambdaMethod", 0);
          }

          void t_AbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "class_", make_descriptor(AbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "wrapfn_", make_descriptor(t_AbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_AbstractLambdaMethod::wrap_Object(AbstractLambdaMethod(((t_AbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_AbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractLambdaMethod_setComparator(t_AbstractLambdaMethod *self, PyObject *arg)
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(self->object.setComparator(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setComparator", arg);
            return NULL;
          }

          static PyObject *t_AbstractLambdaMethod_solveILS(t_AbstractLambdaMethod *self, PyObject *args)
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > result((jobject) NULL);

            if (!parseArgs(args, "I[D[Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveILS(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "solveILS", args);
            return NULL;
          }

          static int t_AbstractLambdaMethod_set__comparator(t_AbstractLambdaMethod *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Comparator value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Comparator::initializeClass, &value))
              {
                INT_CALL(self->object.setComparator(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "comparator", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LevyDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LevyDistribution::class$ = NULL;
        jmethodID *LevyDistribution::mids$ = NULL;
        bool LevyDistribution::live$ = false;

        jclass LevyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LevyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_9981f74b2d109da6] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LevyDistribution::LevyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble LevyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble LevyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble LevyDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_9981f74b2d109da6]);
        }

        jdouble LevyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble LevyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble LevyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble LevyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble LevyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble LevyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean LevyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble LevyDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
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
        static PyObject *t_LevyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LevyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LevyDistribution_init_(t_LevyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LevyDistribution_cumulativeProbability(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_density(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getLocation(t_LevyDistribution *self);
        static PyObject *t_LevyDistribution_getNumericalMean(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getNumericalVariance(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getScale(t_LevyDistribution *self);
        static PyObject *t_LevyDistribution_getSupportLowerBound(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getSupportUpperBound(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_inverseCumulativeProbability(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_isSupportConnected(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_logDensity(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_get__location(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__numericalMean(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__numericalVariance(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__scale(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportConnected(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportLowerBound(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportUpperBound(t_LevyDistribution *self, void *data);
        static PyGetSetDef t_LevyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LevyDistribution, location),
          DECLARE_GET_FIELD(t_LevyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LevyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LevyDistribution, scale),
          DECLARE_GET_FIELD(t_LevyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LevyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LevyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LevyDistribution__methods_[] = {
          DECLARE_METHOD(t_LevyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LevyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LevyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LevyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LevyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LevyDistribution)[] = {
          { Py_tp_methods, t_LevyDistribution__methods_ },
          { Py_tp_init, (void *) t_LevyDistribution_init_ },
          { Py_tp_getset, t_LevyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LevyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LevyDistribution, t_LevyDistribution, LevyDistribution);

        void t_LevyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LevyDistribution), &PY_TYPE_DEF(LevyDistribution), module, "LevyDistribution", 0);
        }

        void t_LevyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "class_", make_descriptor(LevyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "wrapfn_", make_descriptor(t_LevyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LevyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LevyDistribution::initializeClass, 1)))
            return NULL;
          return t_LevyDistribution::wrap_Object(LevyDistribution(((t_LevyDistribution *) arg)->object.this$));
        }
        static PyObject *t_LevyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LevyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LevyDistribution_init_(t_LevyDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LevyDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LevyDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LevyDistribution_cumulativeProbability(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LevyDistribution_density(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LevyDistribution_getLocation(t_LevyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LevyDistribution_getNumericalMean(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LevyDistribution_getNumericalVariance(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LevyDistribution_getScale(t_LevyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LevyDistribution_getSupportLowerBound(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LevyDistribution_getSupportUpperBound(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LevyDistribution_inverseCumulativeProbability(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LevyDistribution_isSupportConnected(t_LevyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LevyDistribution_logDensity(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_LevyDistribution_get__location(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__numericalMean(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__numericalVariance(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__scale(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__supportConnected(t_LevyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LevyDistribution_get__supportLowerBound(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__supportUpperBound(t_LevyDistribution *self, void *data)
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
#include "org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonAbstractEncodedMessage::class$ = NULL;
          jmethodID *PythonAbstractEncodedMessage::mids$ = NULL;
          bool PythonAbstractEncodedMessage::live$ = false;

          jclass PythonAbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fetchByte_d6ab429752e7c267] = env->getMethodID(cls, "fetchByte", "()I");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractEncodedMessage::PythonAbstractEncodedMessage() : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonAbstractEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractEncodedMessage::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self);
          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args);
          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonAbstractEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncodedMessage)[] = {
            { Py_tp_methods, t_PythonAbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractEncodedMessage_init_ },
            { Py_tp_getset, t_PythonAbstractEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(PythonAbstractEncodedMessage, t_PythonAbstractEncodedMessage, PythonAbstractEncodedMessage);

          void t_PythonAbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractEncodedMessage), &PY_TYPE_DEF(PythonAbstractEncodedMessage), module, "PythonAbstractEncodedMessage", 1);
          }

          void t_PythonAbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "class_", make_descriptor(PythonAbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "wrapfn_", make_descriptor(t_PythonAbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "fetchByte", "()I", (void *) t_PythonAbstractEncodedMessage_fetchByte0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractEncodedMessage::wrap_Object(PythonAbstractEncodedMessage(((t_PythonAbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonAbstractEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args)
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

          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "fetchByte", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("fetchByte", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data)
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
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverCommonParametersWithDerivatives::class$ = NULL;
        jmethodID *GroundReceiverCommonParametersWithDerivatives::mids$ = NULL;
        bool GroundReceiverCommonParametersWithDerivatives::live$ = false;

        jclass GroundReceiverCommonParametersWithDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_91ed10f57cb0bfb7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Ljava/util/Map;Lorg/orekit/frames/FieldTransform;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
            mids$[mid_getIndices_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getIndices", "()Ljava/util/Map;");
            mids$[mid_getOffsetToInertialDownlink_c58e1d0e1f3afd7d] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getState_8fbfa58855031235] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_be698fa91827b9b2] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTauD_9d89382e9667f8f2] = env->getMethodID(cls, "getTauD", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getTransitPV_be698fa91827b9b2] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTransitState_8fbfa58855031235] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithDerivatives::GroundReceiverCommonParametersWithDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::java::util::Map & a1, const ::org::orekit::frames::FieldTransform & a2, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a3, const ::org::hipparchus::analysis::differentiation::Gradient & a4, const ::org::orekit::propagation::SpacecraftState & a5, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91ed10f57cb0bfb7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::java::util::Map GroundReceiverCommonParametersWithDerivatives::getIndices() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIndices_dbcb8bbac6b35e0d]));
        }

        ::org::orekit::frames::FieldTransform GroundReceiverCommonParametersWithDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_c58e1d0e1f3afd7d]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_8fbfa58855031235]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_be698fa91827b9b2]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GroundReceiverCommonParametersWithDerivatives::getTauD() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getTauD_9d89382e9667f8f2]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_be698fa91827b9b2]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_8fbfa58855031235]));
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
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyGetSetDef t_GroundReceiverCommonParametersWithDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, indices),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, offsetToInertialDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, state),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, stationDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, tauD),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitPV),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverCommonParametersWithDerivatives__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getIndices, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getOffsetToInertialDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getState, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getStationDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTauD, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitPV, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitState, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverCommonParametersWithDerivatives)[] = {
          { Py_tp_methods, t_GroundReceiverCommonParametersWithDerivatives__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverCommonParametersWithDerivatives_init_ },
          { Py_tp_getset, t_GroundReceiverCommonParametersWithDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverCommonParametersWithDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundReceiverCommonParametersWithDerivatives, t_GroundReceiverCommonParametersWithDerivatives, GroundReceiverCommonParametersWithDerivatives);

        void t_GroundReceiverCommonParametersWithDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverCommonParametersWithDerivatives), &PY_TYPE_DEF(GroundReceiverCommonParametersWithDerivatives), module, "GroundReceiverCommonParametersWithDerivatives", 0);
        }

        void t_GroundReceiverCommonParametersWithDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "class_", make_descriptor(GroundReceiverCommonParametersWithDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "wrapfn_", make_descriptor(t_GroundReceiverCommonParametersWithDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverCommonParametersWithDerivatives::wrap_Object(GroundReceiverCommonParametersWithDerivatives(((t_GroundReceiverCommonParametersWithDerivatives *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::frames::FieldTransform a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::analysis::differentiation::Gradient a4((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a5((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a6((jobject) NULL);
          PyTypeObject **p6;
          GroundReceiverCommonParametersWithDerivatives object((jobject) NULL);

          if (!parseArgs(args, "kKKKkkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::java::util::Map::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2, &p2, ::org::orekit::frames::t_FieldTransform::parameters_, &a3, &p3, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
          {
            INT_CALL(object = GroundReceiverCommonParametersWithDerivatives(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Integer));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::frames::FieldTransform result((jobject) NULL);
          OBJ_CALL(result = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::frames::FieldTransform value((jobject) NULL);
          OBJ_CALL(value = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonLOF.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonLOF::class$ = NULL;
      jmethodID *PythonLOF::mids$ = NULL;
      bool PythonLOF::live$ = false;

      jclass PythonLOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonLOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_rotationFromInertial_7972874aa60c5cbb] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_24d473279eeb35d9] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLOF::PythonLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonLOF::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonLOF::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonLOF::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self);
      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args);
      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data);
      static PyGetSetDef t_PythonLOF__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLOF, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLOF__methods_[] = {
        DECLARE_METHOD(t_PythonLOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLOF, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLOF)[] = {
        { Py_tp_methods, t_PythonLOF__methods_ },
        { Py_tp_init, (void *) t_PythonLOF_init_ },
        { Py_tp_getset, t_PythonLOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLOF, t_PythonLOF, PythonLOF);

      void t_PythonLOF::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLOF), &PY_TYPE_DEF(PythonLOF), module, "PythonLOF", 1);
      }

      void t_PythonLOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "class_", make_descriptor(PythonLOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "wrapfn_", make_descriptor(t_PythonLOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLOF::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonLOF_getName0 },
          { "pythonDecRef", "()V", (void *) t_PythonLOF_pythonDecRef1 },
          { "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonLOF_rotationFromInertial2 },
          { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonLOF_rotationFromInertial3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLOF::initializeClass, 1)))
          return NULL;
        return t_PythonLOF::wrap_Object(PythonLOF(((t_PythonLOF *) arg)->object.this$));
      }
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds)
      {
        PythonLOF object((jobject) NULL);

        INT_CALL(object = PythonLOF());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args)
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

      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
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

      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
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

      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data)
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
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/String.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader$Parser::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader$Parser::live$ = false;

      jclass UTCTAIHistoryFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_cf69cc549132f899] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader$Parser::UTCTAIHistoryFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::java::util::List UTCTAIHistoryFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_cf69cc549132f899], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIHistoryFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader$Parser, t_UTCTAIHistoryFilesLoader$Parser, UTCTAIHistoryFilesLoader$Parser);

      void t_UTCTAIHistoryFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader$Parser), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser), module, "UTCTAIHistoryFilesLoader$Parser", 0);
      }

      void t_UTCTAIHistoryFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "class_", make_descriptor(UTCTAIHistoryFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader$Parser::wrap_Object(UTCTAIHistoryFilesLoader$Parser(((t_UTCTAIHistoryFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        UTCTAIHistoryFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = UTCTAIHistoryFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/AlongTrackAiming.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
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
              mids$[mid_init$_16ede473df3c00bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/orbits/Orbit;Z)V");
              mids$[mid_alongTileDirection_73bb6a45361007eb] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_d751c1a57012b438] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AlongTrackAiming::AlongTrackAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_16ede473df3c00bb, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AlongTrackAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_73bb6a45361007eb], a0.this$, a1.this$));
          }

          ::java::util::List AlongTrackAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_d751c1a57012b438]));
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
#include "org/orekit/forces/radiation/IsotropicRadiationCNES95Convention.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationCNES95Convention::class$ = NULL;
        jmethodID *IsotropicRadiationCNES95Convention::mids$ = NULL;
        bool IsotropicRadiationCNES95Convention::live$ = false;

        jclass IsotropicRadiationCNES95Convention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationCNES95Convention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationCNES95Convention::IsotropicRadiationCNES95Convention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationCNES95Convention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_d751c1a57012b438]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self);
        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationCNES95Convention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationCNES95Convention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationCNES95Convention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationCNES95Convention)[] = {
          { Py_tp_methods, t_IsotropicRadiationCNES95Convention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationCNES95Convention_init_ },
          { Py_tp_getset, t_IsotropicRadiationCNES95Convention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationCNES95Convention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationCNES95Convention, t_IsotropicRadiationCNES95Convention, IsotropicRadiationCNES95Convention);

        void t_IsotropicRadiationCNES95Convention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationCNES95Convention), &PY_TYPE_DEF(IsotropicRadiationCNES95Convention), module, "IsotropicRadiationCNES95Convention", 0);
        }

        void t_IsotropicRadiationCNES95Convention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "class_", make_descriptor(IsotropicRadiationCNES95Convention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "wrapfn_", make_descriptor(t_IsotropicRadiationCNES95Convention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationCNES95Convention::wrap_Object(IsotropicRadiationCNES95Convention(((t_IsotropicRadiationCNES95Convention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationCNES95Convention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationCNES95Convention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log10.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log10::class$ = NULL;
        jmethodID *Log10::mids$ = NULL;
        bool Log10::live$ = false;

        jclass Log10::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log10");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log10::Log10() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Log10::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log10::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args);

        static PyMethodDef t_Log10__methods_[] = {
          DECLARE_METHOD(t_Log10, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log10, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log10)[] = {
          { Py_tp_methods, t_Log10__methods_ },
          { Py_tp_init, (void *) t_Log10_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log10)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log10, t_Log10, Log10);

        void t_Log10::install(PyObject *module)
        {
          installType(&PY_TYPE(Log10), &PY_TYPE_DEF(Log10), module, "Log10", 0);
        }

        void t_Log10::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "class_", make_descriptor(Log10::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "wrapfn_", make_descriptor(t_Log10::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log10), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log10_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log10::initializeClass, 1)))
            return NULL;
          return t_Log10::wrap_Object(Log10(((t_Log10 *) arg)->object.this$));
        }
        static PyObject *t_Log10_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log10::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log10_init_(t_Log10 *self, PyObject *args, PyObject *kwds)
        {
          Log10 object((jobject) NULL);

          INT_CALL(object = Log10());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log10_value(t_Log10 *self, PyObject *args)
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
#include "org/hipparchus/dfp/DfpDec.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpDec::class$ = NULL;
      jmethodID *DfpDec::mids$ = NULL;
      bool DfpDec::live$ = false;

      jclass DfpDec::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpDec");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9c0627e220735f30] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/dfp/Dfp;)V");
          mids$[mid_newInstance_4b2d5e048d6e2660] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_d41bacfbb0036b2f] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_f4723517f29214b4] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_d026e8379de654e0] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_e99ab98f8c6bb318] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_c17cec9f6bbb62d4] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_9e2bf41ef3516323] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_1a6c1bff63409b1a] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_f4723517f29214b4] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getDecimalDigits_d6ab429752e7c267] = env->getMethodID(cls, "getDecimalDigits", "()I");
          mids$[mid_round_d938fc64e8c6df2d] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpDec::DfpDec(const ::org::hipparchus::dfp::Dfp & a0) : ::org::hipparchus::dfp::Dfp(env->newObject(initializeClass, &mids$, mid_init$_9c0627e220735f30, a0.this$)) {}

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_d41bacfbb0036b2f], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_d026e8379de654e0], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_e99ab98f8c6bb318], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_c17cec9f6bbb62d4], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_9e2bf41ef3516323], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_1a6c1bff63409b1a], a0, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::nextAfter(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_f4723517f29214b4], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args);
      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args);

      static PyMethodDef t_DfpDec__methods_[] = {
        DECLARE_METHOD(t_DfpDec, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_DfpDec, nextAfter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpDec)[] = {
        { Py_tp_methods, t_DfpDec__methods_ },
        { Py_tp_init, (void *) t_DfpDec_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpDec)[] = {
        &PY_TYPE_DEF(::org::hipparchus::dfp::Dfp),
        NULL
      };

      DEFINE_TYPE(DfpDec, t_DfpDec, DfpDec);

      void t_DfpDec::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpDec), &PY_TYPE_DEF(DfpDec), module, "DfpDec", 0);
      }

      void t_DfpDec::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "class_", make_descriptor(DfpDec::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "wrapfn_", make_descriptor(t_DfpDec::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpDec::initializeClass, 1)))
          return NULL;
        return t_DfpDec::wrap_Object(DfpDec(((t_DfpDec *) arg)->object.this$));
      }
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpDec::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        DfpDec object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          INT_CALL(object = DfpDec(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jbyte a0;
            jbyte a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "newInstance", args, 2);
      }

      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "nextAfter", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MerweUnscentedTransform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MerweUnscentedTransform::class$ = NULL;
      jmethodID *MerweUnscentedTransform::mids$ = NULL;
      bool MerweUnscentedTransform::live$ = false;
      jdouble MerweUnscentedTransform::DEFAULT_ALPHA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_BETA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass MerweUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MerweUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_2baad0ec229f7c27] = env->getMethodID(cls, "<init>", "(IDDD)V");
          mids$[mid_getWc_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_9981f74b2d109da6] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ALPHA = env->getStaticDoubleField(cls, "DEFAULT_ALPHA");
          DEFAULT_BETA = env->getStaticDoubleField(cls, "DEFAULT_BETA");
          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_2baad0ec229f7c27, a0, a1, a2, a3)) {}

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_92d7e8d8d3f1dfcf]));
      }

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_92d7e8d8d3f1dfcf]));
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
      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data);
      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data);
      static PyGetSetDef t_MerweUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MerweUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_MerweUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MerweUnscentedTransform)[] = {
        { Py_tp_methods, t_MerweUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_MerweUnscentedTransform_init_ },
        { Py_tp_getset, t_MerweUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MerweUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(MerweUnscentedTransform, t_MerweUnscentedTransform, MerweUnscentedTransform);

      void t_MerweUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(MerweUnscentedTransform), &PY_TYPE_DEF(MerweUnscentedTransform), module, "MerweUnscentedTransform", 0);
      }

      void t_MerweUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "class_", make_descriptor(MerweUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "wrapfn_", make_descriptor(t_MerweUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(MerweUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_ALPHA", make_descriptor(MerweUnscentedTransform::DEFAULT_ALPHA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_BETA", make_descriptor(MerweUnscentedTransform::DEFAULT_BETA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(MerweUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MerweUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_MerweUnscentedTransform::wrap_Object(MerweUnscentedTransform(((t_MerweUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MerweUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MerweUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MerweUnscentedTransform(a0, a1, a2, a3));
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

      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagationType::class$ = NULL;
      jmethodID *PropagationType::mids$ = NULL;
      bool PropagationType::live$ = false;
      PropagationType *PropagationType::MEAN = NULL;
      PropagationType *PropagationType::OSCULATING = NULL;

      jclass PropagationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_e6e6e9936b2bdda7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/PropagationType;");
          mids$[mid_values_78f4b0c27f45eaeb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/PropagationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MEAN = new PropagationType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/propagation/PropagationType;"));
          OSCULATING = new PropagationType(env->getStaticObjectField(cls, "OSCULATING", "Lorg/orekit/propagation/PropagationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagationType PropagationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PropagationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e6e6e9936b2bdda7], a0.this$));
      }

      JArray< PropagationType > PropagationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PropagationType >(env->callStaticObjectMethod(cls, mids$[mid_values_78f4b0c27f45eaeb]));
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
      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args);
      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PropagationType_values(PyTypeObject *type);
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data);
      static PyGetSetDef t_PropagationType__fields_[] = {
        DECLARE_GET_FIELD(t_PropagationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagationType__methods_[] = {
        DECLARE_METHOD(t_PropagationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PropagationType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagationType)[] = {
        { Py_tp_methods, t_PropagationType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PropagationType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagationType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PropagationType, t_PropagationType, PropagationType);
      PyObject *t_PropagationType::wrap_Object(const PropagationType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PropagationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PropagationType::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagationType), &PY_TYPE_DEF(PropagationType), module, "PropagationType", 0);
      }

      void t_PropagationType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "class_", make_descriptor(PropagationType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "wrapfn_", make_descriptor(t_PropagationType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PropagationType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "MEAN", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "OSCULATING", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::OSCULATING)));
      }

      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagationType::initializeClass, 1)))
          return NULL;
        return t_PropagationType::wrap_Object(PropagationType(((t_PropagationType *) arg)->object.this$));
      }
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagationType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PropagationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::PropagationType::valueOf(a0));
          return t_PropagationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PropagationType_values(PyTypeObject *type)
      {
        JArray< PropagationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::propagation::PropagationType::values());
        return JArray<jobject>(result.this$).wrap(t_PropagationType::wrap_jobject);
      }
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmData::class$ = NULL;
            jmethodID *CdmData::mids$ = NULL;
            bool CdmData::live$ = false;

            jclass CdmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8f3b9683135277df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_init$_3b0c9b96f90e2c48] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_55d5a7297993a448] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_fc96f89513097e1a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_getAdditionalCovMetadataBlock_d06bce2b6f32826e] = env->getMethodID(cls, "getAdditionalCovMetadataBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;");
                mids$[mid_getAdditionalParametersBlock_b7539d838be95deb] = env->getMethodID(cls, "getAdditionalParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;");
                mids$[mid_getComments_d751c1a57012b438] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                mids$[mid_getODParametersBlock_819b89b22c1391ef] = env->getMethodID(cls, "getODParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;");
                mids$[mid_getRTNCovarianceBlock_38c7abd8f1601045] = env->getMethodID(cls, "getRTNCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;");
                mids$[mid_getSig3EigVec3CovarianceBlock_efb6b5e5adb93670] = env->getMethodID(cls, "getSig3EigVec3CovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;");
                mids$[mid_getStateVectorBlock_71fc0f205bb99087] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/StateVector;");
                mids$[mid_getUserDefinedBlock_b8dba07746e1b089] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                mids$[mid_getXYZCovarianceBlock_a3156916a04233f7] = env->getMethodID(cls, "getXYZCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;");
                mids$[mid_setAdditionalParametersBlock_0f782f0bfc7b0f7a] = env->getMethodID(cls, "setAdditionalParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)V");
                mids$[mid_setCovarianceMatrixBlock_b2b9a4f46dad496a] = env->getMethodID(cls, "setCovarianceMatrixBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_setODParametersBlock_19de663aec1a19b3] = env->getMethodID(cls, "setODParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)V");
                mids$[mid_setUserDefinedBlock_2df9715c380cacea] = env->getMethodID(cls, "setUserDefinedBlock", "(Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f3b9683135277df, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b0c9b96f90e2c48, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55d5a7297993a448, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc96f89513097e1a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata CdmData::getAdditionalCovMetadataBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata(env->callObjectMethod(this$, mids$[mid_getAdditionalCovMetadataBlock_d06bce2b6f32826e]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters CdmData::getAdditionalParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters(env->callObjectMethod(this$, mids$[mid_getAdditionalParametersBlock_b7539d838be95deb]));
            }

            ::java::util::List CdmData::getComments() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_d751c1a57012b438]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ODParameters CdmData::getODParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ODParameters(env->callObjectMethod(this$, mids$[mid_getODParametersBlock_819b89b22c1391ef]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance CdmData::getRTNCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceBlock_38c7abd8f1601045]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance CdmData::getSig3EigVec3CovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance(env->callObjectMethod(this$, mids$[mid_getSig3EigVec3CovarianceBlock_efb6b5e5adb93670]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::StateVector CdmData::getStateVectorBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_71fc0f205bb99087]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined CdmData::getUserDefinedBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_b8dba07746e1b089]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance CdmData::getXYZCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceBlock_a3156916a04233f7]));
            }

            void CdmData::setAdditionalParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdditionalParametersBlock_0f782f0bfc7b0f7a], a0.this$);
            }

            void CdmData::setCovarianceMatrixBlock(const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixBlock_b2b9a4f46dad496a], a0.this$);
            }

            void CdmData::setODParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setODParametersBlock_19de663aec1a19b3], a0.this$);
            }

            void CdmData::setUserDefinedBlock(const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUserDefinedBlock_2df9715c380cacea], a0.this$);
            }

            void CdmData::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self);
            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getComments(t_CdmData *self);
            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self);
            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self);
            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data);
            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data);
            static PyGetSetDef t_CdmData__fields_[] = {
              DECLARE_GET_FIELD(t_CdmData, additionalCovMetadataBlock),
              DECLARE_GETSET_FIELD(t_CdmData, additionalParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, comments),
              DECLARE_SET_FIELD(t_CdmData, covarianceMatrixBlock),
              DECLARE_GETSET_FIELD(t_CdmData, oDParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, rTNCovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, sig3EigVec3CovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, stateVectorBlock),
              DECLARE_GETSET_FIELD(t_CdmData, userDefinedBlock),
              DECLARE_GET_FIELD(t_CdmData, xYZCovarianceBlock),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmData__methods_[] = {
              DECLARE_METHOD(t_CdmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, getAdditionalCovMetadataBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getAdditionalParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getComments, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getODParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getRTNCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getSig3EigVec3CovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getStateVectorBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getUserDefinedBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getXYZCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, setAdditionalParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setCovarianceMatrixBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setODParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setUserDefinedBlock, METH_O),
              DECLARE_METHOD(t_CdmData, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmData)[] = {
              { Py_tp_methods, t_CdmData__methods_ },
              { Py_tp_init, (void *) t_CdmData_init_ },
              { Py_tp_getset, t_CdmData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmData, t_CdmData, CdmData);

            void t_CdmData::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmData), &PY_TYPE_DEF(CdmData), module, "CdmData", 0);
            }

            void t_CdmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "class_", make_descriptor(CdmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "wrapfn_", make_descriptor(t_CdmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmData::initializeClass, 1)))
                return NULL;
              return t_CdmData::wrap_Object(CdmData(((t_CdmData *) arg)->object.this$));
            }
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a5((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getComments(t_CdmData *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComments());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(result);
            }

            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }

            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAdditionalParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdditionalParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCovarianceMatrixBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setODParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setODParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setUserDefinedBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUserDefinedBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg)
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

            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(value);
            }
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setAdditionalParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "additionalParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComments());
              return ::java::util::t_List::wrap_Object(value);
            }

            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMatrixBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMatrixBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(value);
            }
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setODParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "oDParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &value))
                {
                  INT_CALL(self->object.setUserDefinedBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "userDefinedBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticModelLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticModelLoader::class$ = NULL;
        jmethodID *GeoMagneticModelLoader::mids$ = NULL;
        bool GeoMagneticModelLoader::live$ = false;

        jclass GeoMagneticModelLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticModelLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getModels_3bfef5c77ceb081a] = env->getMethodID(cls, "getModels", "()Ljava/util/Collection;");
            mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
            mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticModelLoader::GeoMagneticModelLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::java::util::Collection GeoMagneticModelLoader::getModels() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getModels_3bfef5c77ceb081a]));
        }

        void GeoMagneticModelLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
        }

        jboolean GeoMagneticModelLoader::stillAcceptsData() const
        {
          return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args);
        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data);
        static PyGetSetDef t_GeoMagneticModelLoader__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticModelLoader, models),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticModelLoader__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticModelLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, getModels, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, loadData, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, stillAcceptsData, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticModelLoader)[] = {
          { Py_tp_methods, t_GeoMagneticModelLoader__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticModelLoader_init_ },
          { Py_tp_getset, t_GeoMagneticModelLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticModelLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticModelLoader, t_GeoMagneticModelLoader, GeoMagneticModelLoader);

        void t_GeoMagneticModelLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticModelLoader), &PY_TYPE_DEF(GeoMagneticModelLoader), module, "GeoMagneticModelLoader", 0);
        }

        void t_GeoMagneticModelLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "class_", make_descriptor(GeoMagneticModelLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "wrapfn_", make_descriptor(t_GeoMagneticModelLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticModelLoader::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticModelLoader::wrap_Object(GeoMagneticModelLoader(((t_GeoMagneticModelLoader *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticModelLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds)
        {
          GeoMagneticModelLoader object((jobject) NULL);

          INT_CALL(object = GeoMagneticModelLoader());
          self->object = object;

          return 0;
        }

        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::models::earth::PY_TYPE(GeoMagneticField));
        }

        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args)
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

        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.stillAcceptsData());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MicrosphereProjectionInterpolator::class$ = NULL;
        jmethodID *MicrosphereProjectionInterpolator::mids$ = NULL;
        bool MicrosphereProjectionInterpolator::live$ = false;

        jclass MicrosphereProjectionInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f62c4f05c4d8be9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;DZD)V");
            mids$[mid_init$_5d29c37cea22b35b] = env->getMethodID(cls, "<init>", "(IIDDDDZD)V");
            mids$[mid_interpolate_cc20eacf9f3f822e] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(const ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere & a0, jdouble a1, jboolean a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f62c4f05c4d8be9, a0.this$, a1, a2, a3)) {}

        MicrosphereProjectionInterpolator::MicrosphereProjectionInterpolator(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jboolean a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d29c37cea22b35b, a0, a1, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::analysis::MultivariateFunction MicrosphereProjectionInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_cc20eacf9f3f822e], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args);

        static PyMethodDef t_MicrosphereProjectionInterpolator__methods_[] = {
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MicrosphereProjectionInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MicrosphereProjectionInterpolator)[] = {
          { Py_tp_methods, t_MicrosphereProjectionInterpolator__methods_ },
          { Py_tp_init, (void *) t_MicrosphereProjectionInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MicrosphereProjectionInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MicrosphereProjectionInterpolator, t_MicrosphereProjectionInterpolator, MicrosphereProjectionInterpolator);

        void t_MicrosphereProjectionInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MicrosphereProjectionInterpolator), &PY_TYPE_DEF(MicrosphereProjectionInterpolator), module, "MicrosphereProjectionInterpolator", 0);
        }

        void t_MicrosphereProjectionInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "class_", make_descriptor(MicrosphereProjectionInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "wrapfn_", make_descriptor(t_MicrosphereProjectionInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MicrosphereProjectionInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MicrosphereProjectionInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 1)))
            return NULL;
          return t_MicrosphereProjectionInterpolator::wrap_Object(MicrosphereProjectionInterpolator(((t_MicrosphereProjectionInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MicrosphereProjectionInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MicrosphereProjectionInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MicrosphereProjectionInterpolator_init_(t_MicrosphereProjectionInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere a0((jobject) NULL);
              jdouble a1;
              jboolean a2;
              jdouble a3;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDZD", ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              jint a0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jboolean a6;
              jdouble a7;
              MicrosphereProjectionInterpolator object((jobject) NULL);

              if (!parseArgs(args, "IIDDDDZD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = MicrosphereProjectionInterpolator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_MicrosphereProjectionInterpolator_interpolate(t_MicrosphereProjectionInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1060::class$ = NULL;
              jmethodID *Rtcm1060::mids$ = NULL;
              bool Rtcm1060::live$ = false;

              jclass Rtcm1060::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a31f35e7af490700] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1060::Rtcm1060(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a31f35e7af490700, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args);
              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data);
              static PyGetSetDef t_Rtcm1060__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1060, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1060__methods_[] = {
                DECLARE_METHOD(t_Rtcm1060, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1060)[] = {
                { Py_tp_methods, t_Rtcm1060__methods_ },
                { Py_tp_init, (void *) t_Rtcm1060_init_ },
                { Py_tp_getset, t_Rtcm1060__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1060)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1060, t_Rtcm1060, Rtcm1060);
              PyObject *t_Rtcm1060::wrap_Object(const Rtcm1060& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1060::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1060::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1060), &PY_TYPE_DEF(Rtcm1060), module, "Rtcm1060", 0);
              }

              void t_Rtcm1060::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "class_", make_descriptor(Rtcm1060::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "wrapfn_", make_descriptor(t_Rtcm1060::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1060::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1060::wrap_Object(Rtcm1060(((t_Rtcm1060 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1060::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1060 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1060(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesFieldIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegrator::mids$ = NULL;
        bool ThreeEighthesFieldIntegrator::live$ = false;

        jclass ThreeEighthesFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_88bffd71fb0313dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_23a890d7aa2242fd] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegrator::ThreeEighthesFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_88bffd71fb0313dc, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ThreeEighthesFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
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
        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegrator, t_ThreeEighthesFieldIntegrator, ThreeEighthesFieldIntegrator);
        PyObject *t_ThreeEighthesFieldIntegrator::wrap_Object(const ThreeEighthesFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegrator), &PY_TYPE_DEF(ThreeEighthesFieldIntegrator), module, "ThreeEighthesFieldIntegrator", 0);
        }

        void t_ThreeEighthesFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "class_", make_descriptor(ThreeEighthesFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegrator::wrap_Object(ThreeEighthesFieldIntegrator(((t_ThreeEighthesFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ThreeEighthesFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ThreeEighthesFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *KvnLexicalAnalyzer::class$ = NULL;
            jmethodID *KvnLexicalAnalyzer::mids$ = NULL;
            bool KvnLexicalAnalyzer::live$ = false;

            jclass KvnLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_023df3a7dca17c03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_b478c9bff3268dbb] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnLexicalAnalyzer::KvnLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_023df3a7dca17c03, a0.this$)) {}

            ::java::lang::Object KvnLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_b478c9bff3268dbb], a0.this$));
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
            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_KvnLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_KvnLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnLexicalAnalyzer)[] = {
              { Py_tp_methods, t_KvnLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_KvnLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(KvnLexicalAnalyzer, t_KvnLexicalAnalyzer, KvnLexicalAnalyzer);

            void t_KvnLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnLexicalAnalyzer), &PY_TYPE_DEF(KvnLexicalAnalyzer), module, "KvnLexicalAnalyzer", 0);
            }

            void t_KvnLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "class_", make_descriptor(KvnLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "wrapfn_", make_descriptor(t_KvnLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_KvnLexicalAnalyzer::wrap_Object(KvnLexicalAnalyzer(((t_KvnLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              KvnLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = KvnLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
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
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSPhase::class$ = NULL;
          jmethodID *OneWayGNSSPhase::mids$ = NULL;
          bool OneWayGNSSPhase::live$ = false;
          ::java::lang::String *OneWayGNSSPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *OneWayGNSSPhase::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c5c19ff9f4a8cd3f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_7daccb22665e511b] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_9981f74b2d109da6] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhase::OneWayGNSSPhase(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_c5c19ff9f4a8cd3f, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

          ::org::orekit::utils::ParameterDriver OneWayGNSSPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_7daccb22665e511b]));
          }

          jdouble OneWayGNSSPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_9981f74b2d109da6]);
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
          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args);
          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhase__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, wavelength),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhase__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhase)[] = {
            { Py_tp_methods, t_OneWayGNSSPhase__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhase_init_ },
            { Py_tp_getset, t_OneWayGNSSPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhase, t_OneWayGNSSPhase, OneWayGNSSPhase);
          PyObject *t_OneWayGNSSPhase::wrap_Object(const OneWayGNSSPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhase), &PY_TYPE_DEF(OneWayGNSSPhase), module, "OneWayGNSSPhase", 0);
          }

          void t_OneWayGNSSPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "class_", make_descriptor(OneWayGNSSPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "wrapfn_", make_descriptor(t_OneWayGNSSPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*OneWayGNSSPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhase::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhase::wrap_Object(OneWayGNSSPhase(((t_OneWayGNSSPhase *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
            OneWayGNSSPhase object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = OneWayGNSSPhase(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
