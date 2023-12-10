#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/TLEConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEConstants::class$ = NULL;
          jmethodID *TLEConstants::mids$ = NULL;
          bool TLEConstants::live$ = false;
          jdouble TLEConstants::A3OVK2 = (jdouble) 0;
          jdouble TLEConstants::C1L = (jdouble) 0;
          jdouble TLEConstants::C1SS = (jdouble) 0;
          jdouble TLEConstants::CK2 = (jdouble) 0;
          jdouble TLEConstants::CK4 = (jdouble) 0;
          jdouble TLEConstants::C_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::C_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::C_FASX2 = (jdouble) 0;
          jdouble TLEConstants::C_G22 = (jdouble) 0;
          jdouble TLEConstants::C_G32 = (jdouble) 0;
          jdouble TLEConstants::C_G44 = (jdouble) 0;
          jdouble TLEConstants::C_G52 = (jdouble) 0;
          jdouble TLEConstants::C_G54 = (jdouble) 0;
          jdouble TLEConstants::EARTH_RADIUS = (jdouble) 0;
          jdouble TLEConstants::MINUTES_PER_DAY = (jdouble) 0;
          jdouble TLEConstants::MU = (jdouble) 0;
          jdouble TLEConstants::NORMALIZED_EQUATORIAL_RADIUS = (jdouble) 0;
          jdouble TLEConstants::ONE_THIRD = (jdouble) 0;
          jdouble TLEConstants::Q22 = (jdouble) 0;
          jdouble TLEConstants::Q31 = (jdouble) 0;
          jdouble TLEConstants::Q33 = (jdouble) 0;
          jdouble TLEConstants::QOMS2T = (jdouble) 0;
          jdouble TLEConstants::ROOT22 = (jdouble) 0;
          jdouble TLEConstants::ROOT32 = (jdouble) 0;
          jdouble TLEConstants::ROOT44 = (jdouble) 0;
          jdouble TLEConstants::ROOT52 = (jdouble) 0;
          jdouble TLEConstants::ROOT54 = (jdouble) 0;
          jdouble TLEConstants::S = (jdouble) 0;
          jdouble TLEConstants::S_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::S_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::S_FASX2 = (jdouble) 0;
          jdouble TLEConstants::S_G22 = (jdouble) 0;
          jdouble TLEConstants::S_G32 = (jdouble) 0;
          jdouble TLEConstants::S_G44 = (jdouble) 0;
          jdouble TLEConstants::S_G52 = (jdouble) 0;
          jdouble TLEConstants::S_G54 = (jdouble) 0;
          jdouble TLEConstants::THDT = (jdouble) 0;
          jdouble TLEConstants::TWO_THIRD = (jdouble) 0;
          jdouble TLEConstants::XJ2 = (jdouble) 0;
          jdouble TLEConstants::XJ3 = (jdouble) 0;
          jdouble TLEConstants::XJ4 = (jdouble) 0;
          jdouble TLEConstants::XKE = (jdouble) 0;
          jdouble TLEConstants::ZEL = (jdouble) 0;
          jdouble TLEConstants::ZES = (jdouble) 0;
          jdouble TLEConstants::ZNL = (jdouble) 0;
          jdouble TLEConstants::ZNS = (jdouble) 0;

          jclass TLEConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEConstants");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A3OVK2 = env->getStaticDoubleField(cls, "A3OVK2");
              C1L = env->getStaticDoubleField(cls, "C1L");
              C1SS = env->getStaticDoubleField(cls, "C1SS");
              CK2 = env->getStaticDoubleField(cls, "CK2");
              CK4 = env->getStaticDoubleField(cls, "CK4");
              C_2FASX4 = env->getStaticDoubleField(cls, "C_2FASX4");
              C_3FASX6 = env->getStaticDoubleField(cls, "C_3FASX6");
              C_FASX2 = env->getStaticDoubleField(cls, "C_FASX2");
              C_G22 = env->getStaticDoubleField(cls, "C_G22");
              C_G32 = env->getStaticDoubleField(cls, "C_G32");
              C_G44 = env->getStaticDoubleField(cls, "C_G44");
              C_G52 = env->getStaticDoubleField(cls, "C_G52");
              C_G54 = env->getStaticDoubleField(cls, "C_G54");
              EARTH_RADIUS = env->getStaticDoubleField(cls, "EARTH_RADIUS");
              MINUTES_PER_DAY = env->getStaticDoubleField(cls, "MINUTES_PER_DAY");
              MU = env->getStaticDoubleField(cls, "MU");
              NORMALIZED_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "NORMALIZED_EQUATORIAL_RADIUS");
              ONE_THIRD = env->getStaticDoubleField(cls, "ONE_THIRD");
              Q22 = env->getStaticDoubleField(cls, "Q22");
              Q31 = env->getStaticDoubleField(cls, "Q31");
              Q33 = env->getStaticDoubleField(cls, "Q33");
              QOMS2T = env->getStaticDoubleField(cls, "QOMS2T");
              ROOT22 = env->getStaticDoubleField(cls, "ROOT22");
              ROOT32 = env->getStaticDoubleField(cls, "ROOT32");
              ROOT44 = env->getStaticDoubleField(cls, "ROOT44");
              ROOT52 = env->getStaticDoubleField(cls, "ROOT52");
              ROOT54 = env->getStaticDoubleField(cls, "ROOT54");
              S = env->getStaticDoubleField(cls, "S");
              S_2FASX4 = env->getStaticDoubleField(cls, "S_2FASX4");
              S_3FASX6 = env->getStaticDoubleField(cls, "S_3FASX6");
              S_FASX2 = env->getStaticDoubleField(cls, "S_FASX2");
              S_G22 = env->getStaticDoubleField(cls, "S_G22");
              S_G32 = env->getStaticDoubleField(cls, "S_G32");
              S_G44 = env->getStaticDoubleField(cls, "S_G44");
              S_G52 = env->getStaticDoubleField(cls, "S_G52");
              S_G54 = env->getStaticDoubleField(cls, "S_G54");
              THDT = env->getStaticDoubleField(cls, "THDT");
              TWO_THIRD = env->getStaticDoubleField(cls, "TWO_THIRD");
              XJ2 = env->getStaticDoubleField(cls, "XJ2");
              XJ3 = env->getStaticDoubleField(cls, "XJ3");
              XJ4 = env->getStaticDoubleField(cls, "XJ4");
              XKE = env->getStaticDoubleField(cls, "XKE");
              ZEL = env->getStaticDoubleField(cls, "ZEL");
              ZES = env->getStaticDoubleField(cls, "ZES");
              ZNL = env->getStaticDoubleField(cls, "ZNL");
              ZNS = env->getStaticDoubleField(cls, "ZNS");
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_TLEConstants__methods_[] = {
            DECLARE_METHOD(t_TLEConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEConstants, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEConstants)[] = {
            { Py_tp_methods, t_TLEConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLEConstants, t_TLEConstants, TLEConstants);

          void t_TLEConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEConstants), &PY_TYPE_DEF(TLEConstants), module, "TLEConstants", 0);
          }

          void t_TLEConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "class_", make_descriptor(TLEConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "wrapfn_", make_descriptor(t_TLEConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLEConstants::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "A3OVK2", make_descriptor(TLEConstants::A3OVK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1L", make_descriptor(TLEConstants::C1L));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1SS", make_descriptor(TLEConstants::C1SS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK2", make_descriptor(TLEConstants::CK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK4", make_descriptor(TLEConstants::CK4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_2FASX4", make_descriptor(TLEConstants::C_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_3FASX6", make_descriptor(TLEConstants::C_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_FASX2", make_descriptor(TLEConstants::C_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G22", make_descriptor(TLEConstants::C_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G32", make_descriptor(TLEConstants::C_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G44", make_descriptor(TLEConstants::C_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G52", make_descriptor(TLEConstants::C_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G54", make_descriptor(TLEConstants::C_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "EARTH_RADIUS", make_descriptor(TLEConstants::EARTH_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MINUTES_PER_DAY", make_descriptor(TLEConstants::MINUTES_PER_DAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MU", make_descriptor(TLEConstants::MU));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "NORMALIZED_EQUATORIAL_RADIUS", make_descriptor(TLEConstants::NORMALIZED_EQUATORIAL_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ONE_THIRD", make_descriptor(TLEConstants::ONE_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q22", make_descriptor(TLEConstants::Q22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q31", make_descriptor(TLEConstants::Q31));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q33", make_descriptor(TLEConstants::Q33));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "QOMS2T", make_descriptor(TLEConstants::QOMS2T));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT22", make_descriptor(TLEConstants::ROOT22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT32", make_descriptor(TLEConstants::ROOT32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT44", make_descriptor(TLEConstants::ROOT44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT52", make_descriptor(TLEConstants::ROOT52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT54", make_descriptor(TLEConstants::ROOT54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S", make_descriptor(TLEConstants::S));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_2FASX4", make_descriptor(TLEConstants::S_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_3FASX6", make_descriptor(TLEConstants::S_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_FASX2", make_descriptor(TLEConstants::S_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G22", make_descriptor(TLEConstants::S_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G32", make_descriptor(TLEConstants::S_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G44", make_descriptor(TLEConstants::S_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G52", make_descriptor(TLEConstants::S_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G54", make_descriptor(TLEConstants::S_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "THDT", make_descriptor(TLEConstants::THDT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "TWO_THIRD", make_descriptor(TLEConstants::TWO_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ2", make_descriptor(TLEConstants::XJ2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ3", make_descriptor(TLEConstants::XJ3));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ4", make_descriptor(TLEConstants::XJ4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XKE", make_descriptor(TLEConstants::XKE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZEL", make_descriptor(TLEConstants::ZEL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZES", make_descriptor(TLEConstants::ZES));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNL", make_descriptor(TLEConstants::ZNL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNS", make_descriptor(TLEConstants::ZNS));
          }

          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEConstants::initializeClass, 1)))
              return NULL;
            return t_TLEConstants::wrap_Object(TLEConstants(((t_TLEConstants *) arg)->object.this$));
          }
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEConstants::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSBuilder::class$ = NULL;
        jmethodID *LOSBuilder::mids$ = NULL;
        bool LOSBuilder::live$ = false;

        jclass LOSBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_addTransform_f58a6a5347aa00ee] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/LOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_addTransform_dfab487c660c16fb] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/TimeIndependentLOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_build_8a21357b2bb198c8] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/los/TimeDependentLOS;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LOSBuilder::LOSBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::LOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_f58a6a5347aa00ee], a0.this$));
        }

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::TimeIndependentLOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_dfab487c660c16fb], a0.this$));
        }

        ::org::orekit::rugged::los::TimeDependentLOS LOSBuilder::build() const
        {
          return ::org::orekit::rugged::los::TimeDependentLOS(env->callObjectMethod(this$, mids$[mid_build_8a21357b2bb198c8]));
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
      namespace los {
        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args);
        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self);

        static PyMethodDef t_LOSBuilder__methods_[] = {
          DECLARE_METHOD(t_LOSBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, addTransform, METH_VARARGS),
          DECLARE_METHOD(t_LOSBuilder, build, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSBuilder)[] = {
          { Py_tp_methods, t_LOSBuilder__methods_ },
          { Py_tp_init, (void *) t_LOSBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSBuilder, t_LOSBuilder, LOSBuilder);

        void t_LOSBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSBuilder), &PY_TYPE_DEF(LOSBuilder), module, "LOSBuilder", 0);
        }

        void t_LOSBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "class_", make_descriptor(LOSBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "wrapfn_", make_descriptor(t_LOSBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSBuilder::initializeClass, 1)))
            return NULL;
          return t_LOSBuilder::wrap_Object(LOSBuilder(((t_LOSBuilder *) arg)->object.this$));
        }
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          LOSBuilder object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = LOSBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::los::LOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::LOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::rugged::los::TimeIndependentLOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::TimeIndependentLOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addTransform", args);
          return NULL;
        }

        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self)
        {
          ::org::orekit::rugged::los::TimeDependentLOS result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::los::t_TimeDependentLOS::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmHeader::class$ = NULL;
            jmethodID *OdmHeader::mids$ = NULL;
            bool OdmHeader::live$ = false;

            jclass OdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmHeader::OdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_OdmHeader__methods_[] = {
              DECLARE_METHOD(t_OdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmHeader)[] = {
              { Py_tp_methods, t_OdmHeader__methods_ },
              { Py_tp_init, (void *) t_OdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(OdmHeader, t_OdmHeader, OdmHeader);

            void t_OdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmHeader), &PY_TYPE_DEF(OdmHeader), module, "OdmHeader", 0);
            }

            void t_OdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "class_", make_descriptor(OdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "wrapfn_", make_descriptor(t_OdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmHeader::initializeClass, 1)))
                return NULL;
              return t_OdmHeader::wrap_Object(OdmHeader(((t_OdmHeader *) arg)->object.this$));
            }
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds)
            {
              OdmHeader object((jobject) NULL);

              INT_CALL(object = OdmHeader());
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
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *ContextBinding::class$ = NULL;
          jmethodID *ContextBinding::mids$ = NULL;
          bool ContextBinding::live$ = false;

          jclass ContextBinding::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/ContextBinding");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getClockCount_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockCount", "()D");
              mids$[mid_getClockRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getConventions_f657aa17e72227da] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_fc8fc85e38e59042] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getParsedUnitsBehavior_edbef281f8882e84] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystem_8ece93c6c1ece30e] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_isSimpleEOP_e470b6d9e0d979db] = env->getMethodID(cls, "isSimpleEOP", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble ContextBinding::getClockCount() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockCount_456d9a2f64d6b28d]);
          }

          jdouble ContextBinding::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_456d9a2f64d6b28d]);
          }

          ::org::orekit::utils::IERSConventions ContextBinding::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_f657aa17e72227da]));
          }

          ::org::orekit::data::DataContext ContextBinding::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_fc8fc85e38e59042]));
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ContextBinding::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_edbef281f8882e84]));
          }

          ::org::orekit::time::AbsoluteDate ContextBinding::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_aaa854c403487cf3]));
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem ContextBinding::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_8ece93c6c1ece30e]));
          }

          jboolean ContextBinding::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_e470b6d9e0d979db]);
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
          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self);
          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self);
          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data);
          static PyGetSetDef t_ContextBinding__fields_[] = {
            DECLARE_GET_FIELD(t_ContextBinding, clockCount),
            DECLARE_GET_FIELD(t_ContextBinding, clockRate),
            DECLARE_GET_FIELD(t_ContextBinding, conventions),
            DECLARE_GET_FIELD(t_ContextBinding, dataContext),
            DECLARE_GET_FIELD(t_ContextBinding, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ContextBinding, referenceDate),
            DECLARE_GET_FIELD(t_ContextBinding, simpleEOP),
            DECLARE_GET_FIELD(t_ContextBinding, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContextBinding__methods_[] = {
            DECLARE_METHOD(t_ContextBinding, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, getClockCount, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, isSimpleEOP, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContextBinding)[] = {
            { Py_tp_methods, t_ContextBinding__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ContextBinding__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContextBinding)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContextBinding, t_ContextBinding, ContextBinding);

          void t_ContextBinding::install(PyObject *module)
          {
            installType(&PY_TYPE(ContextBinding), &PY_TYPE_DEF(ContextBinding), module, "ContextBinding", 0);
          }

          void t_ContextBinding::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "class_", make_descriptor(ContextBinding::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "wrapfn_", make_descriptor(t_ContextBinding::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContextBinding::initializeClass, 1)))
              return NULL;
            return t_ContextBinding::wrap_Object(ContextBinding(((t_ContextBinding *) arg)->object.this$));
          }
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContextBinding::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockCount());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockCount());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedEvolution::class$ = NULL;
          jmethodID *UnscentedEvolution::mids$ = NULL;
          bool UnscentedEvolution::live$ = false;

          jclass UnscentedEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6cf4d52a4cdc2484] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentStates_9b5eca096aa7ef4a] = env->getMethodID(cls, "getCurrentStates", "()[Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getProcessNoiseMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedEvolution::UnscentedEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6cf4d52a4cdc2484, a0, a1.this$, a2.this$)) {}

          JArray< ::org::hipparchus::linear::RealVector > UnscentedEvolution::getCurrentStates() const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getCurrentStates_9b5eca096aa7ef4a]));
          }

          jdouble UnscentedEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::linear::RealMatrix UnscentedEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_7116bbecdd8ceb21]));
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
        namespace unscented {
          static PyObject *t_UnscentedEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_UnscentedEvolution_init_(t_UnscentedEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedEvolution_getCurrentStates(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_getCurrentTime(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_getProcessNoiseMatrix(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_get__currentStates(t_UnscentedEvolution *self, void *data);
          static PyObject *t_UnscentedEvolution_get__currentTime(t_UnscentedEvolution *self, void *data);
          static PyObject *t_UnscentedEvolution_get__processNoiseMatrix(t_UnscentedEvolution *self, void *data);
          static PyGetSetDef t_UnscentedEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedEvolution, currentStates),
            DECLARE_GET_FIELD(t_UnscentedEvolution, currentTime),
            DECLARE_GET_FIELD(t_UnscentedEvolution, processNoiseMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedEvolution__methods_[] = {
            DECLARE_METHOD(t_UnscentedEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedEvolution, getCurrentStates, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedEvolution, getCurrentTime, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedEvolution, getProcessNoiseMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedEvolution)[] = {
            { Py_tp_methods, t_UnscentedEvolution__methods_ },
            { Py_tp_init, (void *) t_UnscentedEvolution_init_ },
            { Py_tp_getset, t_UnscentedEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedEvolution, t_UnscentedEvolution, UnscentedEvolution);

          void t_UnscentedEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedEvolution), &PY_TYPE_DEF(UnscentedEvolution), module, "UnscentedEvolution", 0);
          }

          void t_UnscentedEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "class_", make_descriptor(UnscentedEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "wrapfn_", make_descriptor(t_UnscentedEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedEvolution::initializeClass, 1)))
              return NULL;
            return t_UnscentedEvolution::wrap_Object(UnscentedEvolution(((t_UnscentedEvolution *) arg)->object.this$));
          }
          static PyObject *t_UnscentedEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_UnscentedEvolution_init_(t_UnscentedEvolution *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            UnscentedEvolution object((jobject) NULL);

            if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UnscentedEvolution(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedEvolution_getCurrentStates(t_UnscentedEvolution *self)
          {
            JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCurrentStates());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          static PyObject *t_UnscentedEvolution_getCurrentTime(t_UnscentedEvolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_UnscentedEvolution_getProcessNoiseMatrix(t_UnscentedEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_UnscentedEvolution_get__currentStates(t_UnscentedEvolution *self, void *data)
          {
            JArray< ::org::hipparchus::linear::RealVector > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCurrentStates());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          static PyObject *t_UnscentedEvolution_get__currentTime(t_UnscentedEvolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_UnscentedEvolution_get__processNoiseMatrix(t_UnscentedEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/EcksteinHechlerPropagator.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *EcksteinHechlerPropagator::class$ = NULL;
        jmethodID *EcksteinHechlerPropagator::mids$ = NULL;
        bool EcksteinHechlerPropagator::live$ = false;

        jclass EcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/EcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b50881bdeb30c309] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_3f3c64010aade762] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_2a5c8bab5263da65] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_52b48260eb4105cf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_f38aa634156aaca3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_44d77356ff710165] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_03d945065e83ee8a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_c7db7089b1621fd3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_a214f2949187508c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_6fdccf30ac5ccd71] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_e53f83b52f48b75e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_016d2092114ea672] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_a66c993fd2fa1ff4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_156350a44d4e52b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_a18bba4a9f9f633d] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_ea1630379ffd5cf1] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_54bbffa4809a432c] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_getCk0_7cdc325af0834901] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getReferenceRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_4d809d0d3adf3270] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/CartesianOrbit;");
            mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_dfbbbfbf78c55942] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_8db5913253ef6ad3] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_resetIntermediateState_83d0edaa13a56f81] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_createHarvester_d3d4ea925a699046] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b50881bdeb30c309, a0.this$, a1.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3f3c64010aade762, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2a5c8bab5263da65, a0.this$, a1, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_52b48260eb4105cf, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f38aa634156aaca3, a0.this$, a1.this$, a2, a3.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_44d77356ff710165, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_03d945065e83ee8a, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c7db7089b1621fd3, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a214f2949187508c, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6fdccf30ac5ccd71, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e53f83b52f48b75e, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_016d2092114ea672, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a66c993fd2fa1ff4, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_156350a44d4e52b6, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_a18bba4a9f9f633d], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_ea1630379ffd5cf1], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_54bbffa4809a432c], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > EcksteinHechlerPropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_7cdc325af0834901]));
        }

        jdouble EcksteinHechlerPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        jdouble EcksteinHechlerPropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_456d9a2f64d6b28d]);
        }

        ::org::orekit::orbits::CartesianOrbit EcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_4d809d0d3adf3270], a0.this$));
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_dfbbbfbf78c55942], a0.this$, a1.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8db5913253ef6ad3], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_EcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, ck0),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, mu),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, referenceRadius),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getCk0, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getReferenceRadius, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, propagateOrbit, METH_O),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_EcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagator, t_EcksteinHechlerPropagator, EcksteinHechlerPropagator);

        void t_EcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagator), &PY_TYPE_DEF(EcksteinHechlerPropagator), module, "EcksteinHechlerPropagator", 0);
        }

        void t_EcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "class_", make_descriptor(EcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagator::wrap_Object(EcksteinHechlerPropagator(((t_EcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3));
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
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
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
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
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
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
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
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
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
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
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
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDKDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
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
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDDI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCk0());
          return result.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0));
            return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", arg);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args)
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

          return callSuper(PY_TYPE(EcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCk0());
          return value.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *ShortTermEncounter2DDefinition::mids$ = NULL;
              bool ShortTermEncounter2DDefinition::live$ = false;

              jclass ShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c16f3fbbc2906c3c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_effc98295e30aefd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_4ba70162c0a6539e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_d7c53fff20df3c61] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_79b153af3bb7e103] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_79b153af3bb7e103] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()D");
                  mids$[mid_computeMahalanobisDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "computeMahalanobisDistance", "()D");
                  mids$[mid_computeMahalanobisDistance_0ba5fed9597b693e] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)D");
                  mids$[mid_computeMissDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "computeMissDistance", "()D");
                  mids$[mid_computeOtherPositionInCollisionPlane_6d781af269bebe5e] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_6d781af269bebe5e] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_395c0d14fc31fa5e] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_6761e3f334368d44] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/PVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()D");
                  mids$[mid_computeSquaredMahalanobisDistance_0ba5fed9597b693e] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)D");
                  mids$[mid_computeSquaredMahalanobisDistance_6932b995984a06db] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/linear/RealMatrix;)D");
                  mids$[mid_computeSquaredMahalanobisDistance_04175aacb25dae17] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(DDDD)D");
                  mids$[mid_getCombinedRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getCombinedRadius", "()D");
                  mids$[mid_getEncounterFrame_b6be411bef36c8d5] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_551bf685780e3c1f] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getOtherCovariance_79b153af3bb7e103] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getReferenceAtTCA_551bf685780e3c1f] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getReferenceCovariance_79b153af3bb7e103] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getTca_aaa854c403487cf3] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c16f3fbbc2906c3c, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_effc98295e30aefd, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ba70162c0a6539e, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d7c53fff20df3c61, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7)) {}

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_79b153af3bb7e103]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_79b153af3bb7e103]));
              }

              jdouble ShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeCoppolaEncounterDuration_456d9a2f64d6b28d]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_456d9a2f64d6b28d]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_0ba5fed9597b693e], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMissDistance_456d9a2f64d6b28d]);
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_6d781af269bebe5e]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_6d781af269bebe5e]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_395c0d14fc31fa5e], a0));
              }

              ::org::orekit::utils::PVCoordinates ShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_6761e3f334368d44]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_7116bbecdd8ceb21]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_7116bbecdd8ceb21]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_7116bbecdd8ceb21]));
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_456d9a2f64d6b28d]);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_0ba5fed9597b693e], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::linear::RealMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_6932b995984a06db], a0.this$, a1.this$);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_04175aacb25dae17], a0, a1, a2, a3);
              }

              jdouble ShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCombinedRadius_456d9a2f64d6b28d]);
              }

              ::org::orekit::frames::encounter::EncounterLOF ShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_b6be411bef36c8d5]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_551bf685780e3c1f]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_79b153af3bb7e103]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_551bf685780e3c1f]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_79b153af3bb7e103]));
              }

              ::org::orekit::time::AbsoluteDate ShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_aaa854c403487cf3]));
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
              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, tca),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_ShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_ShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DDefinition, t_ShortTermEncounter2DDefinition, ShortTermEncounter2DDefinition);

              void t_ShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DDefinition), &PY_TYPE_DEF(ShortTermEncounter2DDefinition), module, "ShortTermEncounter2DDefinition", 0);
              }

              void t_ShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "class_", make_descriptor(ShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_ShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DDefinition::wrap_Object(ShortTermEncounter2DDefinition(((t_ShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeMissDistance());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::PVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                    ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                    jdouble result;

                    if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                  break;
                 case 4:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble result;

                    if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *AbstractAnalyticalGradientConverter::mids$ = NULL;
        bool AbstractAnalyticalGradientConverter::live$ = false;

        jclass AbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPropagator_6bbe2f82089c1fee] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_getState_a553824829fc2514] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator AbstractAnalyticalGradientConverter::getPropagator(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a1) const
        {
          return ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_6bbe2f82089c1fee], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractAnalyticalGradientConverter::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_a553824829fc2514]));
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
        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalGradientConverter, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_AbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalGradientConverter, t_AbstractAnalyticalGradientConverter, AbstractAnalyticalGradientConverter);

        void t_AbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalGradientConverter), &PY_TYPE_DEF(AbstractAnalyticalGradientConverter), module, "AbstractAnalyticalGradientConverter", 0);
        }

        void t_AbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "class_", make_descriptor(AbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_AbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalGradientConverter::wrap_Object(AbstractAnalyticalGradientConverter(((t_AbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > a1((jobject) NULL);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPropagator(a0, a1));
            return ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalGradientConverter), (PyObject *) self, "getState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *DoubleConsumer::class$ = NULL;
      jmethodID *DoubleConsumer::mids$ = NULL;
      bool DoubleConsumer::live$ = false;

      jclass DoubleConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/DoubleConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_77e0f9a1f260e2e5] = env->getMethodID(cls, "accept", "(D)V");
          mids$[mid_andThen_6303e952f98897d8] = env->getMethodID(cls, "andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DoubleConsumer::accept(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_77e0f9a1f260e2e5], a0);
      }

      DoubleConsumer DoubleConsumer::andThen(const DoubleConsumer & a0) const
      {
        return DoubleConsumer(env->callObjectMethod(this$, mids$[mid_andThen_6303e952f98897d8], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg);
      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg);

      static PyMethodDef t_DoubleConsumer__methods_[] = {
        DECLARE_METHOD(t_DoubleConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, accept, METH_O),
        DECLARE_METHOD(t_DoubleConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleConsumer)[] = {
        { Py_tp_methods, t_DoubleConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleConsumer, t_DoubleConsumer, DoubleConsumer);

      void t_DoubleConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleConsumer), &PY_TYPE_DEF(DoubleConsumer), module, "DoubleConsumer", 0);
      }

      void t_DoubleConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "class_", make_descriptor(DoubleConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "wrapfn_", make_descriptor(t_DoubleConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleConsumer::initializeClass, 1)))
          return NULL;
        return t_DoubleConsumer::wrap_Object(DoubleConsumer(((t_DoubleConsumer *) arg)->object.this$));
      }
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg)
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

      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg)
      {
        DoubleConsumer a0((jobject) NULL);
        DoubleConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_DoubleConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouLegacyNavigationMessage::class$ = NULL;
            jmethodID *BeidouLegacyNavigationMessage::mids$ = NULL;
            bool BeidouLegacyNavigationMessage::live$ = false;
            ::java::lang::String *BeidouLegacyNavigationMessage::D1 = NULL;
            ::java::lang::String *BeidouLegacyNavigationMessage::D2 = NULL;

            jclass BeidouLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAODC_f2f64475e4580546] = env->getMethodID(cls, "getAODC", "()I");
                mids$[mid_getAODE_f2f64475e4580546] = env->getMethodID(cls, "getAODE", "()I");
                mids$[mid_getSvAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getTGD1_456d9a2f64d6b28d] = env->getMethodID(cls, "getTGD1", "()D");
                mids$[mid_getTGD2_456d9a2f64d6b28d] = env->getMethodID(cls, "getTGD2", "()D");
                mids$[mid_setAODC_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAODC", "(D)V");
                mids$[mid_setAODE_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAODE", "(D)V");
                mids$[mid_setSvAccuracy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setTGD1_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTGD1", "(D)V");
                mids$[mid_setTGD2_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTGD2", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                D1 = new ::java::lang::String(env->getStaticObjectField(cls, "D1", "Ljava/lang/String;"));
                D2 = new ::java::lang::String(env->getStaticObjectField(cls, "D2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouLegacyNavigationMessage::BeidouLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jint BeidouLegacyNavigationMessage::getAODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODC_f2f64475e4580546]);
            }

            jint BeidouLegacyNavigationMessage::getAODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODE_f2f64475e4580546]);
            }

            jdouble BeidouLegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_456d9a2f64d6b28d]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD1_456d9a2f64d6b28d]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD2_456d9a2f64d6b28d]);
            }

            void BeidouLegacyNavigationMessage::setAODC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODC_77e0f9a1f260e2e5], a0);
            }

            void BeidouLegacyNavigationMessage::setAODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODE_77e0f9a1f260e2e5], a0);
            }

            void BeidouLegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_77e0f9a1f260e2e5], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD1_77e0f9a1f260e2e5], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD2_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_BeidouLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouLegacyNavigationMessage_init_(t_BeidouLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouLegacyNavigationMessage_getAODC(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getAODE(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getSvAccuracy(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getTGD1(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getTGD2(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_setAODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setAODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setSvAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setTGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setTGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_get__aODC(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__aODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__aODE(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__aODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__svAccuracy(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__svAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD1(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__tGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD2(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__tGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouLegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, aODC),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, aODE),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, tGD1),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, tGD2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getAODC, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getAODE, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getTGD1, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getTGD2, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setAODC, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setAODE, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setTGD1, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setTGD2, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_BeidouLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_BeidouLegacyNavigationMessage_init_ },
              { Py_tp_getset, t_BeidouLegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(BeidouLegacyNavigationMessage, t_BeidouLegacyNavigationMessage, BeidouLegacyNavigationMessage);

            void t_BeidouLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouLegacyNavigationMessage), &PY_TYPE_DEF(BeidouLegacyNavigationMessage), module, "BeidouLegacyNavigationMessage", 0);
            }

            void t_BeidouLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "class_", make_descriptor(BeidouLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "wrapfn_", make_descriptor(t_BeidouLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouLegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "D1", make_descriptor(j2p(*BeidouLegacyNavigationMessage::D1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "D2", make_descriptor(j2p(*BeidouLegacyNavigationMessage::D2)));
            }

            static PyObject *t_BeidouLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_BeidouLegacyNavigationMessage::wrap_Object(BeidouLegacyNavigationMessage(((t_BeidouLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_BeidouLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouLegacyNavigationMessage_init_(t_BeidouLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              BeidouLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = BeidouLegacyNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getAODC(t_BeidouLegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getAODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getAODE(t_BeidouLegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getAODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getSvAccuracy(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getTGD1(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getTGD2(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setAODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAODC", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setAODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAODE", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setSvAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_BeidouLegacyNavigationMessage_setTGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD1", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setTGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD2", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__aODC(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getAODC());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__aODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aODC", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__aODE(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getAODE());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__aODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aODE", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__svAccuracy(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__svAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD1(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__tGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD1", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD2(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__tGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD2", arg);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionHeader::class$ = NULL;
              jmethodID *RtcmCorrectionHeader::mids$ = NULL;
              bool RtcmCorrectionHeader::live$ = false;

              jclass RtcmCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEpochTime1s_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpochTime1s", "()D");
                  mids$[mid_getIodSsr_f2f64475e4580546] = env->getMethodID(cls, "getIodSsr", "()I");
                  mids$[mid_getMultipleMessageIndicator_f2f64475e4580546] = env->getMethodID(cls, "getMultipleMessageIndicator", "()I");
                  mids$[mid_getNumberOfSatellites_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_getSsrProviderId_f2f64475e4580546] = env->getMethodID(cls, "getSsrProviderId", "()I");
                  mids$[mid_getSsrSolutionId_f2f64475e4580546] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                  mids$[mid_getSsrUpdateInterval_2fd89da74e4f387e] = env->getMethodID(cls, "getSsrUpdateInterval", "()Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;");
                  mids$[mid_setEpochTime1s_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEpochTime1s", "(D)V");
                  mids$[mid_setIodSsr_0a2a1ac2721c0336] = env->getMethodID(cls, "setIodSsr", "(I)V");
                  mids$[mid_setMultipleMessageIndicator_0a2a1ac2721c0336] = env->getMethodID(cls, "setMultipleMessageIndicator", "(I)V");
                  mids$[mid_setNumberOfSatellites_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");
                  mids$[mid_setSsrProviderId_0a2a1ac2721c0336] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                  mids$[mid_setSsrSolutionId_0a2a1ac2721c0336] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                  mids$[mid_setSsrUpdateInterval_36e6b7154fdd6599] = env->getMethodID(cls, "setSsrUpdateInterval", "(Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionHeader::RtcmCorrectionHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jdouble RtcmCorrectionHeader::getEpochTime1s() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochTime1s_456d9a2f64d6b28d]);
              }

              jint RtcmCorrectionHeader::getIodSsr() const
              {
                return env->callIntMethod(this$, mids$[mid_getIodSsr_f2f64475e4580546]);
              }

              jint RtcmCorrectionHeader::getMultipleMessageIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getMultipleMessageIndicator_f2f64475e4580546]);
              }

              jint RtcmCorrectionHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_f2f64475e4580546]);
              }

              jint RtcmCorrectionHeader::getSsrProviderId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrProviderId_f2f64475e4580546]);
              }

              jint RtcmCorrectionHeader::getSsrSolutionId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_f2f64475e4580546]);
              }

              ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval RtcmCorrectionHeader::getSsrUpdateInterval() const
              {
                return ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval(env->callObjectMethod(this$, mids$[mid_getSsrUpdateInterval_2fd89da74e4f387e]));
              }

              void RtcmCorrectionHeader::setEpochTime1s(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochTime1s_77e0f9a1f260e2e5], a0);
              }

              void RtcmCorrectionHeader::setIodSsr(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIodSsr_0a2a1ac2721c0336], a0);
              }

              void RtcmCorrectionHeader::setMultipleMessageIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMultipleMessageIndicator_0a2a1ac2721c0336], a0);
              }

              void RtcmCorrectionHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_0a2a1ac2721c0336], a0);
              }

              void RtcmCorrectionHeader::setSsrProviderId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrProviderId_0a2a1ac2721c0336], a0);
              }

              void RtcmCorrectionHeader::setSsrSolutionId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_0a2a1ac2721c0336], a0);
              }

              void RtcmCorrectionHeader::setSsrUpdateInterval(const ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_36e6b7154fdd6599], a0.this$);
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
              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, epochTime1s),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, iodSsr),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, multipleMessageIndicator),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, numberOfSatellites),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrProviderId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrSolutionId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrUpdateInterval),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getEpochTime1s, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getIodSsr, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getMultipleMessageIndicator, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrProviderId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrSolutionId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrUpdateInterval, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setEpochTime1s, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setIodSsr, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setMultipleMessageIndicator, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setNumberOfSatellites, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrProviderId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrSolutionId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrUpdateInterval, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionHeader)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionHeader, t_RtcmCorrectionHeader, RtcmCorrectionHeader);

              void t_RtcmCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionHeader), &PY_TYPE_DEF(RtcmCorrectionHeader), module, "RtcmCorrectionHeader", 0);
              }

              void t_RtcmCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "class_", make_descriptor(RtcmCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionHeader::wrap_Object(RtcmCorrectionHeader(((t_RtcmCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getIodSsr());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrProviderId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochTime1s(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochTime1s", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setIodSsr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIodSsr", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setMultipleMessageIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMultipleMessageIndicator", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrProviderId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrProviderId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrSolutionId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrSolutionId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) value);
              }
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochTime1s(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochTime1s", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getIodSsr());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setIodSsr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iodSsr", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setMultipleMessageIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "multipleMessageIndicator", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrProviderId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrProviderId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrProviderId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrSolutionId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrSolutionId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(value);
              }
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSsrUpdateInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUpdateInterval", arg);
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
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector::class$ = NULL;
      jmethodID *RealVector::mids$ = NULL;
      bool RealVector::live$ = false;

      jclass RealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_a3e626dfa1abd779] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_addToEntry_987a5fb872043b12] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_a3e626dfa1abd779] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_247afd2de476d613] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_a21461945eef1286] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combineToSelf_a21461945eef1286] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_copy_6d9adf1d5b463928] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_cosine_5ed80776077f2bda] = env->getMethodID(cls, "cosine", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_dotProduct_5ed80776077f2bda] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_a3e626dfa1abd779] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_ebeMultiply_a3e626dfa1abd779] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_5ed80776077f2bda] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_b772323fc98b7293] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_5ed80776077f2bda] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_456d9a2f64d6b28d] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_5ed80776077f2bda] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getMaxIndex_f2f64475e4580546] = env->getMethodID(cls, "getMaxIndex", "()I");
          mids$[mid_getMaxValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinIndex_f2f64475e4580546] = env->getMethodID(cls, "getMinIndex", "()I");
          mids$[mid_getMinValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_898f26b9327f192e] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
          mids$[mid_map_0bab37206846c144] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAdd_247afd2de476d613] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAddToSelf_247afd2de476d613] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivide_247afd2de476d613] = env->getMethodID(cls, "mapDivide", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_247afd2de476d613] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiply_247afd2de476d613] = env->getMethodID(cls, "mapMultiply", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_247afd2de476d613] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtract_247afd2de476d613] = env->getMethodID(cls, "mapSubtract", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_247afd2de476d613] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_0bab37206846c144] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_outerProduct_d91077830a593cbe] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_projection_a3e626dfa1abd779] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_set_77e0f9a1f260e2e5] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_987a5fb872043b12] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_035c6167e6569aac] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_a3e626dfa1abd779] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_7cdc325af0834901] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_6d9adf1d5b463928] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unitize_7ae3461a92a43152] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_unmodifiableRealVector_a3e626dfa1abd779] = env->getStaticMethodID(cls, "unmodifiableRealVector", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_walkInDefaultOrder_f936e3f5b1c1be24] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_87c5a5041dad7333] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_295a71e39a8e7bf3] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_5e84f8a04ec8e2fa] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_f936e3f5b1c1be24] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_87c5a5041dad7333] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_295a71e39a8e7bf3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_5e84f8a04ec8e2fa] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkVectorDimensions_0a2a1ac2721c0336] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkVectorDimensions_df4ee11a06094b55] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkIndices_8dbc1129a3c2557a] = env->getMethodID(cls, "checkIndices", "(II)V");
          mids$[mid_checkIndex_0a2a1ac2721c0336] = env->getMethodID(cls, "checkIndex", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector::RealVector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      RealVector RealVector::add(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_add_a3e626dfa1abd779], a0.this$));
      }

      void RealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_987a5fb872043b12], a0, a1);
      }

      RealVector RealVector::append(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_a3e626dfa1abd779], a0.this$));
      }

      RealVector RealVector::append(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_247afd2de476d613], a0));
      }

      RealVector RealVector::combine(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combine_a21461945eef1286], a0, a1, a2.this$));
      }

      RealVector RealVector::combineToSelf(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_a21461945eef1286], a0, a1, a2.this$));
      }

      RealVector RealVector::copy() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_copy_6d9adf1d5b463928]));
      }

      jdouble RealVector::cosine(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosine_5ed80776077f2bda], a0.this$);
      }

      jdouble RealVector::dotProduct(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_5ed80776077f2bda], a0.this$);
      }

      RealVector RealVector::ebeDivide(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_a3e626dfa1abd779], a0.this$));
      }

      RealVector RealVector::ebeMultiply(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_a3e626dfa1abd779], a0.this$));
      }

      jboolean RealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jint RealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      jdouble RealVector::getDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_5ed80776077f2bda], a0.this$);
      }

      jdouble RealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_b772323fc98b7293], a0);
      }

      jdouble RealVector::getL1Distance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_5ed80776077f2bda], a0.this$);
      }

      jdouble RealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_456d9a2f64d6b28d]);
      }

      jdouble RealVector::getLInfDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_5ed80776077f2bda], a0.this$);
      }

      jdouble RealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_456d9a2f64d6b28d]);
      }

      jint RealVector::getMaxIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIndex_f2f64475e4580546]);
      }

      jdouble RealVector::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_456d9a2f64d6b28d]);
      }

      jint RealVector::getMinIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinIndex_f2f64475e4580546]);
      }

      jdouble RealVector::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_456d9a2f64d6b28d]);
      }

      jdouble RealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_456d9a2f64d6b28d]);
      }

      RealVector RealVector::getSubVector(jint a0, jint a1) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_898f26b9327f192e], a0, a1));
      }

      jint RealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jboolean RealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
      }

      jboolean RealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
      }

      ::java::util::Iterator RealVector::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
      }

      RealVector RealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_map_0bab37206846c144], a0.this$));
      }

      RealVector RealVector::mapAdd(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_247afd2de476d613], a0));
      }

      RealVector RealVector::mapAddToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_247afd2de476d613], a0));
      }

      RealVector RealVector::mapDivide(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivide_247afd2de476d613], a0));
      }

      RealVector RealVector::mapDivideToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_247afd2de476d613], a0));
      }

      RealVector RealVector::mapMultiply(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_247afd2de476d613], a0));
      }

      RealVector RealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_247afd2de476d613], a0));
      }

      RealVector RealVector::mapSubtract(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_247afd2de476d613], a0));
      }

      RealVector RealVector::mapSubtractToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_247afd2de476d613], a0));
      }

      RealVector RealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_0bab37206846c144], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealVector::outerProduct(const RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_d91077830a593cbe], a0.this$));
      }

      RealVector RealVector::projection(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_projection_a3e626dfa1abd779], a0.this$));
      }

      void RealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_77e0f9a1f260e2e5], a0);
      }

      void RealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_987a5fb872043b12], a0, a1);
      }

      void RealVector::setSubVector(jint a0, const RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      ::java::util::Iterator RealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_035c6167e6569aac]));
      }

      RealVector RealVector::subtract(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_subtract_a3e626dfa1abd779], a0.this$));
      }

      JArray< jdouble > RealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_7cdc325af0834901]));
      }

      RealVector RealVector::unitVector() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_unitVector_6d9adf1d5b463928]));
      }

      void RealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_7ae3461a92a43152]);
      }

      RealVector RealVector::unmodifiableRealVector(const RealVector & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVector(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableRealVector_a3e626dfa1abd779], a0.this$));
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_f936e3f5b1c1be24], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_87c5a5041dad7333], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_295a71e39a8e7bf3], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5e84f8a04ec8e2fa], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_f936e3f5b1c1be24], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_87c5a5041dad7333], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_295a71e39a8e7bf3], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5e84f8a04ec8e2fa], a0.this$, a1, a2);
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
      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_copy(t_RealVector *self);
      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_getDimension(t_RealVector *self);
      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Norm(t_RealVector *self);
      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self);
      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMaxValue(t_RealVector *self);
      static PyObject *t_RealVector_getMinIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMinValue(t_RealVector *self);
      static PyObject *t_RealVector_getNorm(t_RealVector *self);
      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_isInfinite(t_RealVector *self);
      static PyObject *t_RealVector_isNaN(t_RealVector *self);
      static PyObject *t_RealVector_iterator(t_RealVector *self);
      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_sparseIterator(t_RealVector *self);
      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_toArray(t_RealVector *self);
      static PyObject *t_RealVector_unitVector(t_RealVector *self);
      static PyObject *t_RealVector_unitize(t_RealVector *self);
      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data);
      static PyGetSetDef t_RealVector__fields_[] = {
        DECLARE_GET_FIELD(t_RealVector, dimension),
        DECLARE_GET_FIELD(t_RealVector, infinite),
        DECLARE_GET_FIELD(t_RealVector, l1Norm),
        DECLARE_GET_FIELD(t_RealVector, lInfNorm),
        DECLARE_GET_FIELD(t_RealVector, maxIndex),
        DECLARE_GET_FIELD(t_RealVector, maxValue),
        DECLARE_GET_FIELD(t_RealVector, minIndex),
        DECLARE_GET_FIELD(t_RealVector, minValue),
        DECLARE_GET_FIELD(t_RealVector, naN),
        DECLARE_GET_FIELD(t_RealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector__methods_[] = {
        DECLARE_METHOD(t_RealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, add, METH_O),
        DECLARE_METHOD(t_RealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, cosine, METH_O),
        DECLARE_METHOD(t_RealVector, dotProduct, METH_O),
        DECLARE_METHOD(t_RealVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_RealVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getEntry, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Distance, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Norm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getLInfDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getLInfNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, iterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, map, METH_O),
        DECLARE_METHOD(t_RealVector, mapAdd, METH_O),
        DECLARE_METHOD(t_RealVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivide, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, outerProduct, METH_O),
        DECLARE_METHOD(t_RealVector, projection, METH_O),
        DECLARE_METHOD(t_RealVector, set, METH_O),
        DECLARE_METHOD(t_RealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, sparseIterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, subtract, METH_O),
        DECLARE_METHOD(t_RealVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitVector, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitize, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unmodifiableRealVector, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector)[] = {
        { Py_tp_methods, t_RealVector__methods_ },
        { Py_tp_init, (void *) t_RealVector_init_ },
        { Py_tp_getset, t_RealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector, t_RealVector, RealVector);

      void t_RealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector), &PY_TYPE_DEF(RealVector), module, "RealVector", 0);
      }

      void t_RealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "class_", make_descriptor(RealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "wrapfn_", make_descriptor(t_RealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector::initializeClass, 1)))
          return NULL;
        return t_RealVector::wrap_Object(RealVector(((t_RealVector *) arg)->object.this$));
      }
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds)
      {
        RealVector object((jobject) NULL);

        INT_CALL(object = RealVector());
        self->object = object;

        return 0;
      }

      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            RealVector a0((jobject) NULL);
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combine", args);
        return NULL;
      }

      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combineToSelf", args);
        return NULL;
      }

      static PyObject *t_RealVector_copy(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.cosine(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cosine", arg);
        return NULL;
      }

      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_RealVector_getDimension(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL1Distance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Norm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL1Norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLInfDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMaxValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMinIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMinValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_RealVector_isInfinite(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_isNaN(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_iterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_sparseIterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.sparseIterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_toArray(t_RealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }

      static PyObject *t_RealVector_unitVector(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.unitVector());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_unitize(t_RealVector *self)
      {
        OBJ_CALL(self->object.unitize());
        Py_RETURN_NONE;
      }

      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::RealVector::unmodifiableRealVector(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unmodifiableRealVector", arg);
        return NULL;
      }

      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmParser::class$ = NULL;
              jmethodID *ApmParser::mids$ = NULL;
              bool ApmParser::live$ = false;

              jclass ApmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_b24b801e0dd3b8ec] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Apm;");
                  mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_c489cac8f838b2e9] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Apm ApmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Apm(env->callObjectMethod(this$, mids$[mid_build_b24b801e0dd3b8ec]));
              }

              jboolean ApmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
              }

              jboolean ApmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
              }

              jboolean ApmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader ApmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_c489cac8f838b2e9]));
              }

              jboolean ApmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
              }

              jboolean ApmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
              }

              jboolean ApmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
              }

              jboolean ApmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
              }

              jboolean ApmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
              }

              jboolean ApmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
              }

              void ApmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data);
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data);
              static PyGetSetDef t_ApmParser__fields_[] = {
                DECLARE_GET_FIELD(t_ApmParser, header),
                DECLARE_GET_FIELD(t_ApmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmParser__methods_[] = {
                DECLARE_METHOD(t_ApmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmParser)[] = {
                { Py_tp_methods, t_ApmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(ApmParser, t_ApmParser, ApmParser);
              PyObject *t_ApmParser::wrap_Object(const ApmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_ApmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_ApmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmParser), &PY_TYPE_DEF(ApmParser), module, "ApmParser", 0);
              }

              void t_ApmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "class_", make_descriptor(ApmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "wrapfn_", make_descriptor(t_ApmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmParser::initializeClass, 1)))
                  return NULL;
                return t_ApmParser::wrap_Object(ApmParser(((t_ApmParser *) arg)->object.this$));
              }
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Apm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Apm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
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
#include "org/orekit/files/ccsds/section/PythonAbstractWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonAbstractWriter::class$ = NULL;
          jmethodID *PythonAbstractWriter::mids$ = NULL;
          bool PythonAbstractWriter::live$ = false;

          jclass PythonAbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonAbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_intArrayToString_e3f5ec408434fab9] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWriter::PythonAbstractWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

          void PythonAbstractWriter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          ::java::lang::String PythonAbstractWriter::intArrayToString(const JArray< jint > & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_intArrayToString_e3f5ec408434fab9], a0.this$));
          }

          jlong PythonAbstractWriter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractWriter::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self);
          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args);
          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data);
          static PyGetSetDef t_PythonAbstractWriter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWriter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWriter__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWriter, intArrayToString, METH_O),
            DECLARE_METHOD(t_PythonAbstractWriter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWriter)[] = {
            { Py_tp_methods, t_PythonAbstractWriter__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWriter_init_ },
            { Py_tp_getset, t_PythonAbstractWriter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWriter)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWriter, t_PythonAbstractWriter, PythonAbstractWriter);

          void t_PythonAbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWriter), &PY_TYPE_DEF(PythonAbstractWriter), module, "PythonAbstractWriter", 1);
          }

          void t_PythonAbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "class_", make_descriptor(PythonAbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "wrapfn_", make_descriptor(t_PythonAbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWriter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWriter_pythonDecRef0 },
              { "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonAbstractWriter_writeContent1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWriter::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWriter::wrap_Object(PythonAbstractWriter(((t_PythonAbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            PythonAbstractWriter object((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWriter(a0, a1));
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

          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg)
          {
            JArray< jint > a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "[I", &a0))
            {
              OBJ_CALL(result = self->object.intArrayToString(a0));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intArrayToString", arg);
            return NULL;
          }

          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
            PyObject *result = PyObject_CallMethod(obj, "writeContent", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1019Data::class$ = NULL;
              jmethodID *Rtcm1019Data::mids$ = NULL;
              bool Rtcm1019Data::live$ = false;

              jclass Rtcm1019Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGpsCodeOnL2_f2f64475e4580546] = env->getMethodID(cls, "getGpsCodeOnL2", "()I");
                  mids$[mid_getGpsFitInterval_f2f64475e4580546] = env->getMethodID(cls, "getGpsFitInterval", "()I");
                  mids$[mid_getGpsL2PDataFlag_e470b6d9e0d979db] = env->getMethodID(cls, "getGpsL2PDataFlag", "()Z");
                  mids$[mid_getGpsNavigationMessage_5dc75ceaa4fde100] = env->getMethodID(cls, "getGpsNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsNavigationMessage_d94d6f9929872471] = env->getMethodID(cls, "getGpsNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsToc_456d9a2f64d6b28d] = env->getMethodID(cls, "getGpsToc", "()D");
                  mids$[mid_setGpsCodeOnL2_0a2a1ac2721c0336] = env->getMethodID(cls, "setGpsCodeOnL2", "(I)V");
                  mids$[mid_setGpsFitInterval_0a2a1ac2721c0336] = env->getMethodID(cls, "setGpsFitInterval", "(I)V");
                  mids$[mid_setGpsL2PDataFlag_50a2e0b139e80a58] = env->getMethodID(cls, "setGpsL2PDataFlag", "(Z)V");
                  mids$[mid_setGpsNavigationMessage_5e4004300df49c74] = env->getMethodID(cls, "setGpsNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
                  mids$[mid_setGpsToc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setGpsToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019Data::Rtcm1019Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint Rtcm1019Data::getGpsCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsCodeOnL2_f2f64475e4580546]);
              }

              jint Rtcm1019Data::getGpsFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsFitInterval_f2f64475e4580546]);
              }

              jboolean Rtcm1019Data::getGpsL2PDataFlag() const
              {
                return env->callBooleanMethod(this$, mids$[mid_getGpsL2PDataFlag_e470b6d9e0d979db]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_5dc75ceaa4fde100]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_d94d6f9929872471], a0.this$));
              }

              jdouble Rtcm1019Data::getGpsToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGpsToc_456d9a2f64d6b28d]);
              }

              void Rtcm1019Data::setGpsCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsCodeOnL2_0a2a1ac2721c0336], a0);
              }

              void Rtcm1019Data::setGpsFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsFitInterval_0a2a1ac2721c0336], a0);
              }

              void Rtcm1019Data::setGpsL2PDataFlag(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsL2PDataFlag_50a2e0b139e80a58], a0);
              }

              void Rtcm1019Data::setGpsNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsNavigationMessage_5e4004300df49c74], a0.this$);
              }

              void Rtcm1019Data::setGpsToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsToc_77e0f9a1f260e2e5], a0);
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
            namespace ephemeris {
              static PyObject *t_Rtcm1019Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1019Data_init_(t_Rtcm1019Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1019Data_getGpsCodeOnL2(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsFitInterval(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsL2PDataFlag(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *args);
              static PyObject *t_Rtcm1019Data_getGpsToc(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_setGpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsFitInterval(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsToc(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_get__gpsCodeOnL2(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsFitInterval(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsFitInterval(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsL2PDataFlag(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsNavigationMessage(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsToc(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsToc(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1019Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsL2PDataFlag),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1019Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1019Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsL2PDataFlag, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsL2PDataFlag, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1019Data)[] = {
                { Py_tp_methods, t_Rtcm1019Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1019Data_init_ },
                { Py_tp_getset, t_Rtcm1019Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1019Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1019Data, t_Rtcm1019Data, Rtcm1019Data);

              void t_Rtcm1019Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1019Data), &PY_TYPE_DEF(Rtcm1019Data), module, "Rtcm1019Data", 0);
              }

              void t_Rtcm1019Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "class_", make_descriptor(Rtcm1019Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "wrapfn_", make_descriptor(t_Rtcm1019Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1019Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1019Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1019Data::wrap_Object(Rtcm1019Data(((t_Rtcm1019Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1019Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1019Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1019Data_init_(t_Rtcm1019Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1019Data object((jobject) NULL);

                INT_CALL(object = Rtcm1019Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1019Data_getGpsCodeOnL2(t_Rtcm1019Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGpsCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1019Data_getGpsFitInterval(t_Rtcm1019Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGpsFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1019Data_getGpsL2PDataFlag(t_Rtcm1019Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.getGpsL2PDataFlag());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1019Data_getGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGpsNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGpsNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGpsNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_getGpsToc(t_Rtcm1019Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGpsToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1019Data_setGpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGpsCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsFitInterval(t_Rtcm1019Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGpsFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setGpsL2PDataFlag(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsL2PDataFlag", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGpsNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsToc(t_Rtcm1019Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGpsToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_get__gpsCodeOnL2(t_Rtcm1019Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGpsCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1019Data_set__gpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGpsCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsFitInterval(t_Rtcm1019Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGpsFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1019Data_set__gpsFitInterval(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGpsFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsL2PDataFlag(t_Rtcm1019Data *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.getGpsL2PDataFlag());
                Py_RETURN_BOOL(value);
              }
              static int t_Rtcm1019Data_set__gpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setGpsL2PDataFlag(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsL2PDataFlag", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsNavigationMessage(t_Rtcm1019Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGpsNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1019Data_set__gpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGpsNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsToc(t_Rtcm1019Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGpsToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1019Data_set__gpsToc(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGpsToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsToc", arg);
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
#include "org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonFieldAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonFieldAdditionalDerivativesProvider::live$ = false;

        jclass PythonFieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_ae4cc0c1894391de] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_91c945ca7903e8ac] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdditionalDerivativesProvider::PythonFieldAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldAdditionalDerivativesProvider::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonFieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, self),
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonFieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonFieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdditionalDerivativesProvider, t_PythonFieldAdditionalDerivativesProvider, PythonFieldAdditionalDerivativesProvider);
        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_Object(const PythonFieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonFieldAdditionalDerivativesProvider), module, "PythonFieldAdditionalDerivativesProvider", 1);
        }

        void t_PythonFieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "class_", make_descriptor(PythonFieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;", (void *) t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonFieldAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdditionalDerivativesProvider::wrap_Object(PythonFieldAdditionalDerivativesProvider(((t_PythonFieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonFieldAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldCombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldCombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
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

        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
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
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Enum.h"
#include "java/io/Serializable.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Enum::class$ = NULL;
    jmethodID *Enum::mids$ = NULL;
    bool Enum::live$ = false;

    jclass Enum::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Enum");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compareTo_1c39f9e56bae416f] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Enum;)I");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDeclaringClass_8f66acc08d2a174c] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_name_0090f7797e403f43] = env->getMethodID(cls, "name", "()Ljava/lang/String;");
        mids$[mid_ordinal_f2f64475e4580546] = env->getMethodID(cls, "ordinal", "()I");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_valueOf_f4e6662b7fe55c16] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;");
        mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Enum::compareTo(const Enum & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_1c39f9e56bae416f], a0.this$);
    }

    jboolean Enum::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Class Enum::getDeclaringClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_8f66acc08d2a174c]));
    }

    jint Enum::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    ::java::lang::String Enum::name() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_name_0090f7797e403f43]));
    }

    jint Enum::ordinal() const
    {
      return env->callIntMethod(this$, mids$[mid_ordinal_f2f64475e4580546]);
    }

    ::java::lang::String Enum::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    Enum Enum::valueOf(const ::java::lang::Class & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Enum(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f4e6662b7fe55c16], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg);
    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_getDeclaringClass(t_Enum *self);
    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_name(t_Enum *self);
    static PyObject *t_Enum_ordinal(t_Enum *self);
    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data);
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data);
    static PyGetSetDef t_Enum__fields_[] = {
      DECLARE_GET_FIELD(t_Enum, declaringClass),
      DECLARE_GET_FIELD(t_Enum, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Enum__methods_[] = {
      DECLARE_METHOD(t_Enum, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, of_, METH_VARARGS),
      DECLARE_METHOD(t_Enum, compareTo, METH_O),
      DECLARE_METHOD(t_Enum, equals, METH_VARARGS),
      DECLARE_METHOD(t_Enum, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Enum, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Enum, name, METH_NOARGS),
      DECLARE_METHOD(t_Enum, ordinal, METH_NOARGS),
      DECLARE_METHOD(t_Enum, toString, METH_VARARGS),
      DECLARE_METHOD(t_Enum, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Enum)[] = {
      { Py_tp_methods, t_Enum__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Enum__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Enum)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Enum, t_Enum, Enum);
    PyObject *t_Enum::wrap_Object(const Enum& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Enum::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Enum::install(PyObject *module)
    {
      installType(&PY_TYPE(Enum), &PY_TYPE_DEF(Enum), module, "Enum", 0);
    }

    void t_Enum::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "class_", make_descriptor(Enum::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "wrapfn_", make_descriptor(t_Enum::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Enum::initializeClass, 1)))
        return NULL;
      return t_Enum::wrap_Object(Enum(((t_Enum *) arg)->object.this$));
    }
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Enum::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg)
    {
      Enum a0((jobject) NULL);
      PyTypeObject **p0;
      jint result;

      if (!parseArg(arg, "K", Enum::initializeClass, &a0, &p0, t_Enum::parameters_))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Enum_getDeclaringClass(t_Enum *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Enum_name(t_Enum *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.name());
      return j2p(result);
    }

    static PyObject *t_Enum_ordinal(t_Enum *self)
    {
      jint result;
      OBJ_CALL(result = self->object.ordinal());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::String a1((jobject) NULL);
      Enum result((jobject) NULL);

      if (!parseArgs(args, "Ks", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::lang::Enum::valueOf(a0, a1));
        return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : t_Enum::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectors::class$ = NULL;
          jmethodID *CycleSlipDetectors::mids$ = NULL;
          bool CycleSlipDetectors::live$ = false;

          jclass CycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_fa7c1e622bc91b53] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List CycleSlipDetectors::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_fa7c1e622bc91b53], a0.this$));
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
          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg);

          static PyMethodDef t_CycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectors)[] = {
            { Py_tp_methods, t_CycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectors, t_CycleSlipDetectors, CycleSlipDetectors);

          void t_CycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectors), &PY_TYPE_DEF(CycleSlipDetectors), module, "CycleSlipDetectors", 0);
          }

          void t_CycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "class_", make_descriptor(CycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "wrapfn_", make_descriptor(t_CycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectors::wrap_Object(CycleSlipDetectors(((t_CycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Power.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Power::class$ = NULL;
        jmethodID *Power::mids$ = NULL;
        bool Power::live$ = false;

        jclass Power::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Power");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Power::Power(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        jdouble Power::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Power::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Power_value(t_Power *self, PyObject *args);

        static PyMethodDef t_Power__methods_[] = {
          DECLARE_METHOD(t_Power, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Power)[] = {
          { Py_tp_methods, t_Power__methods_ },
          { Py_tp_init, (void *) t_Power_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Power)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Power, t_Power, Power);

        void t_Power::install(PyObject *module)
        {
          installType(&PY_TYPE(Power), &PY_TYPE_DEF(Power), module, "Power", 0);
        }

        void t_Power::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "class_", make_descriptor(Power::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "wrapfn_", make_descriptor(t_Power::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Power::initializeClass, 1)))
            return NULL;
          return t_Power::wrap_Object(Power(((t_Power *) arg)->object.this$));
        }
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Power::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Power object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Power(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Power_value(t_Power *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FixedNumberInterpolationGrid::class$ = NULL;
            jmethodID *FixedNumberInterpolationGrid::mids$ = NULL;
            bool FixedNumberInterpolationGrid::live$ = false;

            jclass FixedNumberInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getGridPoints_8f7fecc995f3f6c8] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedNumberInterpolationGrid::FixedNumberInterpolationGrid(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            JArray< jdouble > FixedNumberInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_8f7fecc995f3f6c8], a0, a1));
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
            static PyObject *t_FixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedNumberInterpolationGrid_init_(t_FixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedNumberInterpolationGrid_getGridPoints(t_FixedNumberInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_FixedNumberInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedNumberInterpolationGrid)[] = {
              { Py_tp_methods, t_FixedNumberInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FixedNumberInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedNumberInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedNumberInterpolationGrid, t_FixedNumberInterpolationGrid, FixedNumberInterpolationGrid);

            void t_FixedNumberInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedNumberInterpolationGrid), &PY_TYPE_DEF(FixedNumberInterpolationGrid), module, "FixedNumberInterpolationGrid", 0);
            }

            void t_FixedNumberInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "class_", make_descriptor(FixedNumberInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "wrapfn_", make_descriptor(t_FixedNumberInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedNumberInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FixedNumberInterpolationGrid::wrap_Object(FixedNumberInterpolationGrid(((t_FixedNumberInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedNumberInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedNumberInterpolationGrid_init_(t_FixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              FixedNumberInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = FixedNumberInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FixedNumberInterpolationGrid_getGridPoints(t_FixedNumberInterpolationGrid *self, PyObject *args)
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
#include "org/orekit/rugged/utils/GridCreation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *GridCreation::class$ = NULL;
        jmethodID *GridCreation::mids$ = NULL;
        bool GridCreation::live$ = false;

        jclass GridCreation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/GridCreation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createLinearGrid_db303b9d0c75305d] = env->getStaticMethodID(cls, "createLinearGrid", "(DDI)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > GridCreation::createLinearGrid(jdouble a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_createLinearGrid_db303b9d0c75305d], a0, a1, a2));
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
      namespace utils {
        static PyObject *t_GridCreation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridCreation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridCreation_createLinearGrid(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_GridCreation__methods_[] = {
          DECLARE_METHOD(t_GridCreation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridCreation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridCreation, createLinearGrid, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridCreation)[] = {
          { Py_tp_methods, t_GridCreation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridCreation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridCreation, t_GridCreation, GridCreation);

        void t_GridCreation::install(PyObject *module)
        {
          installType(&PY_TYPE(GridCreation), &PY_TYPE_DEF(GridCreation), module, "GridCreation", 0);
        }

        void t_GridCreation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "class_", make_descriptor(GridCreation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "wrapfn_", make_descriptor(t_GridCreation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridCreation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridCreation::initializeClass, 1)))
            return NULL;
          return t_GridCreation::wrap_Object(GridCreation(((t_GridCreation *) arg)->object.this$));
        }
        static PyObject *t_GridCreation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridCreation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GridCreation_createLinearGrid(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "DDI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::rugged::utils::GridCreation::createLinearGrid(a0, a1, a2));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "createLinearGrid", args);
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
          mids$[mid_converged_530133671081dc04] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_530133671081dc04], a0, a1.this$, a2.this$);
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
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Locale.h"
#include "java/lang/Number.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/util/Currency.h"
#include "java/lang/Object.h"
#include "java/text/ParsePosition.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *NumberFormat::class$ = NULL;
    jmethodID *NumberFormat::mids$ = NULL;
    bool NumberFormat::live$ = false;
    jint NumberFormat::FRACTION_FIELD = (jint) 0;
    jint NumberFormat::INTEGER_FIELD = (jint) 0;

    jclass NumberFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/NumberFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_085bbc49599fa163] = env->getMethodID(cls, "format", "(D)Ljava/lang/String;");
        mids$[mid_format_8da367bd62adf91c] = env->getMethodID(cls, "format", "(J)Ljava/lang/String;");
        mids$[mid_format_c6faa545a7a768dc] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_e231795b026d93db] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_ad0b55b296497605] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_6c7b9765863c0754] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencyInstance_d34e2e8dd35583a0] = env->getStaticMethodID(cls, "getCurrencyInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getCurrencyInstance_41d4a73d4466d8a8] = env->getStaticMethodID(cls, "getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getInstance_d34e2e8dd35583a0] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getInstance_41d4a73d4466d8a8] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_d34e2e8dd35583a0] = env->getStaticMethodID(cls, "getIntegerInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_41d4a73d4466d8a8] = env->getStaticMethodID(cls, "getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getMaximumFractionDigits_f2f64475e4580546] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_f2f64475e4580546] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_f2f64475e4580546] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_f2f64475e4580546] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getNumberInstance_d34e2e8dd35583a0] = env->getStaticMethodID(cls, "getNumberInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getNumberInstance_41d4a73d4466d8a8] = env->getStaticMethodID(cls, "getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_d34e2e8dd35583a0] = env->getStaticMethodID(cls, "getPercentInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_41d4a73d4466d8a8] = env->getStaticMethodID(cls, "getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isGroupingUsed_e470b6d9e0d979db] = env->getMethodID(cls, "isGroupingUsed", "()Z");
        mids$[mid_isParseIntegerOnly_e470b6d9e0d979db] = env->getMethodID(cls, "isParseIntegerOnly", "()Z");
        mids$[mid_parse_07ea3e4926abb9ca] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/lang/Number;");
        mids$[mid_parse_3cf9d8b930b756db] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_parseObject_04377a8fddc7cede] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
        mids$[mid_setCurrency_4f90b9143eba41de] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setGroupingUsed_50a2e0b139e80a58] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_0a2a1ac2721c0336] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_0a2a1ac2721c0336] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setParseIntegerOnly_50a2e0b139e80a58] = env->getMethodID(cls, "setParseIntegerOnly", "(Z)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FRACTION_FIELD = env->getStaticIntField(cls, "FRACTION_FIELD");
        INTEGER_FIELD = env->getStaticIntField(cls, "INTEGER_FIELD");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NumberFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean NumberFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::String NumberFormat::format(jdouble a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_085bbc49599fa163], a0));
    }

    ::java::lang::String NumberFormat::format(jlong a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_8da367bd62adf91c], a0));
    }

    ::java::lang::StringBuffer NumberFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c6faa545a7a768dc], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_e231795b026d93db], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_ad0b55b296497605], a0, a1.this$, a2.this$));
    }

    JArray< ::java::util::Locale > NumberFormat::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
    }

    ::java::util::Currency NumberFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_6c7b9765863c0754]));
    }

    NumberFormat NumberFormat::getCurrencyInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_d34e2e8dd35583a0]));
    }

    NumberFormat NumberFormat::getCurrencyInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_41d4a73d4466d8a8], a0.this$));
    }

    NumberFormat NumberFormat::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_d34e2e8dd35583a0]));
    }

    NumberFormat NumberFormat::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_41d4a73d4466d8a8], a0.this$));
    }

    NumberFormat NumberFormat::getIntegerInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_d34e2e8dd35583a0]));
    }

    NumberFormat NumberFormat::getIntegerInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_41d4a73d4466d8a8], a0.this$));
    }

    jint NumberFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_f2f64475e4580546]);
    }

    jint NumberFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_f2f64475e4580546]);
    }

    jint NumberFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_f2f64475e4580546]);
    }

    jint NumberFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_f2f64475e4580546]);
    }

    NumberFormat NumberFormat::getNumberInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_d34e2e8dd35583a0]));
    }

    NumberFormat NumberFormat::getNumberInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_41d4a73d4466d8a8], a0.this$));
    }

    NumberFormat NumberFormat::getPercentInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_d34e2e8dd35583a0]));
    }

    NumberFormat NumberFormat::getPercentInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_41d4a73d4466d8a8], a0.this$));
    }

    jint NumberFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean NumberFormat::isGroupingUsed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isGroupingUsed_e470b6d9e0d979db]);
    }

    jboolean NumberFormat::isParseIntegerOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseIntegerOnly_e470b6d9e0d979db]);
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_07ea3e4926abb9ca], a0.this$));
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_3cf9d8b930b756db], a0.this$, a1.this$));
    }

    ::java::lang::Object NumberFormat::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_04377a8fddc7cede], a0.this$, a1.this$));
    }

    void NumberFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_4f90b9143eba41de], a0.this$);
    }

    void NumberFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_50a2e0b139e80a58], a0);
    }

    void NumberFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_0a2a1ac2721c0336], a0);
    }

    void NumberFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_0a2a1ac2721c0336], a0);
    }

    void NumberFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_0a2a1ac2721c0336], a0);
    }

    void NumberFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_0a2a1ac2721c0336], a0);
    }

    void NumberFormat::setParseIntegerOnly(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseIntegerOnly_50a2e0b139e80a58], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_NumberFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormat_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormat_clone(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_equals(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_format(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_NumberFormat_getCurrency(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getCurrencyInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getIntegerInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getMaximumFractionDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMaximumIntegerDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMinimumFractionDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMinimumIntegerDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getNumberInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getPercentInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_hashCode(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_isGroupingUsed(t_NumberFormat *self);
    static PyObject *t_NumberFormat_isParseIntegerOnly(t_NumberFormat *self);
    static PyObject *t_NumberFormat_parse(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_parseObject(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_setCurrency(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setGroupingUsed(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMaximumFractionDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMaximumIntegerDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMinimumFractionDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMinimumIntegerDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setParseIntegerOnly(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_get__availableLocales(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__currency(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__currency(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__currencyInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__groupingUsed(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__groupingUsed(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__instance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__integerInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__maximumFractionDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__maximumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__maximumIntegerDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__maximumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__minimumFractionDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__minimumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__minimumIntegerDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__minimumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__numberInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__parseIntegerOnly(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__parseIntegerOnly(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__percentInstance(t_NumberFormat *self, void *data);
    static PyGetSetDef t_NumberFormat__fields_[] = {
      DECLARE_GET_FIELD(t_NumberFormat, availableLocales),
      DECLARE_GETSET_FIELD(t_NumberFormat, currency),
      DECLARE_GET_FIELD(t_NumberFormat, currencyInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, groupingUsed),
      DECLARE_GET_FIELD(t_NumberFormat, instance),
      DECLARE_GET_FIELD(t_NumberFormat, integerInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, minimumIntegerDigits),
      DECLARE_GET_FIELD(t_NumberFormat, numberInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, parseIntegerOnly),
      DECLARE_GET_FIELD(t_NumberFormat, percentInstance),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NumberFormat__methods_[] = {
      DECLARE_METHOD(t_NumberFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getCurrencyInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getIntegerInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getMaximumFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMaximumIntegerDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMinimumFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMinimumIntegerDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getNumberInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getPercentInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, isGroupingUsed, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, isParseIntegerOnly, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, parseObject, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, setCurrency, METH_O),
      DECLARE_METHOD(t_NumberFormat, setGroupingUsed, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMaximumFractionDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMaximumIntegerDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMinimumFractionDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMinimumIntegerDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setParseIntegerOnly, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NumberFormat)[] = {
      { Py_tp_methods, t_NumberFormat__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NumberFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NumberFormat)[] = {
      &PY_TYPE_DEF(::java::text::Format),
      NULL
    };

    DEFINE_TYPE(NumberFormat, t_NumberFormat, NumberFormat);

    void t_NumberFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(NumberFormat), &PY_TYPE_DEF(NumberFormat), module, "NumberFormat", 0);
    }

    void t_NumberFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "class_", make_descriptor(NumberFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "wrapfn_", make_descriptor(t_NumberFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "boxfn_", make_descriptor(boxObject));
      env->getClass(NumberFormat::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "FRACTION_FIELD", make_descriptor(NumberFormat::FRACTION_FIELD));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "INTEGER_FIELD", make_descriptor(NumberFormat::INTEGER_FIELD));
    }

    static PyObject *t_NumberFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NumberFormat::initializeClass, 1)))
        return NULL;
      return t_NumberFormat::wrap_Object(NumberFormat(((t_NumberFormat *) arg)->object.this$));
    }
    static PyObject *t_NumberFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NumberFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NumberFormat_clone(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_NumberFormat_equals(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_NumberFormat_format(t_NumberFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_NumberFormat_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::NumberFormat::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_NumberFormat_getCurrency(t_NumberFormat *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_NumberFormat_getCurrencyInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getCurrencyInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getCurrencyInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getCurrencyInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getIntegerInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getIntegerInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getIntegerInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getIntegerInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getMaximumFractionDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMaximumIntegerDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMinimumFractionDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMinimumIntegerDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getNumberInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getNumberInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getNumberInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumberInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getPercentInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getPercentInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getPercentInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getPercentInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_hashCode(t_NumberFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_NumberFormat_isGroupingUsed(t_NumberFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isGroupingUsed());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_NumberFormat_isParseIntegerOnly(t_NumberFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseIntegerOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_NumberFormat_parse(t_NumberFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Number result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::java::lang::t_Number::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::ParsePosition a1((jobject) NULL);
          ::java::lang::Number result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.parse(a0, a1));
            return ::java::lang::t_Number::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "parse", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_parseObject(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parseObject(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "parseObject", args, 2);
    }

    static PyObject *t_NumberFormat_setCurrency(t_NumberFormat *self, PyObject *arg)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrency", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setGroupingUsed(t_NumberFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingUsed", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMaximumFractionDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaximumFractionDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMaximumIntegerDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaximumIntegerDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMinimumFractionDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinimumFractionDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMinimumIntegerDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinimumIntegerDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setParseIntegerOnly(t_NumberFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseIntegerOnly(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseIntegerOnly", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_get__availableLocales(t_NumberFormat *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_NumberFormat_get__currency(t_NumberFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_NumberFormat_set__currency(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__currencyInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencyInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__groupingUsed(t_NumberFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isGroupingUsed());
      Py_RETURN_BOOL(value);
    }
    static int t_NumberFormat_set__groupingUsed(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__instance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__integerInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getIntegerInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__maximumFractionDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__maximumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__maximumIntegerDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__maximumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__minimumFractionDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__minimumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__minimumIntegerDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__minimumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__numberInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getNumberInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__parseIntegerOnly(t_NumberFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseIntegerOnly());
      Py_RETURN_BOOL(value);
    }
    static int t_NumberFormat_set__parseIntegerOnly(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseIntegerOnly(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseIntegerOnly", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__percentInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getPercentInstance());
      return t_NumberFormat::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *Relationship::class$ = NULL;
        jmethodID *Relationship::mids$ = NULL;
        bool Relationship::live$ = false;
        Relationship *Relationship::EQ = NULL;
        Relationship *Relationship::GEQ = NULL;
        Relationship *Relationship::LEQ = NULL;

        jclass Relationship::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/Relationship");

            mids$ = new jmethodID[max_mid];
            mids$[mid_oppositeRelationship_435d5956567f4d61] = env->getMethodID(cls, "oppositeRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_valueOf_bde0e1ed1501369b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_values_05a6a8459b84c6bc] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/Relationship;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EQ = new Relationship(env->getStaticObjectField(cls, "EQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            GEQ = new Relationship(env->getStaticObjectField(cls, "GEQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            LEQ = new Relationship(env->getStaticObjectField(cls, "LEQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relationship Relationship::oppositeRelationship() const
        {
          return Relationship(env->callObjectMethod(this$, mids$[mid_oppositeRelationship_435d5956567f4d61]));
        }

        ::java::lang::String Relationship::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
        }

        Relationship Relationship::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Relationship(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bde0e1ed1501369b], a0.this$));
        }

        JArray< Relationship > Relationship::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Relationship >(env->callStaticObjectMethod(cls, mids$[mid_values_05a6a8459b84c6bc]));
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
        static PyObject *t_Relationship_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relationship_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relationship_of_(t_Relationship *self, PyObject *args);
        static PyObject *t_Relationship_oppositeRelationship(t_Relationship *self);
        static PyObject *t_Relationship_toString(t_Relationship *self, PyObject *args);
        static PyObject *t_Relationship_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Relationship_values(PyTypeObject *type);
        static PyObject *t_Relationship_get__parameters_(t_Relationship *self, void *data);
        static PyGetSetDef t_Relationship__fields_[] = {
          DECLARE_GET_FIELD(t_Relationship, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relationship__methods_[] = {
          DECLARE_METHOD(t_Relationship, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relationship, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relationship, of_, METH_VARARGS),
          DECLARE_METHOD(t_Relationship, oppositeRelationship, METH_NOARGS),
          DECLARE_METHOD(t_Relationship, toString, METH_VARARGS),
          DECLARE_METHOD(t_Relationship, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Relationship, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relationship)[] = {
          { Py_tp_methods, t_Relationship__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Relationship__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relationship)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Relationship, t_Relationship, Relationship);
        PyObject *t_Relationship::wrap_Object(const Relationship& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Relationship::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Relationship *self = (t_Relationship *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Relationship::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Relationship::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Relationship *self = (t_Relationship *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Relationship::install(PyObject *module)
        {
          installType(&PY_TYPE(Relationship), &PY_TYPE_DEF(Relationship), module, "Relationship", 0);
        }

        void t_Relationship::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "class_", make_descriptor(Relationship::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "wrapfn_", make_descriptor(t_Relationship::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "boxfn_", make_descriptor(boxObject));
          env->getClass(Relationship::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "EQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::EQ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "GEQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::GEQ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "LEQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::LEQ)));
        }

        static PyObject *t_Relationship_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relationship::initializeClass, 1)))
            return NULL;
          return t_Relationship::wrap_Object(Relationship(((t_Relationship *) arg)->object.this$));
        }
        static PyObject *t_Relationship_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relationship::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Relationship_of_(t_Relationship *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Relationship_oppositeRelationship(t_Relationship *self)
        {
          Relationship result((jobject) NULL);
          OBJ_CALL(result = self->object.oppositeRelationship());
          return t_Relationship::wrap_Object(result);
        }

        static PyObject *t_Relationship_toString(t_Relationship *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Relationship), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Relationship_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Relationship result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::Relationship::valueOf(a0));
            return t_Relationship::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Relationship_values(PyTypeObject *type)
        {
          JArray< Relationship > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::Relationship::values());
          return JArray<jobject>(result.this$).wrap(t_Relationship::wrap_jobject);
        }
        static PyObject *t_Relationship_get__parameters_(t_Relationship *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/QRDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposer::class$ = NULL;
      jmethodID *QRDecomposer::mids$ = NULL;
      bool QRDecomposer::live$ = false;

      jclass QRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_4196bcb69ccaa8a4] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposer::QRDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver QRDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_4196bcb69ccaa8a4], a0.this$));
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
      static PyObject *t_QRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposer_init_(t_QRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposer_decompose(t_QRDecomposer *self, PyObject *arg);

      static PyMethodDef t_QRDecomposer__methods_[] = {
        DECLARE_METHOD(t_QRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposer)[] = {
        { Py_tp_methods, t_QRDecomposer__methods_ },
        { Py_tp_init, (void *) t_QRDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposer, t_QRDecomposer, QRDecomposer);

      void t_QRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposer), &PY_TYPE_DEF(QRDecomposer), module, "QRDecomposer", 0);
      }

      void t_QRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "class_", make_descriptor(QRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "wrapfn_", make_descriptor(t_QRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposer::initializeClass, 1)))
          return NULL;
        return t_QRDecomposer::wrap_Object(QRDecomposer(((t_QRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposer_init_(t_QRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        QRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = QRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_QRDecomposer_decompose(t_QRDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonAbstractGaussianContribution::class$ = NULL;
            jmethodID *PythonAbstractGaussianContribution::mids$ = NULL;
            bool PythonAbstractGaussianContribution::live$ = false;

            jclass PythonAbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_90bfc53454f91805] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/forces/ForceModel;D)V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getLLimits_4ece4b82b4394674] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_f53f254b7878e0dd] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getParametersDriversWithoutMu_a6156df500549a58] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGaussianContribution::PythonAbstractGaussianContribution(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::forces::ForceModel & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_90bfc53454f91805, a0.this$, a1, a2.this$, a3)) {}

            void PythonAbstractGaussianContribution::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonAbstractGaussianContribution::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonAbstractGaussianContribution::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self);
            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_PythonAbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGaussianContribution, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGaussianContribution)[] = {
              { Py_tp_methods, t_PythonAbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGaussianContribution_init_ },
              { Py_tp_getset, t_PythonAbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGaussianContribution, t_PythonAbstractGaussianContribution, PythonAbstractGaussianContribution);

            void t_PythonAbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGaussianContribution), &PY_TYPE_DEF(PythonAbstractGaussianContribution), module, "PythonAbstractGaussianContribution", 1);
            }

            void t_PythonAbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "class_", make_descriptor(PythonAbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "wrapfn_", make_descriptor(t_PythonAbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGaussianContribution::initializeClass);
              JNINativeMethod methods[] = {
                { "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D", (void *) t_PythonAbstractGaussianContribution_getLLimits0 },
                { "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractGaussianContribution_getLLimits1 },
                { "getParametersDriversWithoutMu", "()Ljava/util/List;", (void *) t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGaussianContribution_pythonDecRef3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGaussianContribution::wrap_Object(PythonAbstractGaussianContribution(((t_PythonAbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::ForceModel a2((jobject) NULL);
              jdouble a3;
              PythonAbstractGaussianContribution object((jobject) NULL);

              if (!parseArgs(args, "sDkD", ::org::orekit::forces::ForceModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGaussianContribution(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getParametersDriversWithoutMu", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("getParametersDriversWithoutMu", result);
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

            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame::class$ = NULL;
          jmethodID *SpacecraftBodyFrame::mids$ = NULL;
          bool SpacecraftBodyFrame::live$ = false;

          jclass SpacecraftBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_29f7f9a07e6883ba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;Ljava/lang/String;)V");
              mids$[mid_getBaseEquipment_fd451afbba7c6279] = env->getMethodID(cls, "getBaseEquipment", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_getLabel_0090f7797e403f43] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_parse_5cb79273114edd39] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame::SpacecraftBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_29f7f9a07e6883ba, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame::getBaseEquipment() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment(env->callObjectMethod(this$, mids$[mid_getBaseEquipment_fd451afbba7c6279]));
          }

          ::java::lang::String SpacecraftBodyFrame::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_0090f7797e403f43]));
          }

          SpacecraftBodyFrame SpacecraftBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_5cb79273114edd39], a0.this$));
          }

          ::java::lang::String SpacecraftBodyFrame::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
          static PyObject *t_SpacecraftBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SpacecraftBodyFrame_init_(t_SpacecraftBodyFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SpacecraftBodyFrame_getBaseEquipment(t_SpacecraftBodyFrame *self);
          static PyObject *t_SpacecraftBodyFrame_getLabel(t_SpacecraftBodyFrame *self);
          static PyObject *t_SpacecraftBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame_toString(t_SpacecraftBodyFrame *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame_get__baseEquipment(t_SpacecraftBodyFrame *self, void *data);
          static PyObject *t_SpacecraftBodyFrame_get__label(t_SpacecraftBodyFrame *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame, baseEquipment),
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame, label),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, getBaseEquipment, METH_NOARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, getLabel, METH_NOARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame__methods_ },
            { Py_tp_init, (void *) t_SpacecraftBodyFrame_init_ },
            { Py_tp_getset, t_SpacecraftBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame, t_SpacecraftBodyFrame, SpacecraftBodyFrame);

          void t_SpacecraftBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame), &PY_TYPE_DEF(SpacecraftBodyFrame), module, "SpacecraftBodyFrame", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "BaseEquipment", make_descriptor(&PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment)));
          }

          void t_SpacecraftBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "class_", make_descriptor(SpacecraftBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SpacecraftBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame::wrap_Object(SpacecraftBodyFrame(((t_SpacecraftBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SpacecraftBodyFrame_init_(t_SpacecraftBodyFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            SpacecraftBodyFrame object((jobject) NULL);

            if (!parseArgs(args, "Ks", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::parameters_, &a1))
            {
              INT_CALL(object = SpacecraftBodyFrame(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SpacecraftBodyFrame_getBaseEquipment(t_SpacecraftBodyFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseEquipment());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
          }

          static PyObject *t_SpacecraftBodyFrame_getLabel(t_SpacecraftBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLabel());
            return j2p(result);
          }

          static PyObject *t_SpacecraftBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::parse(a0));
              return t_SpacecraftBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SpacecraftBodyFrame_toString(t_SpacecraftBodyFrame *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(SpacecraftBodyFrame), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame_get__baseEquipment(t_SpacecraftBodyFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseEquipment());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(value);
          }

          static PyObject *t_SpacecraftBodyFrame_get__label(t_SpacecraftBodyFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLabel());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolator::class$ = NULL;
        jmethodID *BicubicInterpolator::mids$ = NULL;
        bool BicubicInterpolator::live$ = false;

        jclass BicubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_a6f6f71411f6aae1] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BicubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolator::BicubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction BicubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_a6f6f71411f6aae1], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolator)[] = {
          { Py_tp_methods, t_BicubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolator, t_BicubicInterpolator, BicubicInterpolator);

        void t_BicubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolator), &PY_TYPE_DEF(BicubicInterpolator), module, "BicubicInterpolator", 0);
        }

        void t_BicubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "class_", make_descriptor(BicubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "wrapfn_", make_descriptor(t_BicubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolator::wrap_Object(BicubicInterpolator(((t_BicubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BicubicInterpolator object((jobject) NULL);

          INT_CALL(object = BicubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BicubicInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
